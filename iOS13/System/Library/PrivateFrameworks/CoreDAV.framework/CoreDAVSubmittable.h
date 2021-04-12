/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSError *)error;
-(id)completionBlock;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(void)setTimeoutInterval:(double)arg1;
-(double)timeoutInterval;
-(id<CoreDAVTaskManager>)taskManager;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(void)setAccountInfoProvider:(id)arg1;
-(void)setTaskManager:(id)arg1;
-(void)finishEarlyWithError:(id)arg1;
-(void)submitWithTaskManager:(id)arg1;

@end

