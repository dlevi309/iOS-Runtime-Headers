/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface UIAutonomousSingleAppModeConfiguration : NSObject <NSCopying> {

	NSMutableDictionary* _propertiesAsDictionary;
	unsigned long long _style;
	NSDictionary* _managedConfigurationSettings;

}

@property (assign,nonatomic) unsigned long long style;                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL allowsLockButton; 
@property (assign,nonatomic) BOOL allowsAutoLock; 
@property (assign,nonatomic) BOOL automaticallyRelaunchesAfterAppCrash; 
@property (nonatomic,retain) NSDictionary * managedConfigurationSettings;              //@synthesize managedConfigurationSettings=_managedConfigurationSettings - In the implementation block
@property (nonatomic,readonly) NSDictionary * propertiesAsDictionary; 
+(id)defaultConfiguration;
+(id)defaultConfigurationForStyle:(unsigned long long)arg1 ;
-(BOOL)__gaxTrampoline_defaultBoolValueForFeatureKey:(id)arg1 ;
-(void)setAutomaticallyRelaunchesAfterAppCrash:(BOOL)arg1 ;
-(BOOL)automaticallyRelaunchesAfterAppCrash;
-(void)setManagedConfigurationSettings:(NSDictionary *)arg1 ;
-(BOOL)allowsAutoLock;
-(void)_setBoolValue:(BOOL)arg1 forFeatureKey:(id)arg2 ;
-(NSDictionary *)managedConfigurationSettings;
-(BOOL)_boolValueForFeatureKey:(id)arg1 ;
-(BOOL)allowsLockButton;
-(void)setAllowsLockButton:(BOOL)arg1 ;
-(NSDictionary *)propertiesAsDictionary;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setAllowsAutoLock:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
@end

