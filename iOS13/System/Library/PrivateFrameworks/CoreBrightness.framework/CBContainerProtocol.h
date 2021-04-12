/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol CBContainerProtocol <NSObject>
@required
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2;
-(void)stop;
-(BOOL)start;
-(void)registerNotificationBlock:(/*^block*/id)arg1;
-(id)copyPropertyForKey:(id)arg1;
-(void)unregisterNotificationBlock;
-(void)scheduleWithDispatchQueue:(id)arg1;
-(void)unscheduleWithDispatchQueue:(id)arg1;

@end

