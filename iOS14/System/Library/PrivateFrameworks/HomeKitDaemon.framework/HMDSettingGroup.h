/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDSettingGroup.h>
@class NSArray, NSString;


@protocol HMDSettingGroup <HMDSettingBaseProtocol>
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (copy,readonly) NSString * keyPath; 
@required
-(NSArray *)groups;
-(NSArray *)settings;
-(NSString *)keyPath;

@end


@class NSArray, NSString, NSUUID, NSMutableSet;

@interface HMDSettingGroup : NSObject <HMDSettingGroup> {

	NSUUID* _identifier;
	NSUUID* _parentIdentifier;
	NSString* _name;
	NSString* _keyPath;
	NSMutableSet* _settingsInternal;
	NSMutableSet* _groupsInternal;

}

@property (retain) NSMutableSet * settingsInternal;                 //@synthesize settingsInternal=_settingsInternal - In the implementation block
@property (retain) NSMutableSet * groupsInternal;                   //@synthesize groupsInternal=_groupsInternal - In the implementation block
@property (copy,readonly) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSUUID * parentIdentifier;                //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (copy) NSString * keyPath;                                //@synthesize keyPath=_keyPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSUUID *)parentIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)groups;
-(NSString *)name;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSArray *)settings;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(NSUUID *)identifier;
-(void)addGroup:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 groups:(id)arg4 settings:(id)arg5 ;
-(NSMutableSet *)settingsInternal;
-(NSMutableSet *)groupsInternal;
-(void)setSettingsInternal:(NSMutableSet *)arg1 ;
-(void)setGroupsInternal:(NSMutableSet *)arg1 ;
@end

