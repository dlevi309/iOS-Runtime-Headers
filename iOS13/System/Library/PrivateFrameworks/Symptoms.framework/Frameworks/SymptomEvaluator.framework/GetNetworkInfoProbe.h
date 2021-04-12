/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@class NSMutableArray;

@interface GetNetworkInfoProbe : NetDiagnosticProbe {

	NSMutableArray* _probeOutputFilePaths;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)stopTest;
-(BOOL)startNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(id)probeOutputFilePaths;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
@end

