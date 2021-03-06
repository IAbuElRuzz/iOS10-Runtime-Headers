/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailTranscriptSegment : NSObject <NSSecureCoding> {
    float  _confidence;
    double  _duration;
    NSString * _substring;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _substringRange;
    double  _timestamp;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString *substring;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } substringRange;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)confidence;
- (id)debugDescription;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTranscriptionSegment:(id)arg1;
- (id)substring;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })substringRange;
- (double)timestamp;

@end
