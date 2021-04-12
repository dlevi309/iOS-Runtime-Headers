/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSButton.h>

@class CPBarButton, UIImageView, UIImage, UIView, NSLayoutConstraint;

@interface CPSBarButton : CPSButton {

	BOOL _showBackIndicator;
	CPBarButton* _cyBarButton;
	UIImageView* _backIndicatorImageView;
	UIImage* _backIndicatorImage;
	UIView* _backgroundView;
	NSLayoutConstraint* _backIndicatorHeightConstraint;

}

@property (nonatomic,retain) CPBarButton * cyBarButton;                                       //@synthesize cyBarButton=_cyBarButton - In the implementation block
@property (assign,nonatomic) BOOL showBackIndicator;                                          //@synthesize showBackIndicator=_showBackIndicator - In the implementation block
@property (nonatomic,retain) UIImageView * backIndicatorImageView;                            //@synthesize backIndicatorImageView=_backIndicatorImageView - In the implementation block
@property (nonatomic,retain) UIImage * backIndicatorImage;                                    //@synthesize backIndicatorImage=_backIndicatorImage - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * backIndicatorHeightConstraint;              //@synthesize backIndicatorHeightConstraint=_backIndicatorHeightConstraint - In the implementation block
+(id)buttonWithCPBarButton:(id)arg1 showBackIndicator:(BOOL)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)backgroundView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didAddSubview:(id)arg1 ;
-(UIImage *)backIndicatorImage;
-(id)_externalUnfocusedBorderColor;
-(void)setBackIndicatorImage:(UIImage *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setShowBackIndicator:(BOOL)arg1 ;
-(void)setCyBarButton:(CPBarButton *)arg1 ;
-(BOOL)showBackIndicator;
-(void)setBackIndicatorImageView:(UIImageView *)arg1 ;
-(UIImageView *)backIndicatorImageView;
-(void)_setupBackButtonImagesIfNeccessary;
-(void)_updateBackIndicatorImageView;
-(NSLayoutConstraint *)backIndicatorHeightConstraint;
-(void)setBackIndicatorHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(CPBarButton *)cyBarButton;
-(void)_resetAlpha;
@end

