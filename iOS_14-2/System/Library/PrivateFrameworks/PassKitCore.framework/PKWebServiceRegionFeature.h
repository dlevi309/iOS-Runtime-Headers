/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, PKOSVersionRequirementRange;

@interface PKWebServiceRegionFeature : NSObject {

	BOOL _automaticRegister;
	float _enablementThreshold;
	NSString* _region;
	long long _featureType;
	long long _registrationType;
	PKOSVersionRequirementRange* _versionRange;

}

@property (nonatomic,copy,readonly) NSString * region;                                  //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) long long featureType;                                   //@synthesize featureType=_featureType - In the implementation block
@property (nonatomic,readonly) long long registrationType;                              //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,readonly) float enablementThreshold;                               //@synthesize enablementThreshold=_enablementThreshold - In the implementation block
@property (nonatomic,readonly) BOOL automaticRegister;                                  //@synthesize automaticRegister=_automaticRegister - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirementRange * versionRange;              //@synthesize versionRange=_versionRange - In the implementation block
+(id)regionFeatureWithType:(long long)arg1 dictionary:(id)arg2 region:(id)arg3 ;
-(NSString *)region;
-(long long)featureType;
-(BOOL)automaticRegister;
-(float)enablementThreshold;
-(id)initWithFeatureType:(long long)arg1 dictionary:(id)arg2 region:(id)arg3 ;
-(long long)registrationType;
-(PKOSVersionRequirementRange *)versionRange;
@end

