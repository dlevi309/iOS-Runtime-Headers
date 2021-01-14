/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TUICandidateViewStyle;
@class UIKBBackdropView;

@interface TUICandidateBackdropView : UIView {

	id<TUICandidateViewStyle> _style;
	UIKBBackdropView* _backdropView;

}

@property (nonatomic,retain) UIKBBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;              //@synthesize style=_style - In the implementation block
-(UIKBBackdropView *)backdropView;
-(void)setBackdropView:(UIKBBackdropView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(long long)backdropViewStyle;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(id<TUICandidateViewStyle>)style;
@end

