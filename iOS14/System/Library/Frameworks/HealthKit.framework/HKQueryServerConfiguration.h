/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class NSString, HKObjectType, _HKFilter;

@interface HKQueryServerConfiguration : HKTaskConfiguration {

	BOOL _shouldDeactivateAfterInitialResults;
	BOOL _shouldSuppressDataCollection;
	NSString* _debugIdentifier;
	HKObjectType* _objectType;
	_HKFilter* _filter;
	long long _qualityOfService;
	double _activationTime;

}

@property (nonatomic,copy) HKObjectType * objectType;                               //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) _HKFilter * filter;                                    //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                            //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL shouldDeactivateAfterInitialResults;              //@synthesize shouldDeactivateAfterInitialResults=_shouldDeactivateAfterInitialResults - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressDataCollection;                     //@synthesize shouldSuppressDataCollection=_shouldSuppressDataCollection - In the implementation block
@property (assign,nonatomic) double activationTime;                                 //@synthesize activationTime=_activationTime - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                              //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setFilter:(_HKFilter *)arg1 ;
-(_HKFilter *)filter;
-(id)init;
-(NSString *)debugIdentifier;
-(HKObjectType *)objectType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setObjectType:(HKObjectType *)arg1 ;
-(void)setActivationTime:(double)arg1 ;
-(void)setShouldDeactivateAfterInitialResults:(BOOL)arg1 ;
-(void)setShouldSuppressDataCollection:(BOOL)arg1 ;
-(double)activationTime;
-(BOOL)shouldSuppressDataCollection;
-(BOOL)shouldDeactivateAfterInitialResults;
-(id)initWithCoder:(id)arg1 ;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(long long)qualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

