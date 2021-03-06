/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBRowCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, NSData;


@protocol _SFPBRowCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,retain) _SFPBImage * image; 
@property (assign,nonatomic) BOOL imageIsRightAligned; 
@property (nonatomic,retain) _SFPBRichText * leadingText; 
@property (nonatomic,retain) _SFPBRichText * trailingText; 
@property (nonatomic,retain) _SFPBImage * attributionImage; 
@property (nonatomic,copy) NSString * key; 
@property (assign,nonatomic) BOOL keyNoWrap; 
@property (assign,nonatomic) int keyWeight; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) BOOL valueNoWrap; 
@property (assign,nonatomic) int valueWeight; 
@property (assign,nonatomic) BOOL cardPaddingBottom; 
@property (nonatomic,retain) _SFPBRichText * leadingSubtitle; 
@property (nonatomic,retain) _SFPBRichText * trailingSubtitle; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(void)setImage:(id)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setLeadingText:(id)arg1;
-(void)setTrailingText:(id)arg1;
-(void)setImageIsRightAligned:(BOOL)arg1;
-(void)setAttributionImage:(id)arg1;
-(void)setKeyNoWrap:(BOOL)arg1;
-(void)setKeyWeight:(int)arg1;
-(void)setCardPaddingBottom:(BOOL)arg1;
-(void)setValueNoWrap:(BOOL)arg1;
-(void)setValueWeight:(int)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(NSData *)jsonData;
-(BOOL)keyNoWrap;
-(BOOL)imageIsRightAligned;
-(_SFPBImage *)attributionImage;
-(int)keyWeight;
-(BOOL)valueNoWrap;
-(int)valueWeight;
-(BOOL)cardPaddingBottom;
-(_SFPBRichText *)leadingSubtitle;
-(void)setLeadingSubtitle:(id)arg1;
-(_SFPBRichText *)trailingSubtitle;
-(void)setTrailingSubtitle:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(_SFPBRichText *)leadingText;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(_SFPBImage *)image;
-(_SFPBRichText *)trailingText;
-(id)initWithDictionary:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(void)setValue:(id)arg1;
-(NSString *)key;
-(NSString *)type;
-(NSArray *)punchoutOptions;
-(void)setKey:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSString *)value;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, NSData;

@interface _SFPBRowCardSection : PBCodable <_SFPBRowCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _imageIsRightAligned;
	BOOL _keyNoWrap;
	BOOL _valueNoWrap;
	BOOL _cardPaddingBottom;
	int _separatorStyle;
	int _keyWeight;
	int _valueWeight;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBImage* _image;
	_SFPBRichText* _leadingText;
	_SFPBRichText* _trailingText;
	_SFPBImage* _attributionImage;
	NSString* _key;
	NSString* _value;
	_SFPBRichText* _leadingSubtitle;
	_SFPBRichText* _trailingSubtitle;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) _SFPBImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL imageIsRightAligned;                        //@synthesize imageIsRightAligned=_imageIsRightAligned - In the implementation block
@property (nonatomic,retain) _SFPBRichText * leadingText;                     //@synthesize leadingText=_leadingText - In the implementation block
@property (nonatomic,retain) _SFPBRichText * trailingText;                    //@synthesize trailingText=_trailingText - In the implementation block
@property (nonatomic,retain) _SFPBImage * attributionImage;                   //@synthesize attributionImage=_attributionImage - In the implementation block
@property (nonatomic,copy) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL keyNoWrap;                                  //@synthesize keyNoWrap=_keyNoWrap - In the implementation block
@property (assign,nonatomic) int keyWeight;                                   //@synthesize keyWeight=_keyWeight - In the implementation block
@property (nonatomic,copy) NSString * value;                                  //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL valueNoWrap;                                //@synthesize valueNoWrap=_valueNoWrap - In the implementation block
@property (assign,nonatomic) int valueWeight;                                 //@synthesize valueWeight=_valueWeight - In the implementation block
@property (assign,nonatomic) BOOL cardPaddingBottom;                          //@synthesize cardPaddingBottom=_cardPaddingBottom - In the implementation block
@property (nonatomic,retain) _SFPBRichText * leadingSubtitle;                 //@synthesize leadingSubtitle=_leadingSubtitle - In the implementation block
@property (nonatomic,retain) _SFPBRichText * trailingSubtitle;                //@synthesize trailingSubtitle=_trailingSubtitle - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)setImage:(_SFPBImage *)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)setLeadingText:(_SFPBRichText *)arg1 ;
-(void)setTrailingText:(_SFPBRichText *)arg1 ;
-(void)setImageIsRightAligned:(BOOL)arg1 ;
-(void)setAttributionImage:(_SFPBImage *)arg1 ;
-(void)setKeyNoWrap:(BOOL)arg1 ;
-(void)setKeyWeight:(int)arg1 ;
-(void)setCardPaddingBottom:(BOOL)arg1 ;
-(void)setValueNoWrap:(BOOL)arg1 ;
-(void)setValueWeight:(int)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(NSData *)jsonData;
-(BOOL)keyNoWrap;
-(BOOL)imageIsRightAligned;
-(_SFPBImage *)attributionImage;
-(int)keyWeight;
-(BOOL)valueNoWrap;
-(int)valueWeight;
-(BOOL)cardPaddingBottom;
-(_SFPBRichText *)leadingSubtitle;
-(void)setLeadingSubtitle:(_SFPBRichText *)arg1 ;
-(_SFPBRichText *)trailingSubtitle;
-(void)setTrailingSubtitle:(_SFPBRichText *)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(_SFPBRichText *)leadingText;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(_SFPBImage *)image;
-(_SFPBRichText *)trailingText;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)key;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(void)setKey:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

