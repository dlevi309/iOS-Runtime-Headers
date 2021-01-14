/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>
#import <libobjc.A.dylib/DKDiagnostic_Internal.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/DKDiagnostic.h>

@class DKMutableDiagnosticResult, CXCallObserver, DKDiagnosticContext, NSLock, _UILegibilityLabel, CAGradientLayer, NSString;

@interface DKDiagnosticViewController : UIViewController <CXCallObserverDelegate, DKDiagnostic_Internal, CAAnimationDelegate, NSExtensionRequestHandling, DKDiagnostic> {

	BOOL _finished;
	BOOL _cancelled;
	BOOL _setup;
	BOOL _shouldShowPressHomeLabel;
	DKMutableDiagnosticResult* _result;
	CXCallObserver* _callObserver;
	DKDiagnosticContext* _context;
	NSLock* _finishedLock;
	_UILegibilityLabel* _pressHomeLabel;
	CAGradientLayer* _gradientLayer;

}

@property (nonatomic,retain) CXCallObserver * callObserver;                    //@synthesize callObserver=_callObserver - In the implementation block
@property (nonatomic,retain) DKDiagnosticContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLock * finishedLock;                            //@synthesize finishedLock=_finishedLock - In the implementation block
@property (nonatomic,retain) _UILegibilityLabel * pressHomeLabel;              //@synthesize pressHomeLabel=_pressHomeLabel - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;                  //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPressHomeLabel;                    //@synthesize shouldShowPressHomeLabel=_shouldShowPressHomeLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isSetup,nonatomic) BOOL setup;                        //@synthesize setup=_setup - In the implementation block
@property (nonatomic,retain) DKMutableDiagnosticResult * result;               //@synthesize result=_result - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                  //@synthesize finished=_finished - In the implementation block
-(void)setResult:(DKMutableDiagnosticResult *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)init;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(void)start;
-(BOOL)isSetup;
-(DKDiagnosticContext *)context;
-(BOOL)isFinished;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)setSetup:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)viewDidLoad;
-(CXCallObserver *)callObserver;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(DKMutableDiagnosticResult *)result;
-(void)cancel;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(BOOL)isCancelled;
-(void)setContext:(DKDiagnosticContext *)arg1 ;
-(NSLock *)finishedLock;
-(BOOL)shouldShowPressHomeLabel;
-(void)setShouldShowPressHomeLabel:(BOOL)arg1 ;
-(void)setFinishedLock:(NSLock *)arg1 ;
-(void)displayPressHomeLabel;
-(void)monitorIncomingCall;
-(void)setPressHomeLabel:(_UILegibilityLabel *)arg1 ;
-(_UILegibilityLabel *)pressHomeLabel;
-(void)createGradientLayer;
-(void)resetGradientAndLabelBefore:(BOOL)arg1 ;
@end

