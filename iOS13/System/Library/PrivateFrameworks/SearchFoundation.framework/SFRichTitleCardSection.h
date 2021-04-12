/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFTitleCardSection.h>
#import <libobjc.A.dylib/SFRichTitleCardSection.h>
@class NSArray, NSString, SFColor, SFImage, NSNumber, SFActionItem, SFRichText, NSDictionary, NSData;


@protocol SFRichTitleCardSection <SFTitleCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,retain) SFImage * titleImage; 
@property (assign,nonatomic) BOOL isCentered; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSNumber * rating; 
@property (nonatomic,copy) NSString * ratingText; 
@property (nonatomic,retain) SFImage * reviewGlyph; 
@property (nonatomic,copy) NSString * reviewText; 
@property (assign,nonatomic) BOOL reviewNewLine; 
@property (nonatomic,copy) NSArray * moreGlyphs; 
@property (nonatomic,copy) NSString * auxiliaryTopText; 
@property (nonatomic,copy) NSString * auxiliaryMiddleText; 
@property (nonatomic,copy) NSString * auxiliaryBottomText; 
@property (assign,nonatomic) int auxiliaryBottomTextColor; 
@property (nonatomic,copy) NSNumber * auxiliaryAlignment; 
@property (assign,nonatomic) BOOL hideVerticalDivider; 
@property (assign,nonatomic) int titleAlign; 
@property (nonatomic,copy) NSNumber * titleWeight; 
@property (assign,nonatomic) BOOL titleNoWrap; 
@property (assign,nonatomic) BOOL thumbnailCropCircle; 
@property (nonatomic,retain) SFImage * imageOverlay; 
@property (nonatomic,retain) SFActionItem * playAction; 
@property (assign,nonatomic) int playActionAlign; 
@property (nonatomic,copy) NSArray * offers; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,retain) SFRichText * richSubtitle; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSString *)subtitle;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(NSNumber *)rating;
-(void)setRating:(id)arg1;
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
-(NSNumber *)titleWeight;
-(void)setTitleWeight:(id)arg1;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(id)arg1;
-(SFActionItem *)playAction;
-(void)setPlayAction:(id)arg1;
-(NSArray *)offers;
-(void)setOffers:(id)arg1;
-(SFImage *)reviewGlyph;
-(void)setReviewGlyph:(id)arg1;
-(NSString *)reviewText;
-(void)setReviewText:(id)arg1;
-(NSString *)footnote;
-(void)setFootnote:(id)arg1;
-(void)setTitleImage:(id)arg1;
-(void)setRatingText:(id)arg1;
-(void)setReviewNewLine:(BOOL)arg1;
-(void)setAuxiliaryTopText:(id)arg1;
-(void)setAuxiliaryMiddleText:(id)arg1;
-(void)setAuxiliaryBottomText:(id)arg1;
-(void)setAuxiliaryBottomTextColor:(int)arg1;
-(void)setAuxiliaryAlignment:(id)arg1;
-(void)setHideVerticalDivider:(BOOL)arg1;
-(void)setTitleAlign:(int)arg1;
-(void)setThumbnailCropCircle:(BOOL)arg1;
-(void)setImageOverlay:(id)arg1;
-(void)setPlayActionAlign:(int)arg1;
-(void)setRichSubtitle:(id)arg1;
-(SFImage *)titleImage;
-(NSString *)ratingText;
-(BOOL)reviewNewLine;
-(NSArray *)moreGlyphs;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(NSNumber *)auxiliaryAlignment;
-(BOOL)hideVerticalDivider;
-(int)titleAlign;
-(BOOL)thumbnailCropCircle;
-(SFImage *)imageOverlay;
-(int)playActionAlign;
-(SFRichText *)richSubtitle;
-(void)setMoreGlyphs:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFImage, NSNumber, SFActionItem, SFRichText, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFRichTitleCardSection : SFTitleCardSection <SFRichTitleCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF7 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isCentered;
	BOOL _reviewNewLine;
	BOOL _hideVerticalDivider;
	BOOL _titleNoWrap;
	BOOL _thumbnailCropCircle;
	int _separatorStyle;
	int _auxiliaryBottomTextColor;
	int _titleAlign;
	int _playActionAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	NSString* _contentAdvisory;
	SFImage* _titleImage;
	NSString* _descriptionText;
	NSNumber* _rating;
	NSString* _ratingText;
	SFImage* _reviewGlyph;
	NSString* _reviewText;
	NSArray* _moreGlyphs;
	NSString* _auxiliaryTopText;
	NSString* _auxiliaryMiddleText;
	NSString* _auxiliaryBottomText;
	NSNumber* _auxiliaryAlignment;
	NSNumber* _titleWeight;
	SFImage* _imageOverlay;
	SFActionItem* _playAction;
	NSArray* _offers;
	NSString* _footnote;
	SFRichText* _richSubtitle;

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
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL isCentered; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,copy) NSString * contentAdvisory;                               //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,retain) SFImage * titleImage;                                   //@synthesize titleImage=_titleImage - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                               //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSNumber * rating;                                        //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * ratingText;                                    //@synthesize ratingText=_ratingText - In the implementation block
@property (nonatomic,retain) SFImage * reviewGlyph;                                  //@synthesize reviewGlyph=_reviewGlyph - In the implementation block
@property (nonatomic,copy) NSString * reviewText;                                    //@synthesize reviewText=_reviewText - In the implementation block
@property (assign,nonatomic) BOOL reviewNewLine;                                     //@synthesize reviewNewLine=_reviewNewLine - In the implementation block
@property (nonatomic,copy) NSArray * moreGlyphs;                                     //@synthesize moreGlyphs=_moreGlyphs - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryTopText;                              //@synthesize auxiliaryTopText=_auxiliaryTopText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryMiddleText;                           //@synthesize auxiliaryMiddleText=_auxiliaryMiddleText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryBottomText;                           //@synthesize auxiliaryBottomText=_auxiliaryBottomText - In the implementation block
@property (assign,nonatomic) int auxiliaryBottomTextColor;                           //@synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor - In the implementation block
@property (nonatomic,copy) NSNumber * auxiliaryAlignment;                            //@synthesize auxiliaryAlignment=_auxiliaryAlignment - In the implementation block
@property (assign,nonatomic) BOOL hideVerticalDivider;                               //@synthesize hideVerticalDivider=_hideVerticalDivider - In the implementation block
@property (assign,nonatomic) int titleAlign;                                         //@synthesize titleAlign=_titleAlign - In the implementation block
@property (nonatomic,copy) NSNumber * titleWeight;                                   //@synthesize titleWeight=_titleWeight - In the implementation block
@property (assign,nonatomic) BOOL titleNoWrap;                                       //@synthesize titleNoWrap=_titleNoWrap - In the implementation block
@property (assign,nonatomic) BOOL thumbnailCropCircle;                               //@synthesize thumbnailCropCircle=_thumbnailCropCircle - In the implementation block
@property (nonatomic,retain) SFImage * imageOverlay;                                 //@synthesize imageOverlay=_imageOverlay - In the implementation block
@property (nonatomic,retain) SFActionItem * playAction;                              //@synthesize playAction=_playAction - In the implementation block
@property (assign,nonatomic) int playActionAlign;                                    //@synthesize playActionAlign=_playActionAlign - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                         //@synthesize offers=_offers - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                      //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) SFRichText * richSubtitle;                              //@synthesize richSubtitle=_richSubtitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSNumber *)rating;
-(void)setRating:(NSNumber *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
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
-(BOOL)isCentered;
-(void)setIsCentered:(BOOL)arg1 ;
-(BOOL)titleNoWrap;
-(void)setTitleNoWrap:(BOOL)arg1 ;
-(NSNumber *)titleWeight;
-(void)setTitleWeight:(NSNumber *)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasTitleNoWrap;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(SFActionItem *)playAction;
-(void)setPlayAction:(SFActionItem *)arg1 ;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(SFImage *)reviewGlyph;
-(void)setReviewGlyph:(SFImage *)arg1 ;
-(NSString *)reviewText;
-(void)setReviewText:(NSString *)arg1 ;
-(BOOL)hasIsCentered;
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setTitleImage:(SFImage *)arg1 ;
-(void)setRatingText:(NSString *)arg1 ;
-(void)setReviewNewLine:(BOOL)arg1 ;
-(void)setAuxiliaryTopText:(NSString *)arg1 ;
-(void)setAuxiliaryMiddleText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomTextColor:(int)arg1 ;
-(void)setAuxiliaryAlignment:(NSNumber *)arg1 ;
-(void)setHideVerticalDivider:(BOOL)arg1 ;
-(void)setTitleAlign:(int)arg1 ;
-(void)setThumbnailCropCircle:(BOOL)arg1 ;
-(void)setImageOverlay:(SFImage *)arg1 ;
-(void)setPlayActionAlign:(int)arg1 ;
-(void)setRichSubtitle:(SFRichText *)arg1 ;
-(SFImage *)titleImage;
-(NSString *)ratingText;
-(BOOL)reviewNewLine;
-(NSArray *)moreGlyphs;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(NSNumber *)auxiliaryAlignment;
-(BOOL)hideVerticalDivider;
-(int)titleAlign;
-(BOOL)thumbnailCropCircle;
-(SFImage *)imageOverlay;
-(int)playActionAlign;
-(SFRichText *)richSubtitle;
-(void)setMoreGlyphs:(NSArray *)arg1 ;
-(BOOL)hasReviewNewLine;
-(BOOL)hasAuxiliaryBottomTextColor;
-(BOOL)hasHideVerticalDivider;
-(BOOL)hasTitleAlign;
-(BOOL)hasThumbnailCropCircle;
-(BOOL)hasPlayActionAlign;
@end

