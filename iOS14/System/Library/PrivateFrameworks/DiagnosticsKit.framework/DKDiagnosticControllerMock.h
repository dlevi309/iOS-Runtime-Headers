/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <libobjc.A.dylib/DKDiagnostic_Internal.h>
#import <libobjc.A.dylib/DKDiagnosticMock.h>

@class DKMutableDiagnosticResult, DKDiagnosticContextMock, NSLock, NSString;

@interface DKDiagnosticControllerMock : NSObject <DKDiagnostic_Internal, DKDiagnosticMock> {

	BOOL _finished;
	BOOL _cancelled;
	BOOL _setup;
	DKMutableDiagnosticResult* _result;
	DKDiagnosticContextMock* _context;
	NSLock* _finishedLock;
	/*^block*/id _completion;
	Class _inputsClass;

}

@property (nonatomic,retain) DKDiagnosticContextMock * context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLock * finishedLock;                           //@synthesize finishedLock=_finishedLock - In the implementation block
@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) Class inputsClass;                               //@synthesize inputsClass=_inputsClass - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;               //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isSetup,nonatomic) BOOL setup;                       //@synthesize setup=_setup - In the implementation block
@property (nonatomic,retain) DKMutableDiagnosticResult * result;              //@synthesize result=_result - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                 //@synthesize finished=_finished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResult:(DKMutableDiagnosticResult *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(id)init;
-(void)start;
-(BOOL)isSetup;
-(id)completion;
-(DKDiagnosticContextMock *)context;
-(BOOL)isFinished;
-(void)setSetup:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(DKMutableDiagnosticResult *)result;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setContext:(DKDiagnosticContextMock *)arg1 ;
-(void)setInputsClass:(Class)arg1 ;
-(NSLock *)finishedLock;
-(void)beginRequestWithInputsClass:(Class)arg1 predicates:(id)arg2 specifications:(id)arg3 parameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setFinishedLock:(NSLock *)arg1 ;
-(Class)inputsClass;
@end

