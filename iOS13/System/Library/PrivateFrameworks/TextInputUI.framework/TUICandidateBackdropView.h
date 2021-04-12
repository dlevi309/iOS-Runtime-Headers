/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIKBBackdropView *)backdropView;
-(void)setBackdropView:(UIKBBackdropView *)arg1 ;
-(long long)backdropViewStyle;
@end

