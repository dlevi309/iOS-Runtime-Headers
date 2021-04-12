/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIVisualEffectView, UIView, UILabel, UIKBUndoStyling;

@interface UIKBUndoStateHUD : UIView {

	long long _controlType;
	NSLayoutConstraint* _undoStateHUDWidthConstraint;
	NSLayoutConstraint* _undoStateHUDHeightConstraint;
	UIVisualEffectView* _shadowView;
	UIView* _containerView;
	UILabel* _labelView;
	UIKBUndoStyling* _style;

}

@property (nonatomic,retain) UIVisualEffectView * shadowView;                                //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                         //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * labelView;                                            //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIKBUndoStyling * style;                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long controlType;                                          //@synthesize controlType=_controlType - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * undoStateHUDWidthConstraint;               //@synthesize undoStateHUDWidthConstraint=_undoStateHUDWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * undoStateHUDHeightConstraint;              //@synthesize undoStateHUDHeightConstraint=_undoStateHUDHeightConstraint - In the implementation block
-(void)setContainerView:(UIView *)arg1 ;
-(UILabel *)labelView;
-(UIVisualEffectView *)shadowView;
-(UIView *)containerView;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(void)setShadowView:(UIVisualEffectView *)arg1 ;
-(void)setStyle:(UIKBUndoStyling *)arg1 ;
-(long long)controlType;
-(void)setLabelView:(UILabel *)arg1 ;
-(void)setControlType:(long long)arg1 ;
-(NSLayoutConstraint *)undoStateHUDWidthConstraint;
-(void)updateUndoStateHUDControlType:(long long)arg1 available:(BOOL)arg2 ;
-(void)setUndoStateHUDWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)undoStateHUDHeightConstraint;
-(void)setUndoStateHUDHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIKBUndoStyling *)style;
@end

