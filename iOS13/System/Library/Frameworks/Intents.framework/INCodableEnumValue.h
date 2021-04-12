/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCodableAttributeRelationComparing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INCodableEnum, NSString, NSArray;

@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, NSSecureCoding, NSCopying, INCodableCoding> {

	INCodableEnum* _codableEnum;
	long long _index;
	NSString* _name;
	NSString* _displayName;
	NSString* _displayNameLocID;
	NSArray* _synonyms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setCodableEnum:,nonatomic,__weak) INCodableEnum * _codableEnum;              //@synthesize codableEnum=_codableEnum - In the implementation block
@property (assign,nonatomic) long long index;                                                          //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayNameLocID;                                                //@synthesize displayNameLocID=_displayNameLocID - In the implementation block
@property (nonatomic,retain) NSArray * synonyms;                                                       //@synthesize synonyms=_synonyms - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)index;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(NSString *)localizedDisplayName;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSArray *)synonyms;
-(void)setSynonyms:(NSArray *)arg1 ;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)localizedDisplayNameWithLocalizer:(id)arg1 ;
-(NSString *)displayNameLocID;
-(void)setDisplayNameLocID:(NSString *)arg1 ;
-(INCodableEnum *)_codableEnum;
-(id)localizedDisplayNameForLanguage:(id)arg1 ;
-(void)_setCodableEnum:(id)arg1 ;
@end

