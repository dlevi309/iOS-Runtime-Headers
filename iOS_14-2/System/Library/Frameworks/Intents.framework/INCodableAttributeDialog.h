/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INCodableAttribute, NSString, INCodableDescription;

@interface INCodableAttributeDialog : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	BOOL _defaultDialog;
	INCodableAttribute* _codableAttribute;
	NSString* _formatString;
	NSString* _formatStringID;

}

@property (assign,setter=_setCodableAttribute:,nonatomic,__weak) INCodableAttribute * _codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,__weak,readonly) INCodableDescription * _codableDescription; 
@property (nonatomic,copy) NSString * formatString;                                                                   //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,copy) NSString * formatStringID;                                                                 //@synthesize formatStringID=_formatStringID - In the implementation block
@property (assign,getter=isDefaultDialog,nonatomic) BOOL defaultDialog;                                               //@synthesize defaultDialog=_defaultDialog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setFormatString:(NSString *)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(BOOL)isDefaultDialog;
-(id)dictionaryRepresentation;
-(INCodableDescription *)_codableDescription;
-(void)updateWithDictionary:(id)arg1 ;
-(NSString *)formatStringID;
-(void)setFormatStringID:(NSString *)arg1 ;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 localizer:(id)arg3 ;
-(NSString *)formatString;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringKey;
-(void)encodeWithCoder:(id)arg1 ;
-(INCodableAttribute *)_codableAttribute;
-(void)_setCodableAttribute:(id)arg1 ;
-(void)setDefaultDialog:(BOOL)arg1 ;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 forLanguage:(id)arg3 ;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)__INCodableDescriptionFormatStringIDKey;
-(BOOL)isEqual:(id)arg1 ;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
@end

