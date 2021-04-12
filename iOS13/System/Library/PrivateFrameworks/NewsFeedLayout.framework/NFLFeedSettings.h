/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NFLFeedLayoutSearchConfiguration, FCFeedTheming;
@class FCHeadlineTemplate, NSString, NFLCellGeneratorManager, NFLFontCache, UITraitCollection, UIColor;

@interface NFLFeedSettings : NSObject <NSCopying> {

	BOOL _allowsExcerptsInAllCells;
	BOOL _authenticationSetup;
	BOOL _showingPrefetchedPurchase;
	FCHeadlineTemplate* _defaultHeadlineTemplate;
	NSString* _preferredContentSizeCategory;
	double _feedWidth;
	double _feedGutter;
	double _feedTopMargin;
	double _adjustedFeedWidth;
	long long _columnCount;
	unsigned long long _layoutOptions;
	double _columnWidth;
	double _horizontalMarginWidth;
	double _rowHeight;
	double _verticalMarginInRows;
	double _articleContentInset;
	double _articleSelectionCornerRadius;
	double _articleSelectionInset;
	double _scaleValue;
	NFLCellGeneratorManager* _cellGeneratorManager;
	id<NFLFeedLayoutSearchConfiguration> _defaultFeedLayoutSearchConfiguration;
	NFLFontCache* _fontCache;
	UITraitCollection* _traitCollection;
	id<FCFeedTheming> _feedTheme;
	CGSize _viewportSize;

}

