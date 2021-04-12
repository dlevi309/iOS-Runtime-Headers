/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKStackViewDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/MKETAProviderObserver.h>

@protocol _MKPlaceItem, GEOTransitLineItem, MKPlaceCardHeaderViewControllerDelegate, MKUGCCallToActionViewDelegate;
@class MKPlaceSectionRowView, UIImageView, _MKUILabel, UIView, NSArray, UILayoutGuide, NSURL, _MKDataHeaderModel, _MKTokenAttributedString, NSLayoutConstraint, MKUGCCallToActionView, MKUGCCallToActionViewAppearance, _MKLocalizedHoursBuilder, NSString;

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <_MKStackViewDelegate, MKModuleViewControllerProtocol, MKETAProviderObserver> {

	unsigned long long _layout;
	MKPlaceSectionRowView* _titleSectionView;
	MKPlaceSectionRowView* _labelsSectionView;
	UIImageView* _logoImageView;
	_MKUILabel* _titleOnlyLabel;
	_MKUILabel* _firstLabel;
	_MKUILabel* _secondLabel;
	_MKUILabel* _secondaryNameLabel;
	_MKUILabel* _thirdLabel;
	UIView* _thirdDisplayedLabel;
	NSArray* _constraints;
	UILayoutGuide* _leadingGuide;
	NSURL* _logoURL;
	_MKDataHeaderModel* _dataModel;
	_MKTokenAttributedString* _titleToken;
	_MKTokenAttributedString* _secondaryNameToken;
	_MKTokenAttributedString* _distanceToken;
	_MKTokenAttributedString* _ratingsToken;
	_MKTokenAttributedString* _priceToken;
	_MKTokenAttributedString* _categoryToken;
	_MKTokenAttributedString* _openStateToken;
	_MKTokenAttributedString* _userLocationToken;
	_MKTokenAttributedString* _venueToken;
	_MKTokenAttributedString* _verifiedToken;
	NSLayoutConstraint* _titleTrailingConstraint;
	MKUGCCallToActionView* _callToActionView;
	NSLayoutConstraint* _secondLabelToFirstLabelConstraint;
	NSLayoutConstraint* _lastLabelToBottomConstraint;
	double _secondLabelToFirstLabelConstraintConstantMax;
	double _secondLabelToFirstLabelConstraintConstantMin;
	BOOL _isUserLocation;
	BOOL _optionSmallScreen;
	BOOL _constraintsCreated;
	BOOL _notVerified;
	double _lastMaskAlphaValueApplied;
	id<_MKPlaceItem> _placeItem;
	id<GEOTransitLineItem> _lineItem;
	double _contentAlpha;
	id<MKPlaceCardHeaderViewControllerDelegate> _delegate;
	MKUGCCallToActionViewAppearance* _callToActionAppearance;
	id<MKUGCCallToActionViewDelegate> _callToActionDelegate;
	_MKLocalizedHoursBuilder* _localizedHoursBuilder;

}

@property (nonatomic,retain) _MKLocalizedHoursBuilder * localizedHoursBuilder;                           //@synthesize localizedHoursBuilder=_localizedHoursBuilder - In the implementation block
@property (nonatomic,readonly) double lastLabelToBottomConstant; 
@property (nonatomic,readonly) BOOL shouldShowCallToActionWithRatingHeaderInfo; 
@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                                               //@synthesize placeItem=_placeItem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                                          //@synthesize lineItem=_lineItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardHeaderViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double contentAlpha;                                                        //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (nonatomic,retain) MKUGCCallToActionViewAppearance * callToActionAppearance;                   //@synthesize callToActionAppearance=_callToActionAppearance - In the implementation block
@property (assign,nonatomic,__weak) id<MKUGCCallToActionViewDelegate> callToActionDelegate;              //@synthesize callToActionDelegate=_callToActionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)minimalModeHeight;
-(double)contentAlpha;
-(void)updateContent;
-(id<MKPlaceCardHeaderViewControllerDelegate>)delegate;
-(void)_contentSizeDidChangeNotificationHandler;
-(id)titleFont;
-(void)updateHeaderTitle;
-(id)newLabel;
-(double)secondaryNameLabelPadding;
-(void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3 ;
-(void)setDelegate:(id<MKPlaceCardHeaderViewControllerDelegate>)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)ETAProviderUpdated:(id)arg1 ;
-(id<GEOTransitLineItem>)lineItem;
-(void)infoCardThemeChanged;
-(void)_commonInit;
-(void)_contentSizeDidChange;
-(void)_createViews;
-(void)_setupDatas;
-(void)_setAlpha:(double)arg1 toView:(id)arg2 ifIntersects:(CGRect)arg3 ;
-(void)_upateContentAlpha;
-(void)animateSecondLabelWithPercentage:(double)arg1 ;
-(id)secondaryNameTimingFunction;
-(id)_secondaryNameTitle;
-(BOOL)shouldShowCallToActionWithRatingHeaderInfo;
-(void)updateViews;
-(_MKLocalizedHoursBuilder *)localizedHoursBuilder;
-(id)_currentTitle;
-(id)_reviewLabelText;
-(id)_openStateString;
-(id)_verifiedText;
-(BOOL)_isLikelyToShowDistance;
-(BOOL)_hasSecondaryName;
-(BOOL)_mapItemShouldDisplayDistance:(id)arg1 ;
-(MKUGCCallToActionViewAppearance *)callToActionAppearance;
-(id<MKUGCCallToActionViewDelegate>)callToActionDelegate;
-(double)lastLabelToBottomConstant;
-(void)setConstraints;
-(void)setLocalizedHoursBuilder:(_MKLocalizedHoursBuilder *)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithLineItem:(id)arg1 layout:(unsigned long long)arg2 ;
-(id<_MKPlaceItem>)placeItem;
-(void)_loadLogo;
-(void)hideTitle:(BOOL)arg1 ;
-(id)initWithPlaceItem:(id)arg1 layout:(unsigned long long)arg2 ;
-(void)setCallToActionDelegate:(id<MKUGCCallToActionViewDelegate>)arg1 ;
-(void)setCallToActionAppearance:(MKUGCCallToActionViewAppearance *)arg1 ;
@end

