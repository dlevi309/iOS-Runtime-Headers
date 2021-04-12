/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@protocol DKDiagnostic_Internal <DKDiagnostic>
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled; 
@property (assign,getter=isSetup,nonatomic) BOOL setup; 
@required
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1;
-(BOOL)isSetup;
-(void)setSetup:(BOOL)arg1;

@end

