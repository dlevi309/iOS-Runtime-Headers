/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDSettingGroup.h>

@class NSMutableSet, NSUUID, NSString, NSArray;

@interface HMDAccessorySettingGroup : HMFObject <HMFLogging, NSSecureCoding, HMDSettingGroup> {

	os_unfair_lock_s _lock;
	NSMutableSet* _settings;
	NSMutableSet* _groups;
	HMDAccessorySettingGroup* _mediaSystemSettingGroup;
	NSUUID* _parentIdentifier;
	NSString* _keyPath;
	NSUUID* _identifier;
	NSString* _name;

}

@property (copy) NSUUID * parentIdentifier;                                         //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (__weak) HMDAccessorySettingGroup * mediaSystemSettingGroup;              //@synthesize mediaSystemSettingGroup=_mediaSystemSettingGroup - In the implementation block
@property (copy,readonly) NSString * keyPath;                                       //@synthesize keyPath=_keyPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)supportedSettingsClasses;
+(id)supportedGroupsClasses;
-(id)init;
-(NSUUID *)parentIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)fullDescription;
-(id)logIdentifier;
-(NSArray *)groups;
-(NSString *)name;
-(NSString *)description;
-(NSArray *)settings;
-(void)setParentIdentifier:(NSUUID *)arg1 ;
-(void)removeSetting:(id)arg1 ;
-(void)removeGroup:(id)arg1 ;
-(id)settingWithIdentifier:(id)arg1 ;
-(id)groupWithIdentifier:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSUUID *)identifier;
-(void)addGroup:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMDAccessorySettingGroup *)mediaSystemSettingGroup;
-(BOOL)compareSettingsTree:(id)arg1 ;
-(id)copyReplica;
-(void)intersectSettingGroup:(id)arg1 groupMetadata:(id)arg2 shouldAddMissingItems:(BOOL)arg3 ;
-(id)copyIdentical;
-(id)initWithName:(id)arg1 identifier:(id)arg2 parentIdentifier:(id)arg3 ;
-(void)_setParentGroup:(id)arg1 ;
-(void)_reevaluateParentGroup:(id)arg1 ;
-(BOOL)shouldEncodeForCoder:(id)arg1 ;
-(BOOL)isPrivateToDevice;
-(void)setMediaSystemSettingGroup:(HMDAccessorySettingGroup *)arg1 ;
@end

