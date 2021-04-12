/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CRSUIDashboardFocusableItemProviding.h>

@protocol CPSButtonDelegate;
@class UIImageView, CPDashboardButton, CPSAbridgableLabel, UIButton, UIView, NSLayoutConstraint, NSString;

@interface CPSDashboardItemView : UIView <CRSUIDashboardFocusableItemProviding> {

	UIImageView* _imageView;
	id<CPSButtonDelegate> _delegate;
	CPDashboardButton* _dashboardButton;
	CPSAbridgableLabel* _titleLabel;
	CPSAbridgableLabel* _subtitleLabel;
	UIButton* _button;
	UIView* _focusBackgroundView;
	unsigned long long _layoutAxis;
	NSLayoutConstraint* _subtitleWidthConstraint;
	NSLayoutConstraint* _titleLabelConnectingConstraint;

}

@property (nonatomic,retain) CPDashboardButton * dashboardButton;                              //@synthesize dashboardButton=_dashboardButton - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * subtitleLabel;                               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIView * focusBackgroundView;                                     //@synthesize focusBackgroundView=_focusBackgroundView - In the implementation block
@property (assign,nonatomic) unsigned long long layoutAxis;                                    //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleWidthConstraint;                     //@synthesize subtitleWidthConstraint=_subtitleWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelConnectingConstraint;              //@synthesize titleLabelConnectingConstraint=_titleLabelConnectingConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                          //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) id<CPSButtonDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CPSButtonDelegate>)delegate;
-(void)setDelegate:(id<CPSButtonDelegate>)arg1 ;
-(void)_setup;
-(UIButton *)button;
-(CPSAbridgableLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(void)setLayoutAxis:(unsigned long long)arg1 ;
-(unsigned long long)layoutAxis;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)setSubtitleLabel:(CPSAbridgableLabel *)arg1 ;
-(CPSAbridgableLabel *)subtitleLabel;
-(void)_touchDown:(id)arg1 ;
-(id)initWithDashboardButton:(id)arg1 layoutAxis:(unsigned long long)arg2 ;
-(void)_buttonTriggered:(id)arg1 ;
-(void)_touchEnded:(id)arg1 ;
-(CPDashboardButton *)dashboardButton;
-(NSLayoutConstraint *)titleLabelConnectingConstraint;
-(NSLayoutConstraint *)subtitleWidthConstraint;
-(void)setSubtitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)focusBackgroundView;
-(void)focusableItemPressed:(BOOL)arg1 ;
-(void)focusableItemSelected;
-(void)focusableItemFocused:(BOOL)arg1 ;
-(void)setDashboardButton:(CPDashboardButton *)arg1 ;
-(void)setFocusBackgroundView:(UIView *)arg1 ;
-(void)setTitleLabelConnectingConstraint:(NSLayoutConstraint *)arg1 ;
@end

