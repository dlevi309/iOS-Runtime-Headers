/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class TUISystemInputAssistantView, UIKBHandwritingCandidateView, UIKeyboardCandidatePocketShadow;

@interface UIHandwritingAssistantView : UIKBKeyView {

	TUISystemInputAssistantView* _systemInputAssistantView;
	UIKBHandwritingCandidateView* _candidateView;
	UIKeyboardCandidatePocketShadow* _rightBorder;

}

@property (nonatomic,retain) TUISystemInputAssistantView * systemInputAssistantView;              //@synthesize systemInputAssistantView=_systemInputAssistantView - In the implementation block
@property (nonatomic,retain) UIKBHandwritingCandidateView * candidateView;                        //@synthesize candidateView=_candidateView - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * rightBorder;                       //@synthesize rightBorder=_rightBorder - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)displayLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(TUISystemInputAssistantView *)systemInputAssistantView;
-(id)candidateList;
-(void)dimKeys:(id)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(void)setCandidateView:(UIKBHandwritingCandidateView *)arg1 ;
-(UIKBHandwritingCandidateView *)candidateView;
-(CGRect)assistantFrameForKeyplane:(id)arg1 key:(id)arg2 ;
-(void)setSystemInputAssistantView:(TUISystemInputAssistantView *)arg1 ;
-(void)setRightBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(UIKeyboardCandidatePocketShadow *)rightBorder;
@end

