/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PTSettingsClassStructure, NSDictionary, PTModule;

@interface PTProxySettingsDefinition : NSObject <NSSecureCoding> {

	PTSettingsClassStructure* _structure;
	NSDictionary* _childDefinitions;
	NSDictionary* _defaultValueArchive;
	PTModule* _module;

}

@property (nonatomic,retain) PTSettingsClassStructure * structure;              //@synthesize structure=_structure - In the implementation block
@property (nonatomic,retain) NSDictionary * childDefinitions;                   //@synthesize childDefinitions=_childDefinitions - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultValueArchive;                //@synthesize defaultValueArchive=_defaultValueArchive - In the implementation block
@property (nonatomic,retain) PTModule * module;                                 //@synthesize module=_module - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)definitionForSettingsClass:(Class)arg1 ;
-(Class)settingsClass;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setModule:(PTModule *)arg1 ;
-(PTModule *)module;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)allSettingsClassesExistAndHaveCorrectVersion;
-(PTSettingsClassStructure *)structure;
-(NSDictionary *)defaultValueArchive;
-(NSDictionary *)childDefinitions;
-(void)setStructure:(PTSettingsClassStructure *)arg1 ;
-(void)setChildDefinitions:(NSDictionary *)arg1 ;
-(void)setDefaultValueArchive:(NSDictionary *)arg1 ;
@end

