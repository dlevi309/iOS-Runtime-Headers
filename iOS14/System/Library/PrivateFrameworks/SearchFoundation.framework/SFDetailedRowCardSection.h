/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFDetailedRowCardSection.h>
@class NSArray, NSString, SFColor, SFImage, SFRichText, SFFormattedText, SFActionItem, SFButton, NSDictionary, NSData;


@protocol SFDetailedRowCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFImage * thumbnail; 
@property (assign,nonatomic) BOOL preventThumbnailImageScaling; 
@property (nonatomic,retain) SFRichText * title; 
@property (nonatomic,retain) SFFormattedText * secondaryTitle; 
@property (nonatomic,retain) SFImage * secondaryTitleImage; 
@property (assign,nonatomic) BOOL isSecondaryTitleDetached; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,retain) SFRichText * footnote; 
@property (nonatomic,retain) SFFormattedText * trailingTopText; 
@property (nonatomic,retain) SFFormattedText * trailingMiddleText; 
@property (nonatomic,retain) SFFormattedText * trailingBottomText; 
@property (nonatomic,retain) SFActionItem * action; 
@property (nonatomic,retain) SFButton * button; 
@property (assign,nonatomic) BOOL shouldUseCompactDisplay; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1;
-(SFButton *)button;
-(int)separatorStyle;
-(void)setSecondaryTitle:(id)arg1;
-(SFImage *)thumbnail;
-(void)setShouldUseCompactDisplay:(BOOL)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setTrailingTopText:(id)arg1;
-(void)setTrailingMiddleText:(id)arg1;
-(void)setTrailingBottomText:(id)arg1;
-(NSData *)jsonData;
-(void)setButton:(id)arg1;
-(void)setTitle:(id)arg1;
-(SFActionItem *)action;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(void)setAction:(id)arg1;
-(BOOL)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;
-(SFColor *)backgroundColor;
-(void)setFootnote:(id)arg1;
-(void)setDescriptions:(id)arg1;
-(BOOL)shouldUseCompactDisplay;
-(NSString *)type;
-(NSArray *)descriptions;
-(SFRichText *)footnote;
-(SFFormattedText *)secondaryTitle;
-(NSArray *)punchoutOptions;
-(void)setThumbnail:(id)arg1;
-(SFRichText *)title;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1;
-(void)setSecondaryTitleImage:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFImage, SFRichText, SFFormattedText, SFActionItem, SFButton, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFDetailedRowCardSection : SFCardSection <SFDetailedRowCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF8 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _preventThumbnailImageScaling;
	BOOL _isSecondaryTitleDetached;
	BOOL _shouldUseCompactDisplay;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFImage* _thumbnail;
	SFRichText* _title;
	SFFormattedText* _secondaryTitle;
	SFImage* _secondaryTitleImage;
	NSArray* _descriptions;
	SFRichText* _footnote;
	SFFormattedText* _trailingTopText;
	SFFormattedText* _trailingMiddleText;
	SFFormattedText* _trailingBottomText;
	SFActionItem* _action;
	SFButton* _button;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFImage * thumbnail;                                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL preventThumbnailImageScaling;                      //@synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling - In the implementation block
@property (nonatomic,retain) SFRichText * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SFFormattedText * secondaryTitle;                       //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,retain) SFImage * secondaryTitleImage;                          //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (assign,nonatomic) BOOL isSecondaryTitleDetached;                          //@synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached - In the implementation block
@property (nonatomic,copy) NSArray * descriptions;                                   //@synthesize descriptions=_descriptions - In the implementation block
@property (nonatomic,retain) SFRichText * footnote;                                  //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) SFFormattedText * trailingTopText;                      //@synthesize trailingTopText=_trailingTopText - In the implementation block
@property (nonatomic,retain) SFFormattedText * trailingMiddleText;                   //@synthesize trailingMiddleText=_trailingMiddleText - In the implementation block
@property (nonatomic,retain) SFFormattedText * trailingBottomText;                   //@synthesize trailingBottomText=_trailingBottomText - In the implementation block
@property (nonatomic,retain) SFActionItem * action;                                  //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) SFButton * button;                                      //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCompactDisplay;                           //@synthesize shouldUseCompactDisplay=_shouldUseCompactDisplay - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1 ;
-(SFButton *)button;
-(int)separatorStyle;
-(void)setSecondaryTitle:(SFFormattedText *)arg1 ;
-(SFImage *)thumbnail;
-(void)setShouldUseCompactDisplay:(BOOL)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)setTrailingTopText:(SFFormattedText *)arg1 ;
-(void)setTrailingMiddleText:(SFFormattedText *)arg1 ;
-(void)setTrailingBottomText:(SFFormattedText *)arg1 ;
-(NSData *)jsonData;
-(void)setButton:(SFButton *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(SFRichText *)arg1 ;
-(SFActionItem *)action;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(void)setAction:(SFActionItem *)arg1 ;
-(BOOL)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;
-(SFColor *)backgroundColor;
-(void)setFootnote:(SFRichText *)arg1 ;
-(void)setDescriptions:(NSArray *)arg1 ;
-(BOOL)hasPreventThumbnailImageScaling;
-(BOOL)hasIsSecondaryTitleDetached;
-(BOOL)hasShouldUseCompactDisplay;
-(BOOL)shouldUseCompactDisplay;
-(NSString *)type;
-(NSArray *)descriptions;
-(id)initWithCoder:(id)arg1 ;
-(SFRichText *)footnote;
-(id)initWithProtobuf:(id)arg1 ;
-(SFFormattedText *)secondaryTitle;
-(NSArray *)punchoutOptions;
-(void)setThumbnail:(SFImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SFRichText *)title;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1 ;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1 ;
-(void)setSecondaryTitleImage:(SFImage *)arg1 ;
@end

