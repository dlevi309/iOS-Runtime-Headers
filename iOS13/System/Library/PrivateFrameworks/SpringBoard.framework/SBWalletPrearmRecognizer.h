/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBWalletPrearmRecognizerDelegate;
@class BSTimer;

@interface SBWalletPrearmRecognizer : NSObject {

	id<SBWalletPrearmRecognizerDelegate> _delegate;
	double _timeout;
	BSTimer* _timer;
	BOOL _invalidated;

}
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(double)_computeDoubleTapTimeout;
-(void)_invalidateForFailureReason:(unsigned long long)arg1 ;
-(void)_invalidateForSuccess;
-(void)startRecognizing;
-(void)menuButtonSinglePress;
-(void)menuButtonDoublePress;
@end

