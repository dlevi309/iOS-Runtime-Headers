/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/


@protocol PushButtonDelegate;
@class SBSBiometricsService;

@interface PushButtonMonitor : NSObject {

	unsigned long long _lastTap;
	unsigned long long _lastDoubleTap;
	/*^block*/id _axDoubleTapExpirationBlock;
	SBSBiometricsService* _sbBiometricsService;
	BOOL _doubleTapDetected;
	BOOL _axDoubleTapDetected;
	id<PushButtonDelegate> _delegate;

}

@property (assign,nonatomic) BOOL doubleTapDetected;                              //@synthesize doubleTapDetected=_doubleTapDetected - In the implementation block
@property (assign,nonatomic) BOOL axDoubleTapDetected;                            //@synthesize axDoubleTapDetected=_axDoubleTapDetected - In the implementation block
@property (assign,nonatomic,__weak) id<PushButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<PushButtonDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<PushButtonDelegate>)arg1 ;
-(void)dealloc;
-(void)_consumeDoubleTapWithReason:(id)arg1 includingAX:(BOOL)arg2 ;
-(double)_defaultExpirationTimeout;
-(void)_expireDoubleTap:(unsigned long long)arg1 delegate:(id)arg2 ;
-(BOOL)doubleTapDetected;
-(void)_consumeDoubleTap;
-(void)setAxDoubleTapDetected:(BOOL)arg1 ;
-(BOOL)_startWithError:(id*)arg1 ;
-(void)_restartWithReactivationDelay:(double)arg1 ;
-(id)prearmAssertion;
-(void)consumeDoubleTapWithReason:(id)arg1 ;
-(void)doubleTappedAt:(id)arg1 ;
-(void)axApplePayConfirmation;
-(void)setDoubleTapDetected:(BOOL)arg1 ;
-(BOOL)axDoubleTapDetected;
@end

