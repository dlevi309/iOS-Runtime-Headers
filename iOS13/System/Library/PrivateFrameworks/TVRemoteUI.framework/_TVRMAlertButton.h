/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <UIKitCore/UIButton.h>

@class UIView;

@interface _TVRMAlertButton : UIButton {

	BOOL _showingBackgroundEffect;
	UIView* _burnView;
	UIView* _plusDView;

}

@property (assign,nonatomic) BOOL showingBackgroundEffect;              //@synthesize showingBackgroundEffect=_showingBackgroundEffect - In the implementation block
@property (nonatomic,retain) UIView * burnView;                         //@synthesize burnView=_burnView - In the implementation block
@property (nonatomic,retain) UIView * plusDView;                        //@synthesize plusDView=_plusDView - In the implementation block
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setPlusDView:(UIView *)arg1 ;
-(UIView *)plusDView;
-(void)setBurnView:(UIView *)arg1 ;
-(void)setShowingBackgroundEffect:(BOOL)arg1 ;
-(BOOL)showingBackgroundEffect;
-(UIView *)burnView;
@end

