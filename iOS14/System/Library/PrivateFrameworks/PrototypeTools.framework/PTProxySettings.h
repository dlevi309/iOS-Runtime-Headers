/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSettings.h>

@class NSMutableDictionary, PTProxySettingsDefinition;

@interface PTProxySettings : PTSettings {

	NSMutableDictionary* _values;
	PTProxySettingsDefinition* _definition;

}

@property (nonatomic,readonly) PTProxySettingsDefinition * definition;              //@synthesize definition=_definition - In the implementation block
+(id)new;
+(id)settingsFromArchiveDictionary:(id)arg1 ;
+(id)proxyWithDefinition:(id)arg1 ;
+(id)settingsOrProxyWithDefinition:(id)arg1 ;
-(id)_initWithDefinition:(id)arg1 ;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(PTProxySettingsDefinition *)definition;
-(id)module;
-(void)restoreFromArchiveDictionary:(id)arg1 ;
-(id)initWithDefaultValues;
-(void)restoreDefaultValues;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_createChildForKey:(id)arg1 ;
@end

