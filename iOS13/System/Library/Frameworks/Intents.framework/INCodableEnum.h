/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INCodableLocalizationTable, NSString, NSMutableDictionary, NSArray;

@interface INCodableEnum : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	INCodableLocalizationTable* _localizationTable;
	NSString* _enumValueKeyPrefix;
	NSString* _enumValueSynonymKeyPrefix;
	NSMutableDictionary* _dictionaryKeysForCacheGroup;
	NSString* _name;
	NSString* _displayName;
	NSString* _displayNameID;
	NSString* _enumNamespace;
	long long _type;
	NSArray* _values;

}

@property (nonatomic,retain) NSMutableDictionary * _dictionaryKeysForCacheGroup;                                       //@synthesize dictionaryKeysForCacheGroup=_dictionaryKeysForCacheGroup - In the implementation block
@property (setter=_setLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _localizationTable;              //@synthesize localizationTable=_localizationTable - In the implementation block
@property (nonatomic,copy,readonly) NSString * _enumValueKeyPrefix;                                                    //@synthesize enumValueKeyPrefix=_enumValueKeyPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * _enumValueSynonymKeyPrefix;                                             //@synthesize enumValueSynonymKeyPrefix=_enumValueSynonymKeyPrefix - In the implementation block
@property (setter=_setEnumNamespace:,nonatomic,copy) NSString * enumNamespace;                                         //@synthesize enumNamespace=_enumNamespace - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                                            //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayNameID;                                                          //@synthesize displayNameID=_displayNameID - In the implementation block
@property (nonatomic,readonly) long long type;                                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;                                                                  //@synthesize values=_values - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)values;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)localizedDisplayName;
-(INCodableLocalizationTable *)_localizationTable;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSMutableDictionary *)_dictionaryKeysForCacheGroup;
-(id)_dictionaryKeyForKeyPath:(id)arg1 object:(id)arg2 ;
-(void)_setLocalizationTable:(id)arg1 ;
-(void)set_dictionaryKeysForCacheGroup:(NSMutableDictionary *)arg1 ;
-(id)localizedDisplayNameWithLocalizer:(id)arg1 ;
-(NSString *)enumNamespace;
-(NSString *)displayNameID;
-(NSString *)_enumValueKeyPrefix;
-(NSString *)_enumValueSynonymKeyPrefix;
-(id)initWithName:(id)arg1 displayName:(id)arg2 displayNameID:(id)arg3 enumNamespace:(id)arg4 type:(long long)arg5 values:(id)arg6 localizationTable:(id)arg7 ;
-(void)_setEnumNamespace:(id)arg1 ;
@end

