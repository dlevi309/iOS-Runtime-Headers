/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSMutableArray, NSArray;

@interface HMSettingGroup : NSObject <NSSecureCoding> {

	NSString* _keyPath;
	NSUUID* _identifier;
	NSString* _name;
	NSMutableArray* _internalSettings;
	NSMutableArray* _internalGroups;

}

@property (copy,readonly) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * keyPath;                               //@synthesize keyPath=_keyPath - In the implementation block
@property (copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (retain) NSMutableArray * internalSettings;              //@synthesize internalSettings=_internalSettings - In the implementation block
@property (retain) NSMutableArray * internalGroups;                //@synthesize internalGroups=_internalGroups - In the implementation block
@property (copy,readonly) NSString * localizedTitle; 
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)keyPath;
-(NSArray *)settings;
-(void)merge:(id)arg1 ;
-(NSString *)localizedTitle;
-(NSArray *)groups;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)addGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(NSMutableArray *)internalGroups;
-(NSMutableArray *)internalSettings;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 groups:(id)arg3 settings:(id)arg4 ;
-(void)setInternalSettings:(NSMutableArray *)arg1 ;
-(void)setInternalGroups:(NSMutableArray *)arg1 ;
@end

