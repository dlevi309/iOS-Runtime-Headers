/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableArray;

@interface SBBrightnessController : NSObject {

	BOOL _debounce;
	BKSDisplayBrightnessTransactionRef _brightnessDownTransaction;
	BKSDisplayBrightnessTransactionRef _brightnessUpTransaction;
	NSMutableArray* _maximumBrightnessAssertions;

}
+(id)sharedBrightnessController;
-(void)setBrightnessLevel:(float)arg1 ;
-(void)handleBrightnessEvent:(IOHIDEventRef)arg1 ;
-(void)cancelBrightnessEvent;
-(float)_calcButtonRepeatDelay;
-(void)_increaseBrightnessAndRepeat;
-(void)_decreaseBrightnessAndRepeat;
-(void)_exitMaximumBrightnessMode;
-(void)_enterMaximumBrightnessMode;
-(void)_setBrightnessLevel:(float)arg1 showHUD:(BOOL)arg2 ;
-(void)_adjustBacklightLevel:(BOOL)arg1 ;
-(id)acquireMaximumBrightnessAssertionForReason:(id)arg1 ;
@end

