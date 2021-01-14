/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSUserDefaults, NSMutableDictionary;

@interface MLFeatureFlags : NSObject {

	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _flags;
	NSMutableDictionary* _overrideOriginalValues;

}

@property (nonatomic,readonly) NSUserDefaults * userDefaults;                             //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * overrideOriginalValues;              //@synthesize overrideOriginalValues=_overrideOriginalValues - In the implementation block
+(id)sharedFeatureFlags;
-(id)init;
-(NSMutableDictionary *)flags;
-(NSUserDefaults *)userDefaults;
-(void)defineFeatures;
-(BOOL)isNNv2Enabled;
-(void)addFeature:(id)arg1 withControlName:(id)arg2 defaultValue:(BOOL)arg3 ;
-(BOOL)isFeatureEnabled:(id)arg1 ;
-(id)controlKeyForFeature:(id)arg1 ;
-(BOOL)setOverride:(BOOL)arg1 forFeature:(id)arg2 ;
-(BOOL)removeOverrideForFeature:(id)arg1 ;
-(NSMutableDictionary *)overrideOriginalValues;
@end

