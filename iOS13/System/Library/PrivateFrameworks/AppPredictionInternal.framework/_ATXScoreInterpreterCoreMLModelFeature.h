/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSString;

@interface _ATXScoreInterpreterCoreMLModelFeature : NSObject {

	NSString* _featureName;
	long long _featureType;
	unsigned long long _multiArraySize;

}

@property (nonatomic,readonly) NSString * featureName;                         //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) long long featureType;                          //@synthesize featureType=_featureType - In the implementation block
@property (nonatomic,readonly) unsigned long long multiArraySize;              //@synthesize multiArraySize=_multiArraySize - In the implementation block
-(id)init;
-(NSString *)featureName;
-(long long)featureType;
-(id)initWithFeatureName:(id)arg1 multiArraySize:(unsigned long long)arg2 ;
-(id)initWithFeatureName:(id)arg1 ;
-(unsigned long long)multiArraySize;
@end

