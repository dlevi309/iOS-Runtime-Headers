/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBRichTitleCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBActionItem, _SFPBRichText, NSData;


@protocol _SFPBRichTitleCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,retain) _SFPBImage * titleImage; 
@property (assign,nonatomic) BOOL isCentered; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (assign,nonatomic) float rating; 
@property (nonatomic,copy) NSString * ratingText; 
@property (nonatomic,retain) _SFPBImage * reviewGlyph; 
@property (nonatomic,copy) NSString * reviewText; 
@property (assign,nonatomic) BOOL reviewNewLine; 
@property (nonatomic,copy) NSArray * moreGlyphs; 
@property (nonatomic,copy) NSString * auxiliaryTopText; 
@property (nonatomic,copy) NSString * auxiliaryMiddleText; 
@property (nonatomic,copy) NSString * auxiliaryBottomText; 
@property (assign,nonatomic) int auxiliaryBottomTextColor; 
@property (assign,nonatomic) int auxiliaryAlignment; 
@property (assign,nonatomic) BOOL hideVerticalDivider; 
@property (assign,nonatomic) int titleAlign; 
@property (assign,nonatomic) int titleWeight; 
@property (assign,nonatomic) BOOL titleNoWrap; 
@property (assign,nonatomic) BOOL thumbnailCropCircle; 
@property (nonatomic,retain) _SFPBImage * imageOverlay; 
@property (nonatomic,retain) _SFPBActionItem * playAction; 
@property (assign,nonatomic) int playActionAlign; 
@property (nonatomic,copy) NSArray * offers; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,retain) _SFPBRichText * richSubtitle; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSString *)subtitle;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(float)rating;
-(void)setRating:(float)arg1;
-(NSString *)descriptionText;
-(void)setDescriptionText:(id)arg1;
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
-(BOOL)isCentered;
-(void)setIsCentered:(BOOL)arg1;
-(BOOL)titleNoWrap;
-(void)setTitleNoWrap:(BOOL)arg1;
-(int)titleWeight;
-(void)setTitleWeight:(int)arg1;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(id)arg1;
-(_SFPBActionItem *)playAction;
-(void)setPlayAction:(id)arg1;
-(NSArray *)offers;
-(void)setOffers:(id)arg1;
-(_SFPBImage *)reviewGlyph;
-(void)setReviewGlyph:(id)arg1;
-(NSString *)reviewText;
-(void)setReviewText:(id)arg1;
-(NSString *)footnote;
-(void)setFootnote:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)addOffers:(id)arg1;
-(void)clearOffers;
-(unsigned long long)offersCount;
-(id)offersAtIndex:(unsigned long long)arg1;
-(void)setTitleImage:(id)arg1;
-(void)setRatingText:(id)arg1;
-(void)setReviewNewLine:(BOOL)arg1;
-(void)addMoreGlyphs:(id)arg1;
-(void)setAuxiliaryTopText:(id)arg1;
-(void)setAuxiliaryMiddleText:(id)arg1;
-(void)setAuxiliaryBottomText:(id)arg1;
-(void)setAuxiliaryBottomTextColor:(int)arg1;
-(void)setAuxiliaryAlignment:(int)arg1;
-(void)setHideVerticalDivider:(BOOL)arg1;
-(void)setTitleAlign:(int)arg1;
-(void)setThumbnailCropCircle:(BOOL)arg1;
-(void)setImageOverlay:(id)arg1;
-(void)setPlayActionAlign:(int)arg1;
-(void)setRichSubtitle:(id)arg1;
-(_SFPBImage *)titleImage;
-(NSString *)ratingText;
-(BOOL)reviewNewLine;
-(NSArray *)moreGlyphs;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(int)auxiliaryAlignment;
-(BOOL)hideVerticalDivider;
-(int)titleAlign;
-(BOOL)thumbnailCropCircle;
-(_SFPBImage *)imageOverlay;
-(int)playActionAlign;
-(_SFPBRichText *)richSubtitle;
-(void)clearMoreGlyphs;
-(unsigned long long)moreGlyphsCount;
-(id)moreGlyphsAtIndex:(unsigned long long)arg1;
-(void)setMoreGlyphs:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBActionItem, _SFPBRichText, NSData;

@interface _SFPBRichTitleCardSection : PBCodable <_SFPBRichTitleCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isCentered;
	BOOL _reviewNewLine;
	BOOL _hideVerticalDivider;
	BOOL _titleNoWrap;
	BOOL _thumbnailCropCircle;
	int _separatorStyle;
	float _rating;
	int _auxiliaryBottomTextColor;
	int _auxiliaryAlignment;
	int _titleAlign;
	int _titleWeight;
	int _playActionAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	NSString* _contentAdvisory;
	_SFPBImage* _titleImage;
	NSString* _descriptionText;
	NSString* _ratingText;
	_SFPBImage* _reviewGlyph;
	NSString* _reviewText;
	NSArray* _moreGlyphs;
	NSString* _auxiliaryTopText;
	NSString* _auxiliaryMiddleText;
	NSString* _auxiliaryBottomText;
	_SFPBImage* _imageOverlay;
	_SFPBActionItem* _playAction;
	NSArray* _offers;
	NSString* _footnote;
	_SFPBRichText* _richSubtitle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                        //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,retain) _SFPBImage * titleImage;                         //@synthesize titleImage=_titleImage - In the implementation block
