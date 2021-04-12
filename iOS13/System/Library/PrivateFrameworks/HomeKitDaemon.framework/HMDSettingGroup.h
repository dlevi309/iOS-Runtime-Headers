/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDSettingGroupOwnerProtocol.h>

@class NSArray, NSString, NSUUID, NSMutableSet;

@interface HMDSettingGroup : NSObject <HMDSettingGroupOwnerProtocol> {

	NSUUID* _identifier;
	NSUUID* _parentIdentifier;
	NSString* _name;
	NSString* _keyPath;
	NSMutableSet* _settingsInternal;
	NSMutableSet* _groupsInternal;

}

@property (retain) NSMutableSet * settingsInternal;                 //@synthesize settingsInternal=_settingsInternal - In the implementation block
@property (retain) NSMutableSet * groupsInternal;                   //@synthesize groupsInternal=_groupsInternal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (copy) NSString * keyPath;                                //@synthesize keyPath=_keyPath - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(NSString *)keyPath;
-(id)initWithModel:(id)arg1 ;
-(NSArray *)settings;
-(NSArray *)groups;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)parentIdentifier;
-(void)addGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 groups:(id)arg4 settings:(id)arg5 ;
-(NSMutableSet *)settingsInternal;
-(NSMutableSet *)groupsInternal;
-(void)setSettingsInternal:(NSMutableSet *)arg1 ;
-(void)setGroupsInternal:(NSMutableSet *)arg1 ;
@end

