/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSCyclerTestSuite <NSObject>
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@optional
+(BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2;
-(void)setUp;
-(void)tearDown;
-(BOOL)isFinished;
-(BOOL)canHandleRequest:(id)arg1;
-(void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(id)init;
-(void)runWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

