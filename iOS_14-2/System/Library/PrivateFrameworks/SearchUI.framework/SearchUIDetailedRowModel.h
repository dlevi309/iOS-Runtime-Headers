/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionRowModel.h>

@class SFImage, SFButton, NSString, SFRichText, SFFormattedText, NSArray, SFActionItem, MKSearchFoundationResult;

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel {

	BOOL _preventThumbnailImageScaling;
	BOOL _isLocalApplicationResult;
	BOOL _truncateTitleMiddle;
	BOOL _secondaryTitleIsDetached;
	BOOL _useCompactDisplay;
	SFImage* _leadingImage;
	SFImage* _fallbackImage;
	SFButton* _leadingButton;
	NSString* _applicationBundleIdentifier;
	NSString* _nearbyBusinessesString;
	SFRichText* _title;
	SFFormattedText* _secondaryTitle;
	SFImage* _secondaryTitleImage;
	NSArray* _details;
	SFRichText* _footnote;
	NSString* _footnoteButtonText;
	SFActionItem* _action;
	SFFormattedText* _trailingTopText;
	SFFormattedText* _trailingMiddleText;
	SFFormattedText* _trailingBottomText;
	MKSearchFoundationResult* _mapsResult;

}

@property (nonatomic,retain) SFImage * leadingImage;                    //@synthesize leadingImage=_leadingImage - In the implementation block
@property (retain) SFImage * fallbackImage;                             //@synthesize fallbackImage=_fallbackImage - In the implementation block
@property (retain) SFButton * leadingButton;                            //@synthesize leadingButton=_leadingButton - In the implementation block
@property (assign) BOOL preventThumbnailImageScaling;                   //@synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling - In the implementation block
@property (retain) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (assign) BOOL isLocalApplicationResult;                       //@synthesize isLocalApplicationResult=_isLocalApplicationResult - In the implementation block
@property (retain) NSString * nearbyBusinessesString;                   //@synthesize nearbyBusinessesString=_nearbyBusinessesString - In the implementation block
@property (retain) SFRichText * title;                                  //@synthesize title=_title - In the implementation block
@property (assign) BOOL truncateTitleMiddle;                            //@synthesize truncateTitleMiddle=_truncateTitleMiddle - In the implementation block
@property (retain) SFFormattedText * secondaryTitle;                    //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (assign) BOOL secondaryTitleIsDetached;                       //@synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached - In the implementation block
@property (retain) SFImage * secondaryTitleImage;                       //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (nonatomic,retain) NSArray * details;                         //@synthesize details=_details - In the implementation block
@property (retain) SFRichText * footnote;                               //@synthesize footnote=_footnote - In the implementation block
@property (retain) NSString * footnoteButtonText;                       //@synthesize footnoteButtonText=_footnoteButtonText - In the implementation block
@property (retain) SFActionItem * action;                               //@synthesize action=_action - In the implementation block
@property (retain) SFFormattedText * trailingTopText;                   //@synthesize trailingTopText=_trailingTopText - In the implementation block
@property (retain) SFFormattedText * trailingMiddleText;                //@synthesize trailingMiddleText=_trailingMiddleText - In the implementation block
@property (retain) SFFormattedText * trailingBottomText;                //@synthesize trailingBottomText=_trailingBottomText - In the implementation block
@property (retain) MKSearchFoundationResult * mapsResult;               //@synthesize mapsResult=_mapsResult - In the implementation block
@property (assign) BOOL useCompactDisplay;                              //@synthesize useCompactDisplay=_useCompactDisplay - In the implementation block
+(BOOL)urlIsDraggable:(id)arg1 ;
-(void)setDetails:(NSArray *)arg1 ;
-(BOOL)isContact;
-(int)separatorStyle;
-(void)setNearbyBusinessesString:(NSString *)arg1 ;
-(SFButton *)leadingButton;
-(void)setSecondaryTitle:(SFFormattedText *)arg1 ;
-(id)punchouts;
-(id)descriptionText;
-(void)setTrailingTopText:(SFFormattedText *)arg1 ;
-(void)setTrailingMiddleText:(SFFormattedText *)arg1 ;
-(void)setTrailingBottomText:(SFFormattedText *)arg1 ;
-(void)setTitle:(SFRichText *)arg1 ;
-(SFActionItem *)action;
-(BOOL)isDraggable;
-(SFImage *)fallbackImage;
-(void)setAction:(SFActionItem *)arg1 ;
-(BOOL)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;
-(SFImage *)leadingImage;
-(void)setFootnote:(SFRichText *)arg1 ;
-(NSString *)nearbyBusinessesString;
-(void)setIsLocalApplicationResult:(BOOL)arg1 ;
-(BOOL)isLocalApplicationResult;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)dragText;
-(id)populatedMapsCardSectionIfApplicable;
-(void)fillOutPropertiesForCardSection:(id)arg1 ;
-(id)richTextFromText:(id)arg1 ;
-(void)setMapsResult:(MKSearchFoundationResult *)arg1 ;
-(MKSearchFoundationResult *)mapsResult;
-(void)setLeadingButton:(SFButton *)arg1 ;
-(id)dragURL;
-(void)setLeadingImage:(SFImage *)arg1 ;
-(void)setFallbackImage:(SFImage *)arg1 ;
-(BOOL)useCompactDisplay;
-(Class)customCardSectionViewClass;
-(id)contactIdentifiers;
-(BOOL)isTappable;
-(SFRichText *)footnote;
-(NSArray *)details;
-(SFFormattedText *)secondaryTitle;
-(id)dragAppBundleID;
-(id)dragSubtitle;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(BOOL)arg3 queryId:(unsigned long long)arg4 ;
-(id)initWithResult:(id)arg1 suggestion:(id)arg2 queryId:(unsigned long long)arg3 ;
-(BOOL)hasLeadingImage;
-(BOOL)truncateTitleMiddle;
-(void)setTruncateTitleMiddle:(BOOL)arg1 ;
-(BOOL)secondaryTitleIsDetached;
-(void)setSecondaryTitleIsDetached:(BOOL)arg1 ;
-(NSString *)footnoteButtonText;
-(void)setFootnoteButtonText:(NSString *)arg1 ;
-(void)setUseCompactDisplay:(BOOL)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(SFRichText *)title;
-(id)dragTitle;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1 ;
-(void)setSecondaryTitleImage:(SFImage *)arg1 ;
@end

