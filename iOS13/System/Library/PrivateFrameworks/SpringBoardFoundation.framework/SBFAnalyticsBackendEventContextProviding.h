/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

@class SBSAnalyticsState;


@protocol SBFAnalyticsBackendEventContextProviding <NSObject>
@property (nonatomic,readonly) SBSAnalyticsState * eventPayload; 
@required
-(SBSAnalyticsState *)eventPayload;
-(void)stateForQueryName:(unsigned long long)arg1 completion:(/*^block*/id)arg2;

@end

