/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(PTProxySettingsDefinition *)definition;
-(id)initWithDefaultValues;
-(void)restoreDefaultValues;
-(id)module;
-(id)_initWithDefinition:(id)arg1 ;
-(void)restoreFromArchiveDictionary:(id)arg1 ;
-(id)_createChildForKey:(id)arg1 ;
@end

