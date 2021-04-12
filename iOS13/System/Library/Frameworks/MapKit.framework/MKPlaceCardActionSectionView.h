/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionRowView.h>

@protocol MKPlaceCardActionSectionViewDelegate;
@class NSLayoutConstraint, MKPlaceCardActionItem, UIButton, MKPlatterView;

@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView {

	BOOL _useMarginLayout;
	BOOL _usingSmallFonts;
	NSLayoutConstraint* _heightAnchor;
	NSLayoutConstraint* _leftButtonYConstraint;
	NSLayoutConstraint* _rightButtonYConstraint;
	NSLayoutConstraint* _platterSizeConstraint;
	BOOL _singleItemIsFullWidth;
	MKPlaceCardActionItem* _leftItem;
	MKPlaceCardActionItem* _rightItem;
	UIButton* _rightButton;
	UIButton* _leftButton;
	id<MKPlaceCardActionSectionViewDelegate> _delegate;
	MKPlatterView* _platterView;

}

@property (nonatomic,retain) MKPlaceCardActionItem * leftItem;                                      //@synthesize leftItem=_leftItem - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * rightItem;                                     //@synthesize rightItem=_rightItem - In the implementation block
@property (assign,nonatomic) BOOL singleItemIsFullWidth;                                            //@synthesize singleItemIsFullWidth=_singleItemIsFullWidth - In the implementation block
@property (nonatomic,retain) UIButton * leftButton;                                                 //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                                                //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) MKPlatterView * platterView;                                           //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardActionSectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_font:(BOOL)arg1 ;
+(void)_setButtonString:(id)arg1 forActionItem:(id)arg2 isLeftItem:(BOOL)arg3 ;
-(void)dealloc;
-(id<MKPlaceCardActionSectionViewDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceCardActionSectionViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIButton *)leftButton;
-(void)setLeftButton:(UIButton *)arg1 ;
-(void)setPlatterView:(MKPlatterView *)arg1 ;
-(MKPlatterView *)platterView;
-(void)_contentSizeDidChange;
-(UIButton *)rightButton;
-(void)setRightButton:(UIButton *)arg1 ;
-(void)infoCardThemeChanged;
-(void)setTopHairlineHidden:(BOOL)arg1 ;
-(id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(BOOL)arg3 singleItemIsFullWidth:(BOOL)arg4 useMarginLayout:(BOOL)arg5 ;
-(void)_setUpViewWithButtons;
-(id)_makePlaceActionButtonWithActionItem:(id)arg1 isLeftItem:(BOOL)arg2 useSmallFonts:(BOOL)arg3 ;
-(id)currentLeftItem;
-(MKPlaceCardActionItem *)leftItem;
-(id)glyphFont;
-(void)_leftButtonIsPressed:(id)arg1 ;
-(void)_rightButtonIsPressed:(id)arg1 ;
-(id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(BOOL)arg3 singleItemIsFullWidth:(BOOL)arg4 ;
-(void)setLeftItem:(MKPlaceCardActionItem *)arg1 ;
-(MKPlaceCardActionItem *)rightItem;
-(void)setRightItem:(MKPlaceCardActionItem *)arg1 ;
-(BOOL)singleItemIsFullWidth;
-(void)setSingleItemIsFullWidth:(BOOL)arg1 ;
@end

