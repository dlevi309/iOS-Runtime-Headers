/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, NSArray;

@interface HKFeatureAvailabilityInternalSettingsConfiguration : NSObject {

	NSString* _featureIdentifier;
	NSString* _userDefaultsDomain;
	NSString* _userDefaultsKey;
	unsigned long long _options;
	NSArray* _samplesTypesToDelete;

}

@property (nonatomic,copy) NSString * featureIdentifier;                //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,copy) NSString * userDefaultsDomain;               //@synthesize userDefaultsDomain=_userDefaultsDomain - In the implementation block
@property (nonatomic,copy) NSString * userDefaultsKey;                  //@synthesize userDefaultsKey=_userDefaultsKey - In the implementation block
@property (assign,nonatomic) unsigned long long options;                //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSArray * samplesTypesToDelete;              //@synthesize samplesTypesToDelete=_samplesTypesToDelete - In the implementation block
-(NSString *)userDefaultsKey;
-(unsigned long long)options;
-(void)setUserDefaultsKey:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSString *)featureIdentifier;
-(void)setFeatureIdentifier:(NSString *)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg1 userDefaultsDomain:(id)arg2 userDefaultsKey:(id)arg3 options:(unsigned long long)arg4 samplesTypesToDelete:(id)arg5 ;
-(BOOL)showFeatureEnable;
-(BOOL)syncToWatch;
-(BOOL)requireReboot;
-(NSString *)userDefaultsDomain;
-(void)setUserDefaultsDomain:(NSString *)arg1 ;
-(NSArray *)samplesTypesToDelete;
-(void)setSamplesTypesToDelete:(NSArray *)arg1 ;
@end

