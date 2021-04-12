/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dimKeys:(id)arg1 ;
-(CGRect)assistantFrameForKeyplane:(id)arg1 key:(id)arg2 ;
-(void)setRightBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(UIKeyboardCandidatePocketShadow *)rightBorder;
-(void)setSystemInputAssistantView:(TUISystemInputAssistantView *)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)candidateList;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)displayLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(TUISystemInputAssistantView *)systemInputAssistantView;
-(UIKBHandwritingCandidateView *)candidateView;
-(void)setCandidateView:(UIKBHandwritingCandidateView *)arg1 ;
@end

