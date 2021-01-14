/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@class NSString;

@interface PowerUIModelPredictionContainer : NSObject {

	NSString* _modelVersion;
	unsigned long long _state;
	double _engagementConfidence;
	double _smartChargeDuration;

}

@property (nonatomic,readonly) NSString * modelVersion;                  //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double engagementConfidence;              //@synthesize engagementConfidence=_engagementConfidence - In the implementation block
@property (nonatomic,readonly) double smartChargeDuration;               //@synthesize smartChargeDuration=_smartChargeDuration - In the implementation block
-(NSString *)modelVersion;
-(unsigned long long)state;
-(id)initWithEngagementConfidence:(double)arg1 withSmartChargeDuration:(double)arg2 withModelVersion:(id)arg3 ;
-(id)initInvalidEntry:(unsigned long long)arg1 withEngagementConfidence:(double)arg2 withSmartChargeDuration:(double)arg3 withModelVersion:(id)arg4 ;
-(double)engagementConfidence;
-(double)smartChargeDuration;
@end

