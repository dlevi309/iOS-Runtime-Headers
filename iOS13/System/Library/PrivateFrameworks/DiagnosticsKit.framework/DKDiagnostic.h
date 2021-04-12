/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

@class DKMutableDiagnosticResult;


@protocol DKDiagnostic <NSObject>
@property (nonatomic,retain) DKMutableDiagnosticResult * result; 
@property (assign,getter=isFinished,nonatomic) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@optional
-(void)cancel;
-(void)teardown;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2;

@required
-(void)start;
-(BOOL)isCancelled;
-(void)setFinished:(BOOL)arg1;
-(BOOL)isFinished;
-(DKMutableDiagnosticResult *)result;
-(void)setResult:(id)arg1;

@end

