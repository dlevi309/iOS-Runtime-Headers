/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INCodableLocalizationTable, NSString;

@interface INParameterCombination : NSObject <NSSecureCoding, INCodableCoding> {

	BOOL _primary;
	BOOL _supportsBackgroundExecution;
	INCodableLocalizationTable* _localizationTable;
	NSString* _titleFormatString;
	NSString* _titleFormatStringLocID;
	NSString* _subtitleFormatString;
	NSString* _subtitleFormatStringLocID;

}

@property (setter=_setLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _localizationTable;              //@synthesize localizationTable=_localizationTable - In the implementation block
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                                            //@synthesize primary=_primary - In the implementation block
@property (assign,nonatomic) BOOL supportsBackgroundExecution;                                                         //@synthesize supportsBackgroundExecution=_supportsBackgroundExecution - In the implementation block
@property (nonatomic,copy) NSString * titleFormatString;                                                               //@synthesize titleFormatString=_titleFormatString - In the implementation block
@property (nonatomic,copy) NSString * titleFormatStringLocID;                                                          //@synthesize titleFormatStringLocID=_titleFormatStringLocID - In the implementation block
@property (nonatomic,copy) NSString * subtitleFormatString;                                                            //@synthesize subtitleFormatString=_subtitleFormatString - In the implementation block
@property (nonatomic,copy) NSString * subtitleFormatStringLocID;                                                       //@synthesize subtitleFormatStringLocID=_subtitleFormatStringLocID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitleFormatString; 
@property (nonatomic,copy,readonly) NSString * localizedSubtitleFormatString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(BOOL)isPrimary;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)updateWithDictionary:(id)arg1 ;
-(id)localizedTitleFormatStringWithLocalizer:(id)arg1 ;
-(id)localizedSubtitleFormatStringWithLocalizer:(id)arg1 ;
-(void)setTitleFormatString:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)titleFormatStringLocID;
-(BOOL)supportsBackgroundExecution;
-(NSString *)description;
-(NSString *)localizedTitleFormatString;
-(void)_setLocalizationTable:(id)arg1 ;
-(INCodableLocalizationTable *)_localizationTable;
-(void)setTitleFormatStringLocID:(NSString *)arg1 ;
-(NSString *)subtitleFormatStringLocID;
-(void)setSupportsBackgroundExecution:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedSubtitleFormatString;
-(NSString *)subtitleFormatString;
-(void)setSubtitleFormatString:(NSString *)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(NSString *)titleFormatString;
-(void)setSubtitleFormatStringLocID:(NSString *)arg1 ;
@end

