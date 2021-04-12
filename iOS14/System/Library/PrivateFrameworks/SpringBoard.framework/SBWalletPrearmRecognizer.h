/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(double)_computeDoubleTapTimeout;
-(void)_invalidateForFailureReason:(unsigned long long)arg1 ;
-(void)_invalidateForSuccess;
-(void)startRecognizing;
-(void)menuButtonSinglePress;
-(void)menuButtonDoublePress;
@end

