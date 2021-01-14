/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <Sleep/HKSPAlarmConfiguration.h>
#import <libobjc.A.dylib/HKSPMutableObject.h>

@class HKSPChangeSet, NSString, NSNumber, NSDate, NSSet;

@interface HKSPMutableAlarmConfiguration : HKSPAlarmConfiguration <HKSPMutableObject> {

	HKSPChangeSet* _changeSet;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL allowsSnooze; 
@property (nonatomic,copy) NSString * toneIdentifier; 
@property (nonatomic,copy) NSString * vibrationIdentifier; 
@property (nonatomic,copy) NSNumber * soundVolume; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) HKSPChangeSet * changeSet;                //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)freeze;
-(HKSPChangeSet *)changeSet;
-(NSString *)vibrationIdentifier;
-(void)setToneIdentifier:(NSString *)arg1 ;
-(NSNumber *)soundVolume;
-(id)init;
-(void)setVibrationIdentifier:(NSString *)arg1 ;
-(id)mutableCopy;
-(void)setPlayOptions:(unsigned long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)toneIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)playOptions;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)initWithTemplateAlarmConfiguration:(id)arg1 ;
-(void)setAllowsSnooze:(BOOL)arg1 ;
-(void)setSoundVolume:(NSNumber *)arg1 ;
-(BOOL)allowsSnooze;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

