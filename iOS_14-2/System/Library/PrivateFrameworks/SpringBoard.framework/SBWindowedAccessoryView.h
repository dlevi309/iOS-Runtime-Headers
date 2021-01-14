/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBWindowedAccessoryViewDelegate;
@class UIColor, UIButton;

@interface SBWindowedAccessoryView : UIView {

	id<SBWindowedAccessoryViewDelegate> _delegate;
	UIColor* _backgroundColor;
	UIButton* _forceDetachWindowedAcessoryButton;

}

@property (nonatomic,retain) UIButton * forceDetachWindowedAcessoryButton;                     //@synthesize forceDetachWindowedAcessoryButton=_forceDetachWindowedAcessoryButton - In the implementation block
@property (assign,nonatomic,__weak) id<SBWindowedAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                        //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SBWindowedAccessoryViewDelegate>)delegate;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<SBWindowedAccessoryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_forceDetachWindowedAcessoryButtonTapped:(id)arg1 ;
-(UIButton *)forceDetachWindowedAcessoryButton;
-(void)setForceDetachWindowedAcessoryButton:(UIButton *)arg1 ;
@end

