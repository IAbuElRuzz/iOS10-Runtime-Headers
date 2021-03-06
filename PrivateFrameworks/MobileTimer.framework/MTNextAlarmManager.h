/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTNextAlarmManager : NSObject <ClockManagerNotificationObserver> {
    Alarm * _nextAlarm;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) Alarm *nextAlarm;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addNextAlarmObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)localNotificationsDidChangeForClockManager:(id)arg1;
- (id)nextAlarm;
- (id)observers;
- (void)removeNextAlarmObserver:(id)arg1;
- (void)setNextAlarm:(id)arg1;
- (void)setObservers:(id)arg1;

@end
