/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PUCropVideoScrubberViewDelegate;
@class AVTimeFormatter, NSLayoutConstraint, UISlider, UILabel, NSObject;

@interface PUCropVideoScrubberView : UIView {

	SCD_Struct_PH4 _startingTime;
	SCD_Struct_PH4 _endingTime;
	SCD_Struct_PH4 _currentTime;
	AVTimeFormatter* _beforeTimeFormatter;
	AVTimeFormatter* _afterTimeFormatter;
	BOOL _beforeTimeLabelOffset;
	BOOL _afterTimeLabelOffset;
	NSLayoutConstraint* _beforeLabelVerticalConstraint;
	NSLayoutConstraint* _afterLabelVerticalConstraint;
	UISlider* _scrubberSlider;
	UILabel* _beforeTimeLabel;
	UILabel* _afterTimeLabel;
	NSObject*<PUCropVideoScrubberViewDelegate> _delegate;

}

@property (nonatomic,retain) UISlider * scrubberSlider;                                               //@synthesize scrubberSlider=_scrubberSlider - In the implementation block
@property (nonatomic,retain) UILabel * beforeTimeLabel;                                               //@synthesize beforeTimeLabel=_beforeTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * afterTimeLabel;                                                //@synthesize afterTimeLabel=_afterTimeLabel - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<PUCropVideoScrubberViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<PUCropVideoScrubberViewDelegate>)delegate;
-(void)setCurrentTime:(SCD_Struct_PH4)arg1 ;
-(id)initWithStartingTime:(SCD_Struct_PH4)arg1 endingTime:(SCD_Struct_PH4)arg2 currentTime:(SCD_Struct_PH4)arg3 ;
-(void)videoScrubberDoneChanging;
-(void)timesChanged:(SCD_Struct_PH4)arg1 endingTime:(SCD_Struct_PH4)arg2 currentTime:(SCD_Struct_PH4)arg3 ;
-(void)updateSliderPosition;
-(void)videoScrubberValueChanged:(id)arg1 ;
-(void)offsetTimeLabelsIfNecessary;
-(UISlider *)scrubberSlider;
-(void)setScrubberSlider:(UISlider *)arg1 ;
-(UILabel *)beforeTimeLabel;
-(void)setBeforeTimeLabel:(UILabel *)arg1 ;
-(UILabel *)afterTimeLabel;
-(void)setAfterTimeLabel:(UILabel *)arg1 ;
-(void)setDelegate:(NSObject*<PUCropVideoScrubberViewDelegate>)arg1 ;
-(void)layoutSubviews;
@end

