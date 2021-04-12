/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionRowView.h>

@protocol MKPlaceCardActionSectionViewDelegate;
@class NSLayoutConstraint, MKPlaceCardActionItem, UIButton, UIView;

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
	UIView* _accessoryView;

}

@property (nonatomic,retain) MKPlaceCardActionItem * leftItem;                                      //@synthesize leftItem=_leftItem - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * rightItem;                                     //@synthesize rightItem=_rightItem - In the implementation block
@property (assign,nonatomic) BOOL singleItemIsFullWidth;                                            //@synthesize singleItemIsFullWidth=_singleItemIsFullWidth - In the implementation block
@property (nonatomic,retain) UIButton * leftButton;                                                 //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                                                //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                                //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardActionSectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_font:(BOOL)arg1 ;
+(void)_setButtonString:(id)arg1 forActionItem:(id)arg2 isLeftItem:(BOOL)arg3 ;
-(UIButton *)leftButton;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<MKPlaceCardActionSectionViewDelegate>)delegate;
-(UIView *)accessoryView;
-(UIButton *)rightButton;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)setDelegate:(id<MKPlaceCardActionSectionViewDelegate>)arg1 ;
-(MKPlaceCardActionItem *)leftItem;
-(void)setRightButton:(UIButton *)arg1 ;
-(void)infoCardThemeChanged;
-(void)setTopHairlineHidden:(BOOL)arg1 ;
-(void)_contentSizeDidChange;
-(void)setLeftItem:(MKPlaceCardActionItem *)arg1 ;
-(id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(BOOL)arg3 singleItemIsFullWidth:(BOOL)arg4 useMarginLayout:(BOOL)arg5 ;
-(void)_setUpViewWithButtons;
-(id)_makePlaceActionButtonWithActionItem:(id)arg1 isLeftItem:(BOOL)arg2 useSmallFonts:(BOOL)arg3 ;
-(id)currentLeftItem;
-(void)_leftButtonIsPressed:(id)arg1 ;
-(void)_rightButtonIsPressed:(id)arg1 ;
-(void)setSingleItemIsFullWidth:(BOOL)arg1 ;
-(id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(BOOL)arg3 singleItemIsFullWidth:(BOOL)arg4 ;
-(void)setRightItem:(MKPlaceCardActionItem *)arg1 ;
-(BOOL)singleItemIsFullWidth;
-(void)setLeftButton:(UIButton *)arg1 ;
-(id)glyphFont;
-(MKPlaceCardActionItem *)rightItem;
-(void)dealloc;
@end

