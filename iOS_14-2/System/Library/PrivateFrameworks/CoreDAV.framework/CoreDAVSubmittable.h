/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

@class NSError;


@protocol CoreDAVSubmittable <NSObject>
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager; 
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) double timeoutInterval; 
@required
-(id)completionBlock;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(NSError *)error;
-(void)finishEarlyWithError:(id)arg1;
-(void)setAccountInfoProvider:(id)arg1;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1;
-(id<CoreDAVTaskManager>)taskManager;
-(void)setTaskManager:(id)arg1;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(void)submitWithTaskManager:(id)arg1;

@end

