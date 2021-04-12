/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@class NSMutableArray;

@interface GetNetworkInfoProbe : NetDiagnosticProbe {

	NSMutableArray* _probeOutputFilePaths;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)stopTest;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)dealloc;
-(BOOL)startNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(id)probeOutputFilePaths;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
@end

