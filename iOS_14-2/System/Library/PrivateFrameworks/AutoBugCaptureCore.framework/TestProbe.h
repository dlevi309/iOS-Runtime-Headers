/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
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
-(id)initWithQueue:(id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)stopTest;
-(NSUUID *)uuid;
-(BOOL)isRunning;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setStatus:(unsigned)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)status;
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

