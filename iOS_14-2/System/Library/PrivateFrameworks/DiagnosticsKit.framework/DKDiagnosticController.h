/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _isXPC;
	DKMutableDiagnosticResult* _result;
	DKDiagnosticContext* _context;
	NSLock* _finishedLock;

}

@property (assign,nonatomic) BOOL isXPC;                                      //@synthesize isXPC=_isXPC - In the implementation block
@property (nonatomic,retain) DKDiagnosticContext * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLock * finishedLock;                           //@synthesize finishedLock=_finishedLock - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;               //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isSetup,nonatomic) BOOL setup;                       //@synthesize setup=_setup - In the implementation block
@property (nonatomic,retain) DKMutableDiagnosticResult * result;              //@synthesize result=_result - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                 //@synthesize finished=_finished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResult:(DKMutableDiagnosticResult *)arg1 ;
-(BOOL)isXPC;
-(void)setCancelled:(BOOL)arg1 ;
-(id)init;
-(void)start;
-(BOOL)isSetup;
-(DKDiagnosticContext *)context;
-(BOOL)isFinished;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)setSetup:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(DKMutableDiagnosticResult *)result;
-(void)setIsXPC:(BOOL)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setContext:(DKDiagnosticContext *)arg1 ;
-(NSLock *)finishedLock;
-(void)setFinishedLock:(NSLock *)arg1 ;
-(void)beginRequestWithDiagnosticContext:(id)arg1 ;
@end

