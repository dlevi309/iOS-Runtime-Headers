/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(TPRevealingRingView *)backgroundRing;
-(UILabel *)label;
-(void)setHighlighted:(BOOL)arg1 ;
@end

