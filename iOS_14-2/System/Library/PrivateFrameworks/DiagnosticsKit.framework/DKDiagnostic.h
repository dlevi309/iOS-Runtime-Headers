/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

@class DKMutableDiagnosticResult;


@protocol DKDiagnostic <NSObject>
@property (nonatomic,retain) DKMutableDiagnosticResult * result; 
@property (assign,getter=isFinished,nonatomic) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@optional
-(void)teardown;
-(void)cancel;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2;

@required
-(void)setResult:(id)arg1;
-(void)start;
-(BOOL)isFinished;
-(void)setFinished:(BOOL)arg1;
-(DKMutableDiagnosticResult *)result;
-(BOOL)isCancelled;

@end

