/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)showData;
-(MKMapItem *)childMapItem;
-(id)initWithChild:(id)arg1 ;
-(void)fetchParentItem;
-(MKMapItem *)parentMapItem;
-(void)_buttonTapped:(id)arg1 ;
-(void)updateLabelsColor;
-(id)parentIdentifiers;
-(void)setParentMapItem:(MKMapItem *)arg1 ;
-(id)venueTitleForMapItem:(id)arg1 ;
-(NSLayoutConstraint *)topToBaselineConstraint;
-(void)setTopToBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)baselineToBottomConstraint;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(void)setBaselineToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setChildMapItem:(MKMapItem *)arg1 ;
-(void)setDelegate:(id<MKPlaceParentInfoViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)infoCardThemeChanged;
-(void)_contentSizeDidChange;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)_updateFont;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(void)setupData;
-(id)font;
@end

