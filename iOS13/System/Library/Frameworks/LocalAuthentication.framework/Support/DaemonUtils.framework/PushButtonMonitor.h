/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/


@protocol PushButtonDelegate;
@class SBSBiometricsService;

@interface PushButtonMonitor : NSObject {

	unsigned long long _lastTap;
	unsigned long long _lastDoubleTap;
	SBSBiometricsService* _sbBiometricsService;
	BOOL _doubleTapDetected;
	id<PushButtonDelegate> _delegate;

}

@property (assign,nonatomic) BOOL doubleTapDetected;                              //@synthesize doubleTapDetected=_doubleTapDetected - In the implementation block
@property (assign,nonatomic,__weak) id<PushButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<PushButtonDelegate>)delegate;
-(void)setDelegate:(id<PushButtonDelegate>)arg1 ;
-(void)consumeDoubleTapWithReason:(id)arg1 ;
-(BOOL)doubleTapDetected;
-(void)consumeDoubleTapAfter:(long long)arg1 ;
-(id)prearmAssertion;
-(void)doubleTappedAt:(id)arg1 ;
-(void)setDoubleTapDetected:(BOOL)arg1 ;
@end

