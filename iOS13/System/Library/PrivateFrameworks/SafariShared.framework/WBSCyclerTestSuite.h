/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSCyclerTestSuite <NSObject>
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@optional
+(BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2;
-(BOOL)isFinished;
-(BOOL)canHandleRequest:(id)arg1;
-(void)tearDown;
-(void)setUp;
-(void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(id)init;
-(void)runWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

