/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDateComponentsFormatter, UILabel, UIView, NSTimer, NSDate;

@interface CKRecordingElapsedTimeView : UIView {

	NSDateComponentsFormatter* __durationFormatter;
	UILabel* __timeLabel;
	UIView* __recordingDotView;
	NSTimer* __updateTimer;
	NSDate* __startTime;

}

@property (nonatomic,readonly) NSDateComponentsFormatter * _durationFormatter;              //@synthesize _durationFormatter=__durationFormatter - In the implementation block
@property (nonatomic,readonly) UILabel * _timeLabel;                                        //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,readonly) UIView * _recordingDotView;                                  //@synthesize _recordingDotView=__recordingDotView - In the implementation block
@property (nonatomic,readonly) NSTimer * _updateTimer;                                      //@synthesize _updateTimer=__updateTimer - In the implementation block
@property (nonatomic,readonly) NSDate * _startTime;                                         //@synthesize _startTime=__startTime - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_update:(id)arg1 ;
-(NSDate *)_startTime;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)startTimer;
-(void)resetTimer;
-(NSTimer *)_updateTimer;
-(UILabel *)_timeLabel;
-(void)_commonCAMElapsedTimeViewInitialization;
-(void)_beginRecordingAnimation;
-(void)_endRecordingAnimation;
-(void)endTimer;
-(NSDateComponentsFormatter *)_durationFormatter;
-(UIView *)_recordingDotView;
@end

