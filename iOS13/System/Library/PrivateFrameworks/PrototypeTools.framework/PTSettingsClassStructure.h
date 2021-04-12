/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSSet;

@interface PTSettingsClassStructure : NSObject <NSSecureCoding> {

	NSDictionary* _classNames;
	NSDictionary* _structNames;
	NSDictionary* _classes;
	NSString* _settingsClassName;
	unsigned long long _settingsClassVersion;
	NSSet* _leafKeys;
	NSSet* _childKeys;
	NSSet* _outletKeys;

}

@property (nonatomic,retain) NSString * settingsClassName;                         //@synthesize settingsClassName=_settingsClassName - In the implementation block
@property (assign,nonatomic) unsigned long long settingsClassVersion;              //@synthesize settingsClassVersion=_settingsClassVersion - In the implementation block
@property (nonatomic,retain) NSSet * leafKeys;                                     //@synthesize leafKeys=_leafKeys - In the implementation block
@property (nonatomic,retain) NSSet * childKeys;                                    //@synthesize childKeys=_childKeys - In the implementation block
@property (nonatomic,retain) NSSet * outletKeys;                                   //@synthesize outletKeys=_outletKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)structureForSettingsClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)childKeys;
-(NSSet *)outletKeys;
-(NSSet *)leafKeys;
-(id)filteredForProxySettings;
-(Class)childClassForKey:(id)arg1 ;
-(NSString *)settingsClassName;
-(unsigned long long)settingsClassVersion;
-(void)setSettingsClassName:(NSString *)arg1 ;
-(void)setSettingsClassVersion:(unsigned long long)arg1 ;
-(void)setLeafKeys:(NSSet *)arg1 ;
-(void)setChildKeys:(NSSet *)arg1 ;
-(void)setOutletKeys:(NSSet *)arg1 ;
-(id)leafStructNameForKey:(id)arg1 ;
-(Class)leafClassForKey:(id)arg1 ;
-(Class)_classForKey:(id)arg1 ;
-(id)_decodeStringSetForKey:(id)arg1 withCoder:(id)arg2 ;
-(id)_decodeStringStringDictionaryForKey:(id)arg1 withCoder:(id)arg2 ;
@end

