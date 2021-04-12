/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>

@protocol MKPlaceParentInfoViewControllerDelegate, _MKInfoCardAnalyticsDelegate;
@class MKPlaceSectionRowView, UILabel, UIButton, UIStackView, NSLayoutConstraint, MKMapItem, NSString;

@interface MKPlaceParentInfoViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, MKStackingViewControllerFixedHeightAware> {

	MKPlaceSectionRowView* _sectionRow;
	UILabel* _titleLabel;
	UIButton* _nameButton;
	UIStackView* _stackView;
	BOOL _resizableViewsDisabled;
	id<MKPlaceParentInfoViewControllerDelegate> _delegate;
	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
	NSLayoutConstraint* _topToBaselineConstraint;
	NSLayoutConstraint* _baselineToBottomConstraint;
	MKMapItem* _childMapItem;
	MKMapItem* _parentMapItem;

}

@property (nonatomic,retain) NSLayoutConstraint * topToBaselineConstraint;                             //@synthesize topToBaselineConstraint=_topToBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * baselineToBottomConstraint;                          //@synthesize baselineToBottomConstraint=_baselineToBottomConstraint - In the implementation block
@property (nonatomic,retain) MKMapItem * childMapItem;                                                 //@synthesize childMapItem=_childMapItem - In the implementation block
@property (nonatomic,retain) MKMapItem * parentMapItem;                                                //@synthesize parentMapItem=_parentMapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceParentInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;                //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                              //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
+(id)parentInfoWithPlaceItem:(id)arg1 ;
-(id<MKPlaceParentInfoViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceParentInfoViewControllerDelegate>)arg1 ;
-(id)parentIdentifiers;
-(void)setupData;
-(id)font;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)_contentSizeDidChange;
-(void)_buttonTapped:(id)arg1 ;
-(void)_updateFont;
-(void)infoCardThemeChanged;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(id)initWithChild:(id)arg1 ;
-(void)fetchParentItem;
-(void)showData;
-(MKMapItem *)parentMapItem;
-(void)updateLabelsColor;
-(void)setParentMapItem:(MKMapItem *)arg1 ;
-(id)venueTitleForMapItem:(id)arg1 ;
-(NSLayoutConstraint *)topToBaselineConstraint;
-(void)setTopToBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)baselineToBottomConstraint;
-(void)setBaselineToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(MKMapItem *)childMapItem;
-(void)setChildMapItem:(MKMapItem *)arg1 ;
@end

