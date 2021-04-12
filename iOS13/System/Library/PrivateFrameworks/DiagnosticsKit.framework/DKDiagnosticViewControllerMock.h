/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/DKDiagnostic_Internal.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/DKDiagnosticMock.h>

@class DKMutableDiagnosticResult, DKDiagnosticContextMock, NSLock, NSString;

@interface DKDiagnosticViewControllerMock : UIViewController <DKDiagnostic_Internal, CAAnimationDelegate, DKDiagnosticMock> {

	BOOL _finished;
	BOOL _cancelled;
	BOOL _setup;
	BOOL _shouldShowPressHomeLabel;
	DKMutableDiagnosticResult* _result;
	DKDiagnosticContextMock* _context;
	NSLock* _finishedLock;
	/*^block*/id _completion;
	Class _inputsClass;

}

@property (nonatomic,retain) DKDiagnosticContextMock * context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLock * finishedLock;                            //@synthesize finishedLock=_finishedLock - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) Class inputsClass;                                //@synthesize inputsClass=_inputsClass - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPressHomeLabel;                    //@synthesize shouldShowPressHomeLabel=_shouldShowPressHomeLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) DKMutableDiagnosticResult * result;               //@synthesize result=_result - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                  //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (assign,getter=isSetup,nonatomic) BOOL setup;                        //@synthesize setup=_setup - In the implementation block
-(id)init;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(DKMutableDiagnosticResult *)result;
-(DKDiagnosticContextMock *)context;
-(void)setResult:(DKMutableDiagnosticResult *)arg1 ;
-(void)setContext:(DKDiagnosticContextMock *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isSetup;
-(void)setSetup:(BOOL)arg1 ;
-(void)setInputsClass:(Class)arg1 ;
-(NSLock *)finishedLock;
-(void)beginRequestWithInputsClass:(Class)arg1 predicates:(id)arg2 specifications:(id)arg3 parameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)shouldShowPressHomeLabel;
-(void)setShouldShowPressHomeLabel:(BOOL)arg1 ;
-(void)setFinishedLock:(NSLock *)arg1 ;
-(Class)inputsClass;
@end

