/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface RCHitTestForwardingView : UIView {

	UIView* _targetView;

}

@property (nonatomic,retain) UIView * targetView;              //@synthesize targetView=_targetView - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
@end