@property (assign,nonatomic) BOOL isCentered;                                 //@synthesize isCentered=_isCentered - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                        //@synthesize descriptionText=_descriptionText - In the implementation block
@property (assign,nonatomic) float rating;                                    //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * ratingText;                             //@synthesize ratingText=_ratingText - In the implementation block
@property (nonatomic,retain) _SFPBImage * reviewGlyph;                        //@synthesize reviewGlyph=_reviewGlyph - In the implementation block
@property (nonatomic,copy) NSString * reviewText;                             //@synthesize reviewText=_reviewText - In the implementation block
@property (assign,nonatomic) BOOL reviewNewLine;                              //@synthesize reviewNewLine=_reviewNewLine - In the implementation block
@property (nonatomic,copy) NSArray * moreGlyphs;                              //@synthesize moreGlyphs=_moreGlyphs - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryTopText;                       //@synthesize auxiliaryTopText=_auxiliaryTopText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryMiddleText;                    //@synthesize auxiliaryMiddleText=_auxiliaryMiddleText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryBottomText;                    //@synthesize auxiliaryBottomText=_auxiliaryBottomText - In the implementation block
@property (assign,nonatomic) int auxiliaryBottomTextColor;                    //@synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor - In the implementation block
@property (assign,nonatomic) int auxiliaryAlignment;                          //@synthesize auxiliaryAlignment=_auxiliaryAlignment - In the implementation block
@property (assign,nonatomic) BOOL hideVerticalDivider;                        //@synthesize hideVerticalDivider=_hideVerticalDivider - In the implementation block
@property (assign,nonatomic) int titleAlign;                                  //@synthesize titleAlign=_titleAlign - In the implementation block
@property (assign,nonatomic) int titleWeight;                                 //@synthesize titleWeight=_titleWeight - In the implementation block
@property (assign,nonatomic) BOOL titleNoWrap;                                //@synthesize titleNoWrap=_titleNoWrap - In the implementation block
@property (assign,nonatomic) BOOL thumbnailCropCircle;                        //@synthesize thumbnailCropCircle=_thumbnailCropCircle - In the implementation block
@property (nonatomic,retain) _SFPBImage * imageOverlay;                       //@synthesize imageOverlay=_imageOverlay - In the implementation block
@property (nonatomic,retain) _SFPBActionItem * playAction;                    //@synthesize playAction=_playAction - In the implementation block
@property (assign,nonatomic) int playActionAlign;                             //@synthesize playActionAlign=_playActionAlign - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                  //@synthesize offers=_offers - In the implementation block
@property (nonatomic,copy) NSString * footnote;                               //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) _SFPBRichText * richSubtitle;                    //@synthesize richSubtitle=_richSubtitle - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)subtitle;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSArray *)punchoutOptions;
-(id)initWithFacade:(id)arg1 ;
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
-(BOOL)isCentered;
-(void)setIsCentered:(BOOL)arg1 ;
-(BOOL)titleNoWrap;
-(void)setTitleNoWrap:(BOOL)arg1 ;
-(int)titleWeight;
-(void)setTitleWeight:(int)arg1 ;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(_SFPBActionItem *)playAction;
-(void)setPlayAction:(_SFPBActionItem *)arg1 ;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(_SFPBImage *)reviewGlyph;
-(void)setReviewGlyph:(_SFPBImage *)arg1 ;
-(NSString *)reviewText;
-(void)setReviewText:(NSString *)arg1 ;
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)addOffers:(id)arg1 ;
-(void)clearOffers;
-(unsigned long long)offersCount;
-(id)offersAtIndex:(unsigned long long)arg1 ;
-(void)setTitleImage:(_SFPBImage *)arg1 ;
-(void)setRatingText:(NSString *)arg1 ;
-(void)setReviewNewLine:(BOOL)arg1 ;
-(void)addMoreGlyphs:(id)arg1 ;
-(void)setAuxiliaryTopText:(NSString *)arg1 ;
-(void)setAuxiliaryMiddleText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomTextColor:(int)arg1 ;
-(void)setAuxiliaryAlignment:(int)arg1 ;
-(void)setHideVerticalDivider:(BOOL)arg1 ;
-(void)setTitleAlign:(int)arg1 ;
-(void)setThumbnailCropCircle:(BOOL)arg1 ;
-(void)setImageOverlay:(_SFPBImage *)arg1 ;
-(void)setPlayActionAlign:(int)arg1 ;
-(void)setRichSubtitle:(_SFPBRichText *)arg1 ;
-(_SFPBImage *)titleImage;
-(NSString *)ratingText;
-(BOOL)reviewNewLine;
-(NSArray *)moreGlyphs;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(int)auxiliaryAlignment;
-(BOOL)hideVerticalDivider;
-(int)titleAlign;
-(BOOL)thumbnailCropCircle;
-(_SFPBImage *)imageOverlay;
-(int)playActionAlign;
-(_SFPBRichText *)richSubtitle;
-(void)clearMoreGlyphs;
-(unsigned long long)moreGlyphsCount;
-(id)moreGlyphsAtIndex:(unsigned long long)arg1 ;
-(void)setMoreGlyphs:(NSArray *)arg1 ;
@end

