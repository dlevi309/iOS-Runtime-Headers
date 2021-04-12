/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class UITraitCollection, UIFont, UIImageSymbolConfiguration;

@interface SFNavigationBarMetrics : NSObject {

	BOOL _usesNavigationBarHeightForSheetPresentation;
	UITraitCollection* _traitCollectionForFontMetrics;
	double _minimumBarHeight;
	UIFont* _defaultLabelFont;
	UIFont* _defaultBoldFont;
	UIFont* _narrowEditingLabelFont;
	BOOL _narrowEditingScaleFactorNeedsUpdate;
	double _narrowEditingScaleFactor;
	double _safariBarHeight;
	double _safariViewControllerBarHeight;
	double _safariSquishHeightQuantizationOffset;
	double _safariViewControllerSquishHeightQuantizationOffset;
	double _statusBarHeight;
	UIImageSymbolConfiguration* _accessoryImageSymbolConfiguration;
	UIImageSymbolConfiguration* _squishedAccessoryImageSymbolConfiguration;
	double _accessibilityImageScale;
	double _urlOutlineCornerRadius;
	double _defaultBarHeight;
	double _urlContainerTop;
	double _urlOutlineHeight;
	double _urlLabelVerticalOffset;
	double _urlLabelAccessoryItemSquishedVerticalOffset;
	double _urlLabelAccessoryLockItemVerticalOffset;
	double _distanceFromLabelBaselineToURLOutlineBottom;

}

@property (nonatomic,readonly) double accessibilityImageScale;                                                      //@synthesize accessibilityImageScale=_accessibilityImageScale - In the implementation block
@property (nonatomic,readonly) double urlOutlineCornerRadius;                                                       //@synthesize urlOutlineCornerRadius=_urlOutlineCornerRadius - In the implementation block
@property (nonatomic,readonly) double defaultBarHeight;                                                             //@synthesize defaultBarHeight=_defaultBarHeight - In the implementation block
@property (nonatomic,readonly) double minimumBarHeight;                                                             //@synthesize minimumBarHeight=_minimumBarHeight - In the implementation block
@property (nonatomic,readonly) double urlContainerTop;                                                              //@synthesize urlContainerTop=_urlContainerTop - In the implementation block
@property (nonatomic,readonly) double urlOutlineHeight;                                                             //@synthesize urlOutlineHeight=_urlOutlineHeight - In the implementation block
@property (nonatomic,readonly) UIFont * defaultLabelFont; 
@property (nonatomic,readonly) UIFont * defaultBoldFont; 
@property (nonatomic,readonly) UIFont * narrowEditingLabelFont; 
@property (nonatomic,readonly) double narrowEditingScaleFactor; 
@property (nonatomic,readonly) double urlLabelVerticalOffset;                                                       //@synthesize urlLabelVerticalOffset=_urlLabelVerticalOffset - In the implementation block
@property (nonatomic,readonly) double urlLabelAccessoryItemSquishedVerticalOffset;                                  //@synthesize urlLabelAccessoryItemSquishedVerticalOffset=_urlLabelAccessoryItemSquishedVerticalOffset - In the implementation block
@property (nonatomic,readonly) double urlLabelAccessoryLockItemVerticalOffset;                                      //@synthesize urlLabelAccessoryLockItemVerticalOffset=_urlLabelAccessoryLockItemVerticalOffset - In the implementation block
@property (nonatomic,readonly) double distanceFromLabelBaselineToURLOutlineBottom;                                  //@synthesize distanceFromLabelBaselineToURLOutlineBottom=_distanceFromLabelBaselineToURLOutlineBottom - In the implementation block
@property (nonatomic,readonly) UIImageSymbolConfiguration * accessoryImageSymbolConfiguration; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * squishedAccessoryImageSymbolConfiguration; 
-(id)init;
-(double)urlOutlineCornerRadius;
-(BOOL)updateForStatusBarHeight:(double)arg1 ;
-(double)barHeightWithBarMetricsCategory:(long long)arg1 ;
-(double)minimumBarHeight;
-(double)urlOutlineHeight;
-(UIFont *)narrowEditingLabelFont;
-(UIFont *)defaultLabelFont;
-(double)narrowEditingScaleFactor;
-(UIFont *)defaultBoldFont;
-(BOOL)updateForTraitCollection:(id)arg1 ;
-(double)urlContainerTop;
-(double)urlLabelVerticalOffset;
-(double)squishHeightQuantizationOffsetWithBarMetricsCategory:(long long)arg1 ;
-(double)distanceFromLabelBaselineToURLOutlineBottom;
-(UIImageSymbolConfiguration *)accessoryImageSymbolConfiguration;
-(UIImageSymbolConfiguration *)squishedAccessoryImageSymbolConfiguration;
-(BOOL)_updateForContentSizeCategory:(id)arg1 ;
-(void)_updateMetrics;
-(BOOL)_updateForPresentationSemanticContext:(long long)arg1 ;
-(id)_contentSizeCategoryWithPreferredCategory:(id)arg1 ;
-(double)accessibilityImageScale;
-(double)defaultBarHeight;
-(double)urlLabelAccessoryItemSquishedVerticalOffset;
-(double)urlLabelAccessoryLockItemVerticalOffset;
@end

