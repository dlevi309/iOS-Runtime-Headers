/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/


@class NSOperationQueue;

@interface LKLoginSupport : NSObject {

	NSOperationQueue* _listenerQueue;
	NSOperationQueue* _completionQueue;

}

@property (nonatomic,retain) NSOperationQueue * listenerQueue;                //@synthesize listenerQueue=_listenerQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(BOOL)hasCleanUser;
+(id)findLeastRecentlyUsedCleanUser;
+(BOOL)isNewUserAbleToLogin;
-(void)setCompletionQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)completionQueue;
-(id)init;
-(NSOperationQueue *)listenerQueue;
-(void)setListenerQueue:(NSOperationQueue *)arg1 ;
-(id)_errorForNotificationType:(unsigned long long)arg1 ;
-(id)_notificationForNotificationType:(unsigned long long)arg1 ;
-(void)_timeOutAfterTimePeriod:(double)arg1 withError:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_runWithTimeOutPeriod:(double)arg1 notificationType:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_runWhenDarwinNotificationPosted:(unsigned long long)arg1 timeOutPeriod:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)runWithTimeOutPeriod:(double)arg1 loggedInBlock:(/*^block*/id)arg2 ;
-(void)runWithTimeOutPeriod:(double)arg1 readyToLoginBlock:(/*^block*/id)arg2 ;
@end

