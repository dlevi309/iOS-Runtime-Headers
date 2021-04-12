/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIControl.h>

@class TPRevealingRingView, UILabel;

@interface SBUIRingViewLabelButton : UIControl {

	TPRevealingRingView* _ringView;
	UILabel* _label;

}

@property (nonatomic,readonly) TPRevealingRingView * backgroundRing;              //@synthesize ringView=_ringView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                   //@synthesize label=_label - In the implementation block
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(TPRevealingRingView *)backgroundRing;
@end

