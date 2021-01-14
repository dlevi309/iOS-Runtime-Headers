/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) id<SBHomeButtonSuppressAfterUnlockRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(id)init;
-(id<SBHomeButtonSuppressAfterUnlockRecognizerDelegate>)delegate;
-(void)_requestEndOfSuppression;
-(void)setDelegate:(id<SBHomeButtonSuppressAfterUnlockRecognizerDelegate>)arg1 ;
-(void)_timerFired;
-(void)_startTimer;
-(void)_invalidateTimer;
-(void)dealloc;
@end

