/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBTapToWakeDelegate;
@class SBFTapToWakeGestureRecognizer, SBIdleTimerDefaults, NSString;

@interface SBTapToWakeController : NSObject <UIGestureRecognizerDelegate> {

	BOOL _screenOff;
	BOOL _shouldTapToWake;
	id<SBTapToWakeDelegate> _delegate;
	SBFTapToWakeGestureRecognizer* _tapToWakeGestureRecognizer;
	SBFTapToWakeGestureRecognizer* _pencilToWakeGestureRecognizer;
	SBIdleTimerDefaults* _idleTimerDefaults;

}

@property (nonatomic,retain) SBFTapToWakeGestureRecognizer * tapToWakeGestureRecognizer;                 //@synthesize tapToWakeGestureRecognizer=_tapToWakeGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFTapToWakeGestureRecognizer * pencilToWakeGestureRecognizer;              //@synthesize pencilToWakeGestureRecognizer=_pencilToWakeGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIdleTimerDefaults * idleTimerDefaults;                                    //@synthesize idleTimerDefaults=_idleTimerDefaults - In the implementation block
@property (assign,nonatomic,__weak) id<SBTapToWakeDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isScreenOff,nonatomic) BOOL screenOff;                                          //@synthesize screenOff=_screenOff - In the implementation block
@property (nonatomic,readonly) BOOL shouldTapToWake;                                                     //@synthesize shouldTapToWake=_shouldTapToWake - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isTapToWakeSupported;
-(id)init;
-(id<SBTapToWakeDelegate>)delegate;
-(void)setDelegate:(id<SBTapToWakeDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(SBIdleTimerDefaults *)idleTimerDefaults;
-(void)setScreenOff:(BOOL)arg1 ;
-(BOOL)shouldTapToWake;
-(void)tapToWakeDidRecognize:(id)arg1 ;
-(void)pencilToWakeDidRecognize:(id)arg1 ;
-(void)_evaluateEnablement;
-(BOOL)isScreenOff;
-(SBFTapToWakeGestureRecognizer *)tapToWakeGestureRecognizer;
-(void)setTapToWakeGestureRecognizer:(SBFTapToWakeGestureRecognizer *)arg1 ;
-(SBFTapToWakeGestureRecognizer *)pencilToWakeGestureRecognizer;
-(void)setPencilToWakeGestureRecognizer:(SBFTapToWakeGestureRecognizer *)arg1 ;
-(void)setIdleTimerDefaults:(SBIdleTimerDefaults *)arg1 ;
@end

