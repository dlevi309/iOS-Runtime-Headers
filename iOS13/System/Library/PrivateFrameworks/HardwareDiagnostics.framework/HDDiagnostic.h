/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/


@protocol HDDiagnostic <NSObject>
@required
-(id)diagnosticDescription;
-(id)experiment;
-(id)analysis;
-(id)runWithParameters:(id)arg1 host:(id)arg2 error:(id*)arg3;

@end

