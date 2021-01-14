/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@protocol CSTimerViewControllerDelegate;
@class NSTimer, NSDate, MTTimerManager;

@interface CSTimerViewController : CSCoverSheetViewControllerBase {

	BOOL _enabled;
	NSTimer* _updateTimer;
	NSDate* _endDate;
	MTTimerManager* _timerManager;
	id<CSTimerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSTimerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
-(id<CSTimerViewControllerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEndDateValid;
-(void)setEndDate:(id)arg1 ;
-(void)_updateNextTimer;
-(id)timerView;
-(void)setDelegate:(id<CSTimerViewControllerDelegate>)arg1 ;
-(void)_stopTimerNotifyingDelegate:(BOOL)arg1 ;
-(void)_nextTimerChanged:(id)arg1 ;
-(void)_stopTimer;
-(void)_startTimer;
-(void)_updateTimerFired;
-(BOOL)isEnabled;
-(void)loadView;
-(BOOL)isTimerActive;
-(void)_updateTimerLabelView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

