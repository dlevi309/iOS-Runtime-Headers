/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setPlusDView:(UIView *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)plusDView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setBurnView:(UIView *)arg1 ;
-(void)setShowingBackgroundEffect:(BOOL)arg1 ;
-(BOOL)showingBackgroundEffect;
-(UIView *)burnView;
@end

