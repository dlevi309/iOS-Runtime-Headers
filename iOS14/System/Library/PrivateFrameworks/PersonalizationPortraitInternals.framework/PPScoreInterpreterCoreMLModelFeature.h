/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString;

@interface PPScoreInterpreterCoreMLModelFeature : NSObject {

	NSString* _featureName;
	long long _featureType;
	unsigned long long _multiArraySize;

}

@property (nonatomic,readonly) NSString * featureName;                         //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) long long featureType;                          //@synthesize featureType=_featureType - In the implementation block
@property (nonatomic,readonly) unsigned long long multiArraySize;              //@synthesize multiArraySize=_multiArraySize - In the implementation block
-(id)init;
-(long long)featureType;
-(NSString *)featureName;
-(unsigned long long)multiArraySize;
-(id)initWithFeatureName:(id)arg1 multiArraySize:(unsigned long long)arg2 ;
-(id)initWithFeatureName:(id)arg1 ;
@end

