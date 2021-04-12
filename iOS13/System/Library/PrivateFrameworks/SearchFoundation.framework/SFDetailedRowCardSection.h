/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(SFRichText *)title;
-(void)setTitle:(id)arg1;
-(SFActionItem *)action;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(SFButton *)button;
-(void)setAction:(id)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(void)setButton:(id)arg1;
-(SFImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
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
-(SFRichText *)footnote;
-(void)setFootnote:(id)arg1;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1;
-(void)setSecondaryTitle:(id)arg1;
-(void)setSecondaryTitleImage:(id)arg1;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1;
-(void)setTrailingTopText:(id)arg1;
-(void)setTrailingMiddleText:(id)arg1;
-(void)setTrailingBottomText:(id)arg1;
-(BOOL)preventThumbnailImageScaling;
-(SFFormattedText *)secondaryTitle;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(NSArray *)descriptions;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;
-(void)setDescriptions:(id)arg1;

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
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(SFRichText *)title;
-(void)setTitle:(SFRichText *)arg1 ;
-(SFActionItem *)action;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(SFButton *)button;
-(void)setAction:(SFActionItem *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setButton:(SFButton *)arg1 ;
-(SFImage *)thumbnail;
-(void)setThumbnail:(SFImage *)arg1 ;
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
-(SFRichText *)footnote;
-(void)setFootnote:(SFRichText *)arg1 ;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1 ;
-(void)setSecondaryTitle:(SFFormattedText *)arg1 ;
-(void)setSecondaryTitleImage:(SFImage *)arg1 ;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1 ;
-(void)setTrailingTopText:(SFFormattedText *)arg1 ;
-(void)setTrailingMiddleText:(SFFormattedText *)arg1 ;
-(void)setTrailingBottomText:(SFFormattedText *)arg1 ;
-(BOOL)preventThumbnailImageScaling;
-(SFFormattedText *)secondaryTitle;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(NSArray *)descriptions;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;
-(void)setDescriptions:(NSArray *)arg1 ;
-(BOOL)hasPreventThumbnailImageScaling;
-(BOOL)hasIsSecondaryTitleDetached;
@end

