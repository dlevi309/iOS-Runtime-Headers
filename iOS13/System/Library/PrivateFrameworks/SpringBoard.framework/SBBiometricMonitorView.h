/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SBBiometricMonitorView : UIView {

	UIView* _stateView;
	UIView* _presenceView;
	UIView* _poseView;
	long long _matchState;
	long long _presenceDetectState;
	long long _poseState;

}

@property (assign,nonatomic) long long matchState;                       //@synthesize matchState=_matchState - In the implementation block
@property (assign,nonatomic) long long presenceDetectState;              //@synthesize presenceDetectState=_presenceDetectState - In the implementation block
@property (assign,nonatomic) long long poseState;                        //@synthesize poseState=_poseState - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setMatchState:(long long)arg1 ;
-(void)setPresenceDetectState:(long long)arg1 ;
-(void)setPoseState:(long long)arg1 ;
-(long long)matchState;
-(long long)presenceDetectState;
-(long long)poseState;
@end

