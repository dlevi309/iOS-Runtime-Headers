/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol CBContainerProtocol <NSObject>
@required
-(void)registerNotificationBlock:(/*^block*/id)arg1;
-(id)copyPropertyForKey:(id)arg1;
-(void)unregisterNotificationBlock;
-(BOOL)start;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2;
-(void)stop;
-(void)scheduleWithDispatchQueue:(id)arg1;
-(void)unscheduleWithDispatchQueue:(id)arg1;

@end

