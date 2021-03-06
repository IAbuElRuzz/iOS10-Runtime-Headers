/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTLockScreenMonitor : VTEventMonitor {
    int  _notifyToken;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didLockScreenStateChanged:(unsigned char)arg1;
- (void)_didLockScreenStateChangedInQueue:(unsigned char)arg1;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned char)lockScreenState;
- (void)removeObserver:(id)arg1;

@end
