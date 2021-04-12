/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKStackViewDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/MKETAProviderObserver.h>

@protocol _MKPlaceItem, GEOTransitLineItem, MKPlaceCardHeaderViewControllerDelegate;
@class MKPlaceSectionRowView, UIImageView, _MKUILabel, MKMaskContentView, UIView, NSArray, UILayoutGuide, NSURL, _MKDataHeaderModel, _MKTokenAttributedString, NSLayoutConstraint, _MKLocalizedHoursBuilder, NSString;

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <_MKStackViewDelegate, MKModuleViewControllerProtocol, MKETAProviderObserver> {

	unsigned long long _layout;
	MKPlaceSectionRowView* _titleSectionView;
	MKPlaceSectionRowView* _labelsSectionView;
	UIImageView* _logoImageView;
	_MKUILabel* _titleOnlyLabel;
	_MKUILabel* _firstLabel;
	_MKUILabel* _secondLabel;
	_MKUILabel* _secondaryNameLabel;
	MKMaskContentView* _contentMaskView;
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
	NSLayoutConstraint* _secondLabelToFirstLabelConstraint;
	double _secondLabelToFirstLabelConstraintConstantMax;
	double _secondLabelToFirstLabelConstraintConstantMin;
	BOOL _isUserLocation;
	BOOL _optionSmallScreen;
	BOOL _constraintsCreated;
	BOOL _notVerified;
	id<_MKPlaceItem> _placeItem;
	id<GEOTransitLineItem> _lineItem;
	id<MKPlaceCardHeaderViewControllerDelegate> _delegate;
	_MKLocalizedHoursBuilder* _localizedHoursBuilder;

}

@property (nonatomic,retain) _MKLocalizedHoursBuilder * localizedHoursBuilder;                         //@synthesize localizedHoursBuilder=_localizedHoursBuilder - In the implementation block
@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                                             //@synthesize placeItem=_placeItem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                                        //@synthesize lineItem=_lineItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardHeaderViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double contentAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)minimalModeHeight;
-(id<MKPlaceCardHeaderViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceCardHeaderViewControllerDelegate>)arg1 ;
-(void)_commonInit;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)updateContent;
-(void)setContentAlpha:(double)arg1 ;
-(id)titleFont;
-(void)_contentSizeDidChange;
-(void)updateViews;
-(void)infoCardThemeChanged;
-(id<GEOTransitLineItem>)lineItem;
-(double)contentAlpha;
-(id<_MKPlaceItem>)placeItem;
-(id)initWithPlaceItem:(id)arg1 layout:(unsigned long long)arg2 ;
-(void)updateHeaderTitle;
-(double)secondaryNameLabelPadding;
-(void)hideTitle:(BOOL)arg1 ;
-(void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3 ;
-(void)ETAProviderUpdated:(id)arg1 ;
-(id)initWithLineItem:(id)arg1 layout:(unsigned long long)arg2 ;
-(void)_contentSizeDidChangeNotificationHandler;
-(id)newLabel;
-(void)_createViews;
-(void)_setupDatas;
-(void)animateSecondLabelWithPercentage:(double)arg1 ;
-(id)secondaryNameTimingFunction;
-(id)_secondaryNameTitle;
-(_MKLocalizedHoursBuilder *)localizedHoursBuilder;
-(id)_currentTitle;
-(id)_reviewLabelText;
-(id)_openStateString;
-(id)_verifiedText;
-(BOOL)_isLikelyToShowDistance;
-(BOOL)_hasSecondaryName;
-(BOOL)_mapItemShouldDisplayDistance:(id)arg1 ;
-(void)_loadLogo;
-(void)setConstraints;
-(void)setLocalizedHoursBuilder:(_MKLocalizedHoursBuilder *)arg1 ;
@end

