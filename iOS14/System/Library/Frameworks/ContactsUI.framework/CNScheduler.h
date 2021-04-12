/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNScheduler <CNTimeProvider,NSObject>
@required
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3;
-(id)performCancelableBlock:(/*^block*/id)arg1;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2;
-(void)performBlock:(/*^block*/id)arg1;

@end

