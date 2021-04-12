/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/SBHomeButtonSuppressAfterUnlockRecognizer.h>

@protocol SBHomeButtonSuppressAfterUnlockRecognizerDelegate;
@class BSTimer, NSString;

@interface CSHomeButtonSuppressAfterUnlockRecognizer : NSObject <SBHomeButtonSuppressAfterUnlockRecognizer> {

	id<SBHomeButtonSuppressAfterUnlockRecognizerDelegate> _delegate;
	BSTimer* _timer;
	BOOL _done;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBHomeButtonSuppressAfterUnlockRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<SBHomeButtonSuppressAfterUnlockRecognizerDelegate>)delegate;
-(void)setDelegate:(id<SBHomeButtonSuppressAfterUnlockRecognizerDelegate>)arg1 ;
-(void)_invalidateTimer;
-(void)_startTimer;
-(void)_timerFired;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(void)_requestEndOfSuppression;
@end

