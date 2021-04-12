/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSSet;

@interface PTSettingsClassStructure : NSObject <NSSecureCoding> {

	NSDictionary* _structNames;
	NSDictionary* _classes;
	NSDictionary* _classNames;
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
-(void)setLeafKeys:(NSSet *)arg1 ;
-(NSSet *)childKeys;
-(id)_decodeStringSetForKey:(id)arg1 withCoder:(id)arg2 ;
-(void)setOutletKeys:(NSSet *)arg1 ;
-(NSSet *)leafKeys;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)settingsClassVersion;
-(void)setSettingsClassVersion:(unsigned long long)arg1 ;
-(void)_generateClassNamesIfNecessary;
-(id)leafStructNameForKey:(id)arg1 ;
-(unsigned long long)hash;
-(NSSet *)outletKeys;
-(NSString *)settingsClassName;
-(id)initWithCoder:(id)arg1 ;
-(void)setSettingsClassName:(NSString *)arg1 ;
-(void)setChildKeys:(NSSet *)arg1 ;
-(Class)leafClassForKey:(id)arg1 ;
-(Class)childClassForKey:(id)arg1 ;
-(id)filteredForProxySettings;
-(Class)_classForKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_decodeStringStringDictionaryForKey:(id)arg1 withCoder:(id)arg2 ;
@end

