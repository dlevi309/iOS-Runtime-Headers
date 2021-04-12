/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXActionValuation : NSObject
-(id)getCurrentLocation;
-(BOOL)shouldPredictSendMessageIntent:(id)arg1 ;
-(BOOL)shouldPredictRequestRideIntent:(id)arg1 ;
-(BOOL)shouldPredictIntent:(id)arg1 ;
-(void)scoreAndFilterActions:(id)arg1 actionStatistics:(id)arg2 scoreLogger:(id)arg3 ;
@end