@property (nonatomic,retain) id<FCFeedTheming> feedTheme;                                                          //@synthesize feedTheme=_feedTheme - In the implementation block
@property (nonatomic,copy) id<NFLFeedLayoutSearchConfiguration> defaultFeedLayoutSearchConfiguration;              //@synthesize defaultFeedLayoutSearchConfiguration=_defaultFeedLayoutSearchConfiguration - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                                //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                                  //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) FCHeadlineTemplate * defaultHeadlineTemplate;                                         //@synthesize defaultHeadlineTemplate=_defaultHeadlineTemplate - In the implementation block
@property (nonatomic,readonly) double feedWidth;                                                                   //@synthesize feedWidth=_feedWidth - In the implementation block
@property (nonatomic,readonly) double feedGutter;                                                                  //@synthesize feedGutter=_feedGutter - In the implementation block
@property (nonatomic,readonly) double feedTopMargin;                                                               //@synthesize feedTopMargin=_feedTopMargin - In the implementation block
@property (nonatomic,readonly) double adjustedFeedWidth;                                                           //@synthesize adjustedFeedWidth=_adjustedFeedWidth - In the implementation block
@property (nonatomic,readonly) CGSize viewportSize;                                                                //@synthesize viewportSize=_viewportSize - In the implementation block
@property (nonatomic,copy,readonly) UIColor * feedBackgroundColor; 
@property (nonatomic,readonly) long long columnCount;                                                              //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutOptions;                                                   //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) double columnWidth;                                                                 //@synthesize columnWidth=_columnWidth - In the implementation block
@property (nonatomic,readonly) double horizontalMarginWidth;                                                       //@synthesize horizontalMarginWidth=_horizontalMarginWidth - In the implementation block
@property (nonatomic,readonly) double rowHeight;                                                                   //@synthesize rowHeight=_rowHeight - In the implementation block
@property (nonatomic,readonly) double verticalMarginInRows;                                                        //@synthesize verticalMarginInRows=_verticalMarginInRows - In the implementation block
@property (nonatomic,readonly) double articleContentInset;                                                         //@synthesize articleContentInset=_articleContentInset - In the implementation block
@property (nonatomic,readonly) double articleSelectionCornerRadius;                                                //@synthesize articleSelectionCornerRadius=_articleSelectionCornerRadius - In the implementation block
@property (nonatomic,readonly) double articleSelectionInset;                                                       //@synthesize articleSelectionInset=_articleSelectionInset - In the implementation block
@property (nonatomic,readonly) double scaleValue;                                                                  //@synthesize scaleValue=_scaleValue - In the implementation block
@property (nonatomic,readonly) NFLCellGeneratorManager * cellGeneratorManager;                                     //@synthesize cellGeneratorManager=_cellGeneratorManager - In the implementation block
@property (nonatomic,readonly) NFLFontCache * fontCache;                                                           //@synthesize fontCache=_fontCache - In the implementation block
@property (assign,nonatomic) BOOL allowsExcerptsInAllCells;                                                        //@synthesize allowsExcerptsInAllCells=_allowsExcerptsInAllCells - In the implementation block
@property (nonatomic,readonly) BOOL authenticationSetup;                                                           //@synthesize authenticationSetup=_authenticationSetup - In the implementation block
@property (nonatomic,readonly) BOOL showingPrefetchedPurchase;                                                     //@synthesize showingPrefetchedPurchase=_showingPrefetchedPurchase - In the implementation block
+(UIEdgeInsets)adjustedLayoutMargins:(UIEdgeInsets)arg1 viewportWidth:(double)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)columnCount;
-(double)scaleValue;
-(unsigned long long)layoutOptions;
-(NSString *)preferredContentSizeCategory;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(double)rowHeight;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(double)columnWidth;
-(FCHeadlineTemplate *)defaultHeadlineTemplate;
-(id<FCFeedTheming>)feedTheme;
-(void)setFeedTheme:(id<FCFeedTheming>)arg1 ;
-(CGSize)viewportSize;
-(UIColor *)feedBackgroundColor;
-(NFLFontCache *)fontCache;
-(double)cellWidthForColumnSpan:(long long)arg1 ;
-(double)horizontalMarginWidth;
-(double)verticalMarginInRows;
-(double)cellHeightForRowSpan:(long long)arg1 ;
-(double)articleSelectionInset;
-(double)feedWidth;
-(double)feedGutter;
-(id)initWithViewportSize:(CGSize)arg1 defaultFeedLayoutSearchConfiguration:(id)arg2 columnCount:(long long)arg3 feedGutter:(double)arg4 feedTopMargin:(double)arg5 verticalMarginInRows:(double)arg6 preferredContentSizeCategory:(id)arg7 maximumContentInset:(double)arg8 selectionCornerRadius:(double)arg9 selectionInset:(double)arg10 showAccessoryText:(BOOL)arg11 layoutOptions:(unsigned long long)arg12 ;
-(id)initWithViewportSize:(CGSize)arg1 viewportInsets:(UIEdgeInsets)arg2 preferredContentSizeCategory:(id)arg3 showAccessoryText:(BOOL)arg4 layoutType:(long long)arg5 layoutOptions:(unsigned long long)arg6 ;
-(id)initWithViewportSize:(CGSize)arg1 viewportInsets:(UIEdgeInsets)arg2 preferredContentSizeCategory:(id)arg3 showAccessoryText:(BOOL)arg4 ;
-(BOOL)preservesLayoutMargins:(UIEdgeInsets)arg1 ;
-(BOOL)preservesTraitCollection:(id)arg1 ;
-(void)setDefaultHeadlineTemplate:(FCHeadlineTemplate *)arg1 ;
-(double)feedTopMargin;
-(double)adjustedFeedWidth;
-(double)articleContentInset;
-(double)articleSelectionCornerRadius;
-(NFLCellGeneratorManager *)cellGeneratorManager;
-(id<NFLFeedLayoutSearchConfiguration>)defaultFeedLayoutSearchConfiguration;
-(void)setDefaultFeedLayoutSearchConfiguration:(id<NFLFeedLayoutSearchConfiguration>)arg1 ;
-(BOOL)allowsExcerptsInAllCells;
-(void)setAllowsExcerptsInAllCells:(BOOL)arg1 ;
-(BOOL)authenticationSetup;
-(BOOL)showingPrefetchedPurchase;
@end

