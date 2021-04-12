/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol BSSettingDescriptionProvider;
@class BSMutableIntegerMap, NSString;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding> {

	BSMutableIntegerMap* _settingToFlagMap;
	BSMutableIntegerMap* _settingToObjectMap;
	id<BSSettingDescriptionProvider> _descriptionProvider;

}

@property (assign,nonatomic,__weak) id<BSSettingDescriptionProvider> descriptionProvider;              //@synthesize descriptionProvider=_descriptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(id)_keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)init;
-(id)basicDescriptionWithPrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<BSSettingDescriptionProvider>)descriptionProvider;
-(void)setDescriptionProvider:(id<BSSettingDescriptionProvider>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4 ;
-(void)enumerateFlagsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isKeyedSettings;
-(void)_removeAllSettings;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)allSettings;
-(id)objectForSetting:(unsigned long long)arg1 ;
-(BOOL)boolForSetting:(unsigned long long)arg1 ;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(long long)flagForSetting:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEmpty;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

