/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSUUID, NSString, NSObject, NSMutableArray;

@interface TestProbe : NSObject {

	BOOL _running;
	unsigned _status;
	NSUUID* _uuid;
	NSString* _diagSessionUUID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _periodicTimer;
	NSMutableArray* _probeOutputFilePaths;

}

@property (nonatomic,retain) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * diagSessionUUID;                               //@synthesize diagSessionUUID=_diagSessionUUID - In the implementation block
@property (assign,nonatomic) unsigned status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                            //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> periodicTimer;              //@synthesize periodicTimer=_periodicTimer - In the implementation block
@property (nonatomic,readonly) NSMutableArray * probeOutputFilePaths;                  //@synthesize probeOutputFilePaths=_probeOutputFilePaths - In the implementation block
+(id)testProbeStatusString:(unsigned)arg1 ;
+(void)autoBugCapturePath:(id*)arg1 autoBugCaptureUID:(id*)arg2 autoBugCaptureGID:(id*)arg3 ;
+(void*)loadCoreUtils;
-(BOOL)isEqual:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(NSUUID *)uuid;
-(unsigned)status;
-(BOOL)isRunning;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)stopTest;
-(void)removeProbeOutputFiles;
-(NSMutableArray *)probeOutputFilePaths;
-(void)cancelTest:(/*^block*/id)arg1 ;
-(BOOL)startPeriodicTimerAt:(unsigned long long)arg1 repeatInterval:(unsigned long long)arg2 ;
-(void)stopPeriodicTimer;
-(void)periodicTimerFired:(id)arg1 ;
-(void)setDiagSessionUUID:(NSString *)arg1 ;
-(NSString *)diagSessionUUID;
-(void)setPeriodicTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)periodicTimer;
-(BOOL)startPeriodicTimer;
@end

