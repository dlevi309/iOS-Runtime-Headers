/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFRowCardSection.h>
@class NSArray, NSString, SFColor, SFImage, SFRichText, NSNumber, NSDictionary, NSData;


@protocol SFRowCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFImage * image; 
@property (assign,nonatomic) BOOL imageIsRightAligned; 
@property (nonatomic,retain) SFRichText * leadingText; 
@property (nonatomic,retain) SFRichText * trailingText; 
@property (nonatomic,retain) SFImage * attributionImage; 
@property (nonatomic,copy) NSString * key; 
@property (assign,nonatomic) BOOL keyNoWrap; 
@property (nonatomic,copy) NSNumber * keyWeight; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) BOOL valueNoWrap; 
@property (nonatomic,copy) NSNumber * valueWeight; 
@property (assign,nonatomic) BOOL cardPaddingBottom; 
@property (nonatomic,retain) SFRichText * leadingSubtitle; 
@property (nonatomic,retain) SFRichText * trailingSubtitle; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)key;
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSString *)value;
-(void)setValue:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(void)setKey:(id)arg1;
-(SFRichText *)leadingText;
-(SFRichText *)trailingText;
-(SFImage *)image;
-(void)setImage:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(NSArray *)punchoutOptions;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(id)arg1;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(BOOL)imageIsRightAligned;
-(void)setImageIsRightAligned:(BOOL)arg1;
-(void)setLeadingText:(id)arg1;
-(void)setTrailingText:(id)arg1;
-(SFImage *)attributionImage;
-(void)setAttributionImage:(id)arg1;
-(BOOL)keyNoWrap;
-(void)setKeyNoWrap:(BOOL)arg1;
-(NSNumber *)keyWeight;
-(void)setKeyWeight:(id)arg1;
-(BOOL)valueNoWrap;
-(void)setValueNoWrap:(BOOL)arg1;
-(NSNumber *)valueWeight;
-(void)setValueWeight:(id)arg1;
-(BOOL)cardPaddingBottom;
-(void)setCardPaddingBottom:(BOOL)arg1;
-(SFRichText *)leadingSubtitle;
-(void)setLeadingSubtitle:(id)arg1;
-(SFRichText *)trailingSubtitle;
-(void)setTrailingSubtitle:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFImage, SFRichText, NSNumber, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFRowCardSection : SFCardSection <SFRowCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF1 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _imageIsRightAligned;
	BOOL _keyNoWrap;
	BOOL _valueNoWrap;
	BOOL _cardPaddingBottom;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFImage* _image;
	SFRichText* _leadingText;
	SFRichText* _trailingText;
	SFImage* _attributionImage;
	NSString* _key;
	NSNumber* _keyWeight;
	NSString* _value;
	NSNumber* _valueWeight;
	SFRichText* _leadingSubtitle;
	SFRichText* _trailingSubtitle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (nonatomic,retain) SFImage * image;                                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL imageIsRightAligned;                               //@synthesize imageIsRightAligned=_imageIsRightAligned - In the implementation block
@property (nonatomic,retain) SFRichText * leadingText;                               //@synthesize leadingText=_leadingText - In the implementation block
@property (nonatomic,retain) SFRichText * trailingText;                              //@synthesize trailingText=_trailingText - In the implementation block
@property (nonatomic,retain) SFImage * attributionImage;                             //@synthesize attributionImage=_attributionImage - In the implementation block
@property (nonatomic,copy) NSString * key;                                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL keyNoWrap;                                         //@synthesize keyNoWrap=_keyNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * keyWeight;                                     //@synthesize keyWeight=_keyWeight - In the implementation block
@property (nonatomic,copy) NSString * value;                                         //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL valueNoWrap;                                       //@synthesize valueNoWrap=_valueNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * valueWeight;                                   //@synthesize valueWeight=_valueWeight - In the implementation block
@property (assign,nonatomic) BOOL cardPaddingBottom;                                 //@synthesize cardPaddingBottom=_cardPaddingBottom - In the implementation block
@property (nonatomic,retain) SFRichText * leadingSubtitle;                           //@synthesize leadingSubtitle=_leadingSubtitle - In the implementation block
@property (nonatomic,retain) SFRichText * trailingSubtitle;                          //@synthesize trailingSubtitle=_trailingSubtitle - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(SFRichText *)leadingText;
-(SFRichText *)trailingText;
-(SFImage *)image;
-(void)setImage:(SFImage *)arg1 ;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSArray *)punchoutOptions;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)imageIsRightAligned;
-(void)setImageIsRightAligned:(BOOL)arg1 ;
-(void)setLeadingText:(SFRichText *)arg1 ;
-(void)setTrailingText:(SFRichText *)arg1 ;
-(SFImage *)attributionImage;
-(void)setAttributionImage:(SFImage *)arg1 ;
-(BOOL)keyNoWrap;
-(void)setKeyNoWrap:(BOOL)arg1 ;
-(NSNumber *)keyWeight;
-(void)setKeyWeight:(NSNumber *)arg1 ;
-(BOOL)valueNoWrap;
-(void)setValueNoWrap:(BOOL)arg1 ;
-(NSNumber *)valueWeight;
-(void)setValueWeight:(NSNumber *)arg1 ;
-(BOOL)cardPaddingBottom;
-(void)setCardPaddingBottom:(BOOL)arg1 ;
-(SFRichText *)leadingSubtitle;
-(void)setLeadingSubtitle:(SFRichText *)arg1 ;
-(SFRichText *)trailingSubtitle;
-(void)setTrailingSubtitle:(SFRichText *)arg1 ;
-(BOOL)hasImageIsRightAligned;
-(BOOL)hasKeyNoWrap;
-(BOOL)hasValueNoWrap;
-(BOOL)hasCardPaddingBottom;
@end

