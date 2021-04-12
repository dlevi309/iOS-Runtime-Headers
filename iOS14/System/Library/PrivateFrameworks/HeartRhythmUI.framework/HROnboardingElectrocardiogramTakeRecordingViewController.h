/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HKHeartRhythmAvailabilityObserver.h>

@class HKHeartRhythmAvailability, HKAnchoredObjectQuery, HKElectrocardiogram, UIView, UILabel, HRImageLabel;

@interface HROnboardingElectrocardiogramTakeRecordingViewController : HROnboardingBaseViewController <HKHeartRhythmAvailabilityObserver> {

	BOOL _electrocardiogramFirstRecordingCompleted;
	BOOL _didStepForward;
	HKHeartRhythmAvailability* _availability;
	HKAnchoredObjectQuery* _electrocardiogramQuery;
	HKElectrocardiogram* _electrocardiogram;
	UIView* _assetView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	HRImageLabel* _recordingStep1ImageLabel;
	HRImageLabel* _recordingStep2ImageLabel;
	UILabel* _wristSettingsLabel;

}

@property (nonatomic,retain) HKHeartRhythmAvailability * availability;                    //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) HKAnchoredObjectQuery * electrocardiogramQuery;              //@synthesize electrocardiogramQuery=_electrocardiogramQuery - In the implementation block
@property (nonatomic,retain) HKElectrocardiogram * electrocardiogram;                     //@synthesize electrocardiogram=_electrocardiogram - In the implementation block
@property (assign,nonatomic) BOOL electrocardiogramFirstRecordingCompleted;               //@synthesize electrocardiogramFirstRecordingCompleted=_electrocardiogramFirstRecordingCompleted - In the implementation block
@property (assign,nonatomic) BOOL didStepForward;                                         //@synthesize didStepForward=_didStepForward - In the implementation block
@property (nonatomic,retain) UIView * assetView;                                          //@synthesize assetView=_assetView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                         //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) HRImageLabel * recordingStep1ImageLabel;                     //@synthesize recordingStep1ImageLabel=_recordingStep1ImageLabel - In the implementation block
@property (nonatomic,retain) HRImageLabel * recordingStep2ImageLabel;                     //@synthesize recordingStep2ImageLabel=_recordingStep2ImageLabel - In the implementation block
@property (nonatomic,retain) UILabel * wristSettingsLabel;                                //@synthesize wristSettingsLabel=_wristSettingsLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)heartRhythmAvailabilityDidUpdate;
-(void)setElectrocardiogramFirstRecordingCompleted:(BOOL)arg1 ;
-(id)_titleFont;
-(HKHeartRhythmAvailability *)availability;
-(void)viewDidLoad;
-(UIView *)assetView;
-(void)setAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setAssetView:(UIView *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setUpConstraints;
-(id)_titleFontTextStyle;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_bodyFont;
-(void)setUpUI;
-(id)_bodyFontTextStyle;
-(id)initForOnboarding:(BOOL)arg1 upgradingFromAlgorithmVersion:(long long)arg2 ;
-(void)skipButtonTapped:(id)arg1 ;
-(void)_setUpElectrocardiogramQuery;
-(void)_stopElectrocardiogramQuery;
-(id)_titleForOnboarding:(BOOL)arg1 ;
-(CGSize)_takeRecordingImageDimension;
-(void)setRecordingStep1ImageLabel:(HRImageLabel *)arg1 ;
-(HRImageLabel *)recordingStep1ImageLabel;
-(void)setRecordingStep2ImageLabel:(HRImageLabel *)arg1 ;
-(HRImageLabel *)recordingStep2ImageLabel;
-(void)setWristSettingsLabel:(UILabel *)arg1 ;
-(UILabel *)wristSettingsLabel;
-(void)_stepForwardWithElectrocardiogramRecorded:(BOOL)arg1 ;
-(BOOL)electrocardiogramFirstRecordingCompleted;
-(BOOL)didStepForward;
-(void)setDidStepForward:(BOOL)arg1 ;
-(void)setElectrocardiogramQuery:(HKAnchoredObjectQuery *)arg1 ;
-(HKAnchoredObjectQuery *)electrocardiogramQuery;
-(id)_recordingStepFont;
-(HKElectrocardiogram *)electrocardiogram;
-(void)setElectrocardiogram:(HKElectrocardiogram *)arg1 ;
@end

