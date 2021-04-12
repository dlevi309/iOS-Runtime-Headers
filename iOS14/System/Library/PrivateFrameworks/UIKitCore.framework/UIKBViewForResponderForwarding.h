/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface UIKBViewForResponderForwarding : UIView {

	UIView* _responderForForwarding;

}

@property (nonatomic,retain) UIView * responderForForwarding;              //@synthesize responderForForwarding=_responderForForwarding - In the implementation block
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)responderForForwarding;
-(void)setResponderForForwarding:(UIView *)arg1 ;
@end

