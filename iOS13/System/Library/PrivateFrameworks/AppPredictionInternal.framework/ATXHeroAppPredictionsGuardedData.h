/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSArray, NSDate;

@interface ATXHeroAppPredictionsGuardedData : NSObject {

	NSArray* _predictedBundleIds;
	NSDate* _expirationDate;
	NSDate* _now;

}
-(void)invalidate;
-(BOOL)isPastExpirationDate;
@end

