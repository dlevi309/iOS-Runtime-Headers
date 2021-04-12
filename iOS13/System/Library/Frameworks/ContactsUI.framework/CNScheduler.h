/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNScheduler <CNTimeProvider,NSObject>
@required
-(void)performBlock:(/*^block*/id)arg1;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2;
-(id)performCancelableBlock:(/*^block*/id)arg1;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2;

@end

