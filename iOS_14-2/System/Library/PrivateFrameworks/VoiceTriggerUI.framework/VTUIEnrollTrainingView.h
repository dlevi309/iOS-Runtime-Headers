/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VTUIEnrollTrainingViewDelegate;
@class SUICOrbView, UILabel, UIButton, VTUICheckMarkView, VTUIPagedLabel, SiriUIContentButton;

@interface VTUIEnrollTrainingView : UIView {

	BOOL _skipButtonHidden;
	BOOL _checkMarkViewHidden;
	BOOL _radarButtonHidden;
	SUICOrbView* _orbView;
	UILabel* _statusLabel;
	UIButton* _radarExitButton;
	id<VTUIEnrollTrainingViewDelegate> _delegate;
	UIButton* _skipButton;
	VTUICheckMarkView* _checkMark;
	VTUIPagedLabel* _instructionPagedLabel;
	SiriUIContentButton* _radarButton;

}

@property (nonatomic,retain) UIButton * skipButton;                                           //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) VTUICheckMarkView * checkMark;                                   //@synthesize checkMark=_checkMark - In the implementation block
@property (nonatomic,retain) VTUIPagedLabel * instructionPagedLabel;                          //@synthesize instructionPagedLabel=_instructionPagedLabel - In the implementation block
@property (nonatomic,retain) SiriUIContentButton * radarButton;                               //@synthesize radarButton=_radarButton - In the implementation block
@property (assign,nonatomic) BOOL skipButtonHidden;                                           //@synthesize skipButtonHidden=_skipButtonHidden - In the implementation block
@property (assign,nonatomic) BOOL checkMarkViewHidden;                                        //@synthesize checkMarkViewHidden=_checkMarkViewHidden - In the implementation block
@property (assign,nonatomic) BOOL radarButtonHidden;                                          //@synthesize radarButtonHidden=_radarButtonHidden - In the implementation block
@property (nonatomic,readonly) SUICOrbView * orbView;                                         //@synthesize orbView=_orbView - In the implementation block
@property (nonatomic,readonly) UILabel * statusLabel;                                         //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIButton * radarExitButton;                                    //@synthesize radarExitButton=_radarExitButton - In the implementation block
@property (assign,nonatomic,__weak) id<VTUIEnrollTrainingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<VTUIEnrollTrainingViewDelegate>)delegate;
-(void)setDelegate:(id<VTUIEnrollTrainingViewDelegate>)arg1 ;
-(UILabel *)statusLabel;
-(void)_setupUI;
-(UIButton *)skipButton;
-(void)setSkipButton:(UIButton *)arg1 ;
-(void)dealloc;
-(SUICOrbView *)orbView;
-(VTUICheckMarkView *)checkMark;
-(void)clearInstructionLabel;
-(void)setCheckMarkViewHidden:(BOOL)arg1 ;
-(void)startCheckMarkAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSkipButtonHidden:(BOOL)arg1 ;
-(void)slideInText:(id)arg1 afterDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)showRadarExitButton:(id)arg1 ;
-(UIButton *)radarExitButton;
-(void)setRadarButtonHidden:(BOOL)arg1 ;
-(VTUIPagedLabel *)instructionPagedLabel;
-(BOOL)skipButtonHidden;
-(BOOL)checkMarkViewHidden;
-(BOOL)radarButtonHidden;
-(void)setCheckMark:(VTUICheckMarkView *)arg1 ;
-(void)setInstructionPagedLabel:(VTUIPagedLabel *)arg1 ;
-(SiriUIContentButton *)radarButton;
-(void)setRadarButton:(SiriUIContentButton *)arg1 ;
@end

