/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSettings.h>

@class NSMutableDictionary;

@interface BSKeyedSettings : BSSettings {

	NSMutableDictionary* _keyMap;

}
-(id)_keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4 ;
-(BOOL)isKeyedSettings;
-(void)_removeAllSettings;
-(void)enumerateKeyedObjectsWithBlock:(/*^block*/id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)_init;
-(void)enumerateKeyedFlagsWithBlock:(/*^block*/id)arg1 ;
-(long long)flagForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

