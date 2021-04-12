/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)_dictionaryRepresentation;
-(INCodableLocalizationTable *)_localizationTable;
-(BOOL)isPrimary;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)_setLocalizationTable:(id)arg1 ;
-(NSString *)localizedTitleFormatString;
-(id)localizedTitleFormatStringWithLocalizer:(id)arg1 ;
-(NSString *)localizedSubtitleFormatString;
-(id)localizedSubtitleFormatStringWithLocalizer:(id)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(BOOL)supportsBackgroundExecution;
-(void)setSupportsBackgroundExecution:(BOOL)arg1 ;
-(NSString *)titleFormatString;
-(void)setTitleFormatString:(NSString *)arg1 ;
-(NSString *)titleFormatStringLocID;
-(void)setTitleFormatStringLocID:(NSString *)arg1 ;
-(NSString *)subtitleFormatString;
-(void)setSubtitleFormatString:(NSString *)arg1 ;
-(NSString *)subtitleFormatStringLocID;
-(void)setSubtitleFormatStringLocID:(NSString *)arg1 ;
@end

