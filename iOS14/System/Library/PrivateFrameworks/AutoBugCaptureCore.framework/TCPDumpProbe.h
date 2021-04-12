/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
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
-(void)stopTest;
-(void)setDuration:(double)arg1 ;
-(NSString *)destinationPath;
-(void)setDestinationPath:(NSString *)arg1 ;
-(double)duration;
-(BOOL)startNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(BOOL)stopNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(void)setTcpDumpTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)tcpDumpTimer;
-(void)startTCPDumpWithDuration:(double)arg1 destinationPath:(id)arg2 tcpDumpStarted:(/*^block*/id)arg3 tcpDumpCompleted:(/*^block*/id)arg4 ;
-(id)probeOutputFilePaths;
-(id)tcpDumpCompletedBlock;
-(void)setTcpDumpCompletedBlock:(id)arg1 ;
@end

