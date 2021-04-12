/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class UISelectionFeedbackGenerator, _UIButtonFeedbackGenerator, NSMutableSet;

@interface CAMFeedbackController : NSObject {

	UISelectionFeedbackGenerator* __modeSelectionFeedbackGenerator;
	UISelectionFeedbackGenerator* __burstCountFeedbackGenerator;
	_UIButtonFeedbackGenerator* __shutterButtonLatchingOnFeedbackGenerator;
	_UIButtonFeedbackGenerator* __shutterButtonLatchingOffFeedbackGenerator;
	_UIButtonFeedbackGenerator* __shutterButtonMomentaryFeedbackGenerator;
	NSMutableSet* __activePairedFeedbackGenerators;

}

@property (nonatomic,readonly) UISelectionFeedbackGenerator * _modeSelectionFeedbackGenerator;                       //@synthesize _modeSelectionFeedbackGenerator=__modeSelectionFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) UISelectionFeedbackGenerator * _burstCountFeedbackGenerator;                          //@synthesize _burstCountFeedbackGenerator=__burstCountFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) _UIButtonFeedbackGenerator * _shutterButtonLatchingOnFeedbackGenerator;               //@synthesize _shutterButtonLatchingOnFeedbackGenerator=__shutterButtonLatchingOnFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) _UIButtonFeedbackGenerator * _shutterButtonLatchingOffFeedbackGenerator;              //@synthesize _shutterButtonLatchingOffFeedbackGenerator=__shutterButtonLatchingOffFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) _UIButtonFeedbackGenerator * _shutterButtonMomentaryFeedbackGenerator;                //@synthesize _shutterButtonMomentaryFeedbackGenerator=__shutterButtonMomentaryFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _activePairedFeedbackGenerators;                                       //@synthesize _activePairedFeedbackGenerators=__activePairedFeedbackGenerators - In the implementation block
-(id)init;
-(id)_feedbackGeneratorForDiscreteFeedback:(unsigned long long)arg1 ;
-(id)_feedbackGeneratorForPairedFeedback:(unsigned long long)arg1 ;
-(NSMutableSet *)_activePairedFeedbackGenerators;
-(id)_debugStringForPairedFeedback:(unsigned long long)arg1 ;
-(UISelectionFeedbackGenerator *)_modeSelectionFeedbackGenerator;
-(UISelectionFeedbackGenerator *)_burstCountFeedbackGenerator;
-(_UIButtonFeedbackGenerator *)_shutterButtonMomentaryFeedbackGenerator;
-(_UIButtonFeedbackGenerator *)_shutterButtonLatchingOnFeedbackGenerator;
-(_UIButtonFeedbackGenerator *)_shutterButtonLatchingOffFeedbackGenerator;
-(void)prepareDiscreteFeedback:(unsigned long long)arg1 ;
-(void)performDiscreteFeedback:(unsigned long long)arg1 ;
-(void)prepareButtonFeedback:(unsigned long long)arg1 ;
-(void)performPressButtonFeedback:(unsigned long long)arg1 ;
-(void)performReleaseButtonFeedback:(unsigned long long)arg1 ;
@end

