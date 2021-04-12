/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEffectPickerView.h>

@interface CKEffectPickerLargeTextView : CKEffectPickerView {

	BOOL _finishedInitializing;

}

@property (assign,nonatomic) BOOL finishedInitializing;              //@synthesize finishedInitializing=_finishedInitializing - In the implementation block
-(void)setCloseButtonYPosition:(double)arg1 ;
-(void)activateTextSizeDependentConstraintsForSendButtonFrame:(CGRect)arg1 ;
-(double)marginBetweenPickerDotButtons;
-(CGRect)_updateBalloonViewOrigin:(CGRect)arg1 forButtonFrame:(CGRect)arg2 ;
-(void)_updateRoundedContainerView;
-(double)offsetYForLabelAtIndex:(long long)arg1 withInitialY:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 sendButtonFrame:(CGRect)arg2 balloonViewOrigin:(CGPoint)arg3 composition:(id)arg4 color:(char)arg5 ;
-(void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3 ;
-(void)cancelImpactSelection;
-(void)_touchUpInsideDotButton:(id)arg1 ;
-(BOOL)finishedInitializing;
-(void)effectTypeDidChange:(id)arg1 ;
-(BOOL)shouldAnimatePreviousLabelForCancel:(id)arg1 ;
-(void)setFinishedInitializing:(BOOL)arg1 ;
@end

