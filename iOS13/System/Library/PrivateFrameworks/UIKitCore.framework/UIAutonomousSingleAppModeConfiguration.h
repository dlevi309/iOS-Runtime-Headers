/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface UIAutonomousSingleAppModeConfiguration : NSObject <NSCopying> {

	NSMutableDictionary* _propertiesAsDictionary;
	unsigned long long _style;

}

@property (assign,nonatomic) unsigned long long style;                               //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL allowsLockButton; 
@property (assign,nonatomic) BOOL allowsAutoLock; 
@property (assign,nonatomic) BOOL automaticallyRelaunchesAfterAppCrash; 
@property (nonatomic,readonly) NSDictionary * propertiesAsDictionary; 
+(id)defaultConfiguration;
+(id)defaultConfigurationForStyle:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(BOOL)_boolValueForFeatureKey:(id)arg1 ;
-(void)_setBoolValue:(BOOL)arg1 forFeatureKey:(id)arg2 ;
-(BOOL)__gaxTrampoline_defaultBoolValueForFeatureKey:(id)arg1 ;
-(BOOL)allowsLockButton;
-(void)setAllowsLockButton:(BOOL)arg1 ;
-(BOOL)allowsAutoLock;
-(void)setAllowsAutoLock:(BOOL)arg1 ;
-(BOOL)automaticallyRelaunchesAfterAppCrash;
-(void)setAutomaticallyRelaunchesAfterAppCrash:(BOOL)arg1 ;
-(NSDictionary *)propertiesAsDictionary;
@end

