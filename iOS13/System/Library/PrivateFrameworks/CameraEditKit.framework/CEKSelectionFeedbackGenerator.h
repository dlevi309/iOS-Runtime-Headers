/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/


@class UISelectionFeedbackGenerator;

@interface CEKSelectionFeedbackGenerator : NSObject {

	unsigned __endStopSoundID;
	unsigned __majorTickSoundID;
	unsigned __minorTickSoundID;
	unsigned __overscrollTickSoundID;
	UISelectionFeedbackGenerator* __feedbackGenerator;

}

@property (nonatomic,readonly) UISelectionFeedbackGenerator * _feedbackGenerator;              //@synthesize _feedbackGenerator=__feedbackGenerator - In the implementation block
@property (nonatomic,readonly) unsigned _endStopSoundID;                                       //@synthesize _endStopSoundID=__endStopSoundID - In the implementation block
@property (nonatomic,readonly) unsigned _majorTickSoundID;                                     //@synthesize _majorTickSoundID=__majorTickSoundID - In the implementation block
@property (nonatomic,readonly) unsigned _minorTickSoundID;                                     //@synthesize _minorTickSoundID=__minorTickSoundID - In the implementation block
@property (nonatomic,readonly) unsigned _overscrollTickSoundID;                                //@synthesize _overscrollTickSoundID=__overscrollTickSoundID - In the implementation block
-(id)init;
-(void)dealloc;
-(UISelectionFeedbackGenerator *)_feedbackGenerator;
-(unsigned)_minorTickSoundID;
-(unsigned)_majorTickSoundID;
-(unsigned)_endStopSoundID;
-(unsigned)_overscrollTickSoundID;
-(void)prepareFeedback;
-(void)performFeedback;
-(void)playMinorTickSound;
-(void)playMajorTickSound;
-(void)playEndTickSound;
-(void)playOverscrollTickSound;
@end

