/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@protocol OS_dispatch_source;
@class NSMutableArray, NSObject, NSString;

@interface TCPDumpProbe : NetDiagnosticProbe {

	NSMutableArray* _probeOutputFilePaths;
	NSObject*<OS_dispatch_source> _tcpDumpTimer;
	/*^block*/id _tcpDumpCompletedBlock;
	double _duration;
	NSString* _destinationPath;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> tcpDumpTimer;              //@synthesize tcpDumpTimer=_tcpDumpTimer - In the implementation block
@property (assign,nonatomic) id tcpDumpCompletedBlock;                                //@synthesize tcpDumpCompletedBlock=_tcpDumpCompletedBlock - In the implementation block
@property (assign) double duration;                                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;                              //@synthesize destinationPath=_destinationPath - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSString *)destinationPath;
-(void)setDestinationPath:(NSString *)arg1 ;
-(void)stopTest;
-(BOOL)startNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(BOOL)stopNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(void)setTcpDumpTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)tcpDumpTimer;
-(void)startTCPDumpWithDuration:(double)arg1 destinationPath:(id)arg2 tcpDumpStarted:(/*^block*/id)arg3 tcpDumpCompleted:(/*^block*/id)arg4 ;
-(id)probeOutputFilePaths;
-(id)tcpDumpCompletedBlock;
-(void)setTcpDumpCompletedBlock:(id)arg1 ;
@end

