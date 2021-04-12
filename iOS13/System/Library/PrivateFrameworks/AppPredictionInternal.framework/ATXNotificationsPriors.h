/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDictionary, ATXApp2VecMapping;

@interface ATXNotificationsPriors : NSObject {

	NSDictionary* _parameters;
	double _defaultPrior;
	ATXApp2VecMapping* _appFeatures;

}
+(id)sharedInstance;
-(id)init;
-(id)initWithAssetClass:(Class)arg1 andPathToAppFeatures:(id)arg2 ;
-(double)getPriorForAppId:(id)arg1 ;
-(double)getAppBiasForBundleId:(id)arg1 ;
@end

