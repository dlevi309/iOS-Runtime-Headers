/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionRowModel.h>

@class SFImage, SFButton, NSString, SFRichText, SFText, NSArray, SFActionItem, SFFormattedText;

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel {

	BOOL _preventThumbnailImageScaling;
	BOOL _isLocalApplicationResult;
	BOOL _secondaryTitleIsDetached;
	SFImage* _leadingImage;
	SFImage* _fallbackImage;
	SFButton* _leadingButton;
	NSString* _applicationBundleIdentifier;
	SFRichText* _title;
	SFText* _secondaryTitle;
	SFImage* _secondaryTitleImage;
	NSArray* _details;
	SFRichText* _footnote;
	NSString* _footnoteButtonText;
	SFActionItem* _action;
	SFFormattedText* _trailingTopText;
	SFFormattedText* _trailingMiddleText;
	SFFormattedText* _trailingBottomText;
	NSArray* _contactIdentifiersNeeded;

}

@property (retain) SFImage * leadingImage;                              //@synthesize leadingImage=_leadingImage - In the implementation block
@property (retain) SFImage * fallbackImage;                             //@synthesize fallbackImage=_fallbackImage - In the implementation block
@property (retain) SFButton * leadingButton;                            //@synthesize leadingButton=_leadingButton - In the implementation block
@property (retain) NSArray * contactIdentifiersNeeded;                  //@synthesize contactIdentifiersNeeded=_contactIdentifiersNeeded - In the implementation block
@property (assign) BOOL preventThumbnailImageScaling;                   //@synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling - In the implementation block
@property (retain) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (assign) BOOL isLocalApplicationResult;                       //@synthesize isLocalApplicationResult=_isLocalApplicationResult - In the implementation block
@property (retain) SFRichText * title;                                  //@synthesize title=_title - In the implementation block
@property (retain) SFText * secondaryTitle;                             //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (assign) BOOL secondaryTitleIsDetached;                       //@synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached - In the implementation block
@property (retain) SFImage * secondaryTitleImage;                       //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (retain) NSArray * details;                                   //@synthesize details=_details - In the implementation block
@property (retain) SFRichText * footnote;                               //@synthesize footnote=_footnote - In the implementation block
@property (retain) NSString * footnoteButtonText;                       //@synthesize footnoteButtonText=_footnoteButtonText - In the implementation block
@property (retain) SFActionItem * action;                               //@synthesize action=_action - In the implementation block
@property (retain) SFFormattedText * trailingTopText;                   //@synthesize trailingTopText=_trailingTopText - In the implementation block
@property (retain) SFFormattedText * trailingMiddleText;                //@synthesize trailingMiddleText=_trailingMiddleText - In the implementation block
@property (retain) SFFormattedText * trailingBottomText;                //@synthesize trailingBottomText=_trailingBottomText - In the implementation block
+(BOOL)urlIsDraggable:(id)arg1 ;
-(SFRichText *)title;
-(void)setTitle:(SFRichText *)arg1 ;
-(SFActionItem *)action;
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
-(void)setLeadingImage:(SFImage *)arg1 ;
-(SFImage *)leadingImage;
-(void)setAction:(SFActionItem *)arg1 ;
-(int)separatorStyle;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(id)contactIdentifiers;
-(id)descriptionText;
-(BOOL)isContact;
-(SFRichText *)footnote;
-(void)setFootnote:(SFRichText *)arg1 ;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1 ;
-(void)setSecondaryTitle:(SFText *)arg1 ;
-(void)setSecondaryTitleImage:(SFImage *)arg1 ;
-(void)setTrailingTopText:(SFFormattedText *)arg1 ;
-(void)setTrailingMiddleText:(SFFormattedText *)arg1 ;
-(void)setTrailingBottomText:(SFFormattedText *)arg1 ;
-(BOOL)preventThumbnailImageScaling;
-(SFText *)secondaryTitle;
-(SFImage *)secondaryTitleImage;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;
-(BOOL)isLocalApplicationResult;
-(void)setIsLocalApplicationResult:(BOOL)arg1 ;
-(BOOL)isDraggable;
-(SFImage *)fallbackImage;
-(BOOL)secondaryTitleIsDetached;
-(NSString *)footnoteButtonText;
-(void)setSecondaryTitleIsDetached:(BOOL)arg1 ;
-(void)setFootnoteButtonText:(NSString *)arg1 ;
-(id)punchouts;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(BOOL)arg3 queryId:(unsigned long long)arg4 ;
-(SFButton *)leadingButton;
-(Class)customCardSectionViewClass;
-(id)dragURL;
-(id)dragTitle;
-(id)dragText;
-(id)dragSubtitle;
-(BOOL)isTappable;
-(id)dragAppBundleID;
-(void)fillOutPropertiesForCardSection:(id)arg1 ;
-(void)setFallbackImage:(SFImage *)arg1 ;
-(id)richTextFromText:(id)arg1 ;
-(void)setContactIdentifiersNeeded:(NSArray *)arg1 ;
-(void)setLeadingButton:(SFButton *)arg1 ;
-(NSArray *)contactIdentifiersNeeded;
@end

