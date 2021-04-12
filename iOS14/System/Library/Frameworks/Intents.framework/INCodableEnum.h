/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSDictionary, INCodableLocalizationTable, NSString, NSArray;

@interface INCodableEnum : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	NSDictionary* _valuesByIndex;
	INCodableLocalizationTable* _localizationTable;
	NSString* _name;
	NSString* _displayName;
	NSString* _displayNameID;
	NSString* _enumNamespace;
	long long _type;
	NSArray* _values;

}

@property (setter=_setLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _localizationTable;              //@synthesize localizationTable=_localizationTable - In the implementation block
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
+(BOOL)supportsSecureCoding;
+(id)__NameKey;
+(id)__INCodableEnumValueSynonymSynonymKey;
+(id)__INCodableEnumValueSynonymPronunciationHintKey;
+(id)__INCodableEnumValueSynonymPronunciationHintIDKey;
+(id)__INCodableEnumValueSynonymSynonymIDKey;
+(id)__INCodableEnumValueIndexKey;
+(id)__INCodableEnumValueDisplayNameKey;
+(id)__INCodableEnumValueDisplayNameIDKey;
+(id)__INCodableEnumValueSynonymsKey;
+(id)__INCodableEnumValueNameKey;
+(id)__TypeKey;
+(id)__ValuesKey;
+(id)__DisplayNameKey;
+(id)__DisplayNameIDKey;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)updateWithDictionary:(id)arg1 ;
-(NSArray *)values;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valuesByIndexForValues:(id)arg1 ;
-(id)initWithName:(id)arg1 displayName:(id)arg2 displayNameID:(id)arg3 enumNamespace:(id)arg4 type:(long long)arg5 values:(id)arg6 localizationTable:(id)arg7 ;
-(void)_setEnumNamespace:(id)arg1 ;
-(NSString *)name;
-(NSString *)localizedDisplayName;
-(id)localizedDisplayNameWithLocalizer:(id)arg1 ;
-(void)_setLocalizationTable:(id)arg1 ;
-(INCodableLocalizationTable *)_localizationTable;
-(id)valueForIndex:(unsigned long long)arg1 ;
-(NSString *)enumNamespace;
-(long long)type;
-(NSString *)displayNameID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

