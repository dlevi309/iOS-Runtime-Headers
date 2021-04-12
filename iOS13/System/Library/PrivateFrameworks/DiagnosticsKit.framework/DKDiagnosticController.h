/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <libobjc.A.dylib/DKDiagnostic_Internal.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/DKDiagnostic.h>

@class DKMutableDiagnosticResult, DKDiagnosticContext, NSLock, NSString;

@interface DKDiagnosticController : NSObject <DKDiagnostic_Internal, NSExtensionRequestHandling, DKDiagnostic> {

	BOOL _finished;
	BOOL _cancelled;
	BOOL _setup;
	DKMutableDiagnosticResult* _result;
	DKDiagnosticContext* _context;
	NSLock* _finishedLock;

}

@property (nonatomic,retain) DKDiagnosticContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLock * finishedLock;                            //@synthesize finishedLock=_finishedLock - In the implementation block
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
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)start;
-(BOOL)isCancelled;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(DKMutableDiagnosticResult *)result;
-(DKDiagnosticContext *)context;
-(void)setResult:(DKMutableDiagnosticResult *)arg1 ;
-(void)setContext:(DKDiagnosticContext *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isSetup;
-(void)setSetup:(BOOL)arg1 ;
-(NSLock *)finishedLock;
-(void)setFinishedLock:(NSLock *)arg1 ;
@end

