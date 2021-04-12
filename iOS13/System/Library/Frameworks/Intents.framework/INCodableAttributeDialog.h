/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSString, INCodableAttribute;

@interface INCodableAttributeDialog : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	BOOL _defaultDialog;
	INCodableAttribute* _codableAttribute;
	NSString* _formatString;
	NSString* _formatStringID;

}

@property (assign,setter=_setCodableAttribute:,nonatomic,__weak) INCodableAttribute * _codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,copy) NSString * formatString;                                                                   //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,copy) NSString * formatStringID;                                                                 //@synthesize formatStringID=_formatStringID - In the implementation block
@property (assign,getter=isDefaultDialog,nonatomic) BOOL defaultDialog;                                               //@synthesize defaultDialog=_defaultDialog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)formatString;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(INCodableAttribute *)_codableAttribute;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 ;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 forLanguage:(id)arg3 ;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 localizer:(id)arg3 ;
-(void)_setCodableAttribute:(id)arg1 ;
-(void)setFormatString:(NSString *)arg1 ;
-(NSString *)formatStringID;
-(void)setFormatStringID:(NSString *)arg1 ;
-(BOOL)isDefaultDialog;
-(void)setDefaultDialog:(BOOL)arg1 ;
@end

