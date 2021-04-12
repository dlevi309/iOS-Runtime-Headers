/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HKSPObject.h>
#import <libobjc.A.dylib/HKSPDictionarySerializable.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NAHashable.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSNumber, NSDate, NSSet;

@interface HKSPAlarmConfiguration : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying> {

	BOOL _enabled;
	BOOL _allowsSnooze;
	unsigned long long _version;
	unsigned long long _playOptions;
	NSString* _toneIdentifier;
	NSString* _vibrationIdentifier;
	NSNumber* _soundVolume;

}

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL allowsSnooze;                                //@synthesize allowsSnooze=_allowsSnooze - In the implementation block
@property (nonatomic,readonly) unsigned long long playOptions;                   //@synthesize playOptions=_playOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * toneIdentifier;                   //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * vibrationIdentifier;              //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * soundVolume;                      //@synthesize soundVolume=_soundVolume - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSSet * significantChanges; 
+(BOOL)supportsSecureCoding;
+(id)testAlarmConfiguration;
+(id)testAlarmConfigurationWithAllPropertiesSet;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(id)succinctDescription;
-(NSString *)vibrationIdentifier;
-(BOOL)_needsMigrationForCoder:(id)arg1 ;
-(NSNumber *)soundVolume;
-(id)init;
-(id)mutableCopy;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)toneIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_equateTo:(id)arg1 builderBuilderBlock:(/*^block*/id)arg2 ;
-(void)copyFromObject:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_migrateForCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)playOptions;
-(unsigned long long)hash;
-(id)initFromObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_buildForEquivalenceTo:(id)arg1 builder:(id)arg2 ;
-(BOOL)isEnabled;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)allowsSnooze;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)significantChanges;
@end

