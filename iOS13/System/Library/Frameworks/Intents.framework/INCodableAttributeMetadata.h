/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSString, INCodableAttribute, INCodableLocalizationTable;

@interface INCodableAttributeMetadata : NSObject <NSSecureCoding, INCodableCoding> {

	NSString* _name;
	NSString* _placeholder;
	NSString* _placeholderID;
	INCodableAttribute* _codableAttribute;

}

@property (nonatomic,__weak,readonly) INCodableAttribute * codableAttribute;                      //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,copy,readonly) INCodableLocalizationTable * _localizationTable; 
@property (nonatomic,copy,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                                //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * placeholderID;                                              //@synthesize placeholderID=_placeholderID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPlaceholder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(INCodableLocalizationTable *)_localizationTable;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(id)_localizedDialogTokensWithLocalizer:(id)arg1 ;
-(id)initWithName:(id)arg1 codableAttribute:(id)arg2 ;
-(NSString *)localizedPlaceholder;
-(id)localizedPlaceholderWithLocalizer:(id)arg1 ;
-(NSString *)placeholderID;
-(void)setPlaceholderID:(NSString *)arg1 ;
@end

