/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString;

@interface AMSFeatureFlag : NSObject {

	BOOL _testable;
	BOOL _enabled;
	BOOL _defaultEnabled;
	BOOL _userEnabled;
	BOOL _hidden;
	NSString* _feature;
	NSString* _displayName;
	NSString* _featureDescription;
	NSString* _domain;
	NSString* _ITFE;
	NSString* _flagGroup;

}

@property (assign,getter=isHidden,nonatomic) BOOL hidden;                              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * feature;                                         //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * featureDescription;                              //@synthesize featureDescription=_featureDescription - In the implementation block
@property (nonatomic,copy) NSString * domain;                                          //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * ITFE;                                            //@synthesize ITFE=_ITFE - In the implementation block
@property (nonatomic,copy) NSString * flagGroup;                                       //@synthesize flagGroup=_flagGroup - In the implementation block
@property (assign,getter=isTestable,nonatomic) BOOL testable;                          //@synthesize testable=_testable - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isDefaultEnabled,nonatomic) BOOL defaultEnabled;              //@synthesize defaultEnabled=_defaultEnabled - In the implementation block
@property (assign,getter=isUserEnabled,nonatomic) BOOL userEnabled;                    //@synthesize userEnabled=_userEnabled - In the implementation block
+(id)allFlagGroupsIncludingHidden:(BOOL)arg1 ;
+(id)flagForFeature:(id)arg1 domain:(id)arg2 ;
+(void)addNewITFEFeaturesWithNames:(id)arg1 ;
+(void)setNonProfileITFEFeatureName:(id)arg1 toValue:(id)arg2 ;
+(id)allFlagGroups;
+(id)flagGroupWithName:(id)arg1 includingHidden:(BOOL)arg2 ;
+(void)setFlagGroup:(id)arg1 enabled:(BOOL)arg2 error:(id*)arg3 ;
+(id)fetchProfileITFEFeatures;
+(id)fetchITFEFeatures;
+(void)enableFlagForFeature:(id)arg1 domain:(id)arg2 error:(id*)arg3 ;
+(void)disableFlagForFeature:(id)arg1 domain:(id)arg2 error:(id*)arg3 ;
+(id)flagGroupWithName:(id)arg1 ;
+(void)enableFlagGroup:(id)arg1 error:(id*)arg2 ;
+(void)disableFlagGroup:(id)arg1 error:(id*)arg2 ;
-(NSString *)ITFE;
-(NSString *)feature;
-(BOOL)isHidden;
-(void)setTestable:(BOOL)arg1 ;
-(void)setFlagGroup:(NSString *)arg1 ;
-(void)setITFE:(NSString *)arg1 ;
-(void)setDefaultEnabled:(BOOL)arg1 ;
-(void)setFeatureDescription:(NSString *)arg1 ;
-(BOOL)isDefaultEnabled;
-(NSString *)featureDescription;
-(BOOL)isUserEnabled;
-(void)setHidden:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)flagGroup;
-(BOOL)isEnabled;
-(BOOL)isTestable;
-(void)setUserEnabled:(BOOL)arg1 ;
-(NSString *)displayName;
-(void)setFeature:(NSString *)arg1 ;
@end

