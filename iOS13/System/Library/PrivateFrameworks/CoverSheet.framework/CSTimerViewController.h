/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id<CSTimerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CSTimerViewControllerDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)setEndDate:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)_updateTimerFired;
-(id)timerView;
-(BOOL)isEndDateValid;
-(void)_nextTimerChanged:(id)arg1 ;
-(void)_updateNextTimer;
-(void)_stopTimerNotifyingDelegate:(BOOL)arg1 ;
-(void)_updateTimerLabelView;
-(BOOL)isTimerActive;
@end

