/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/

#import <OSAnalytics/OSAReport.h>
#import <OSAnalytics/OSAConcreteReport.h>

@class NSString, NSDictionary, NSArray, NSMutableArray, NSMutableDictionary;

@interface OSAStackShotReport : OSAReport <OSAConcreteReport> {

	int _pid;
	NSString* _appName;
	NSString* _reason;
	long long* _exceptionCodes;
	unsigned _exceptionCodeCount;
	NSDictionary* _additionalPayload;
	int _thermalNotificationCurrentLevel;
	NSArray* _thermalSensorValues;
	NSMutableArray* _frontmostPids;
	NSMutableDictionary* _extras;
	void* _stackshot_config;
	const void* _ss_trace_buffer;
	unsigned _ss_trace_length;
	BOOL _includeSyslog;
	BOOL _dead_snapshot;
	int _jetsamLevel;
	unsigned _flags;
	unsigned _ss_sequence;
	unsigned long long _capture_absoluteTime;

}

@property (assign,nonatomic) BOOL includeSyslog;                                     //@synthesize includeSyslog=_includeSyslog - In the implementation block
@property (nonatomic,readonly) NSArray * frontmostPids;                              //@synthesize frontmostPids=_frontmostPids - In the implementation block
@property (nonatomic,readonly) unsigned long long capture_absoluteTime;              //@synthesize capture_absoluteTime=_capture_absoluteTime - In the implementation block
@property (nonatomic,readonly) const void* ss_trace_buffer;                          //@synthesize ss_trace_buffer=_ss_trace_buffer - In the implementation block
@property (nonatomic,readonly) unsigned ss_trace_length;                             //@synthesize ss_trace_length=_ss_trace_length - In the implementation block
@property (assign,nonatomic) int jetsamLevel;                                        //@synthesize jetsamLevel=_jetsamLevel - In the implementation block
@property (assign,nonatomic) unsigned flags;                                         //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL dead_snapshot;                                     //@synthesize dead_snapshot=_dead_snapshot - In the implementation block
@property (assign,nonatomic) unsigned ss_sequence;                                   //@synthesize ss_sequence=_ss_sequence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)flags;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)appleCareDetails;
-(id)initForPid:(int)arg1 process:(id)arg2 withReason:(id)arg3 exceptionCode:(long long*)arg4 exceptionCodeCount:(unsigned)arg5 stackshotFlags:(unsigned)arg6 ;
-(void)queryThermalData;
-(int)jetsamLevel;
-(void)useStackshotBuffer:(const void*)arg1 size:(unsigned)arg2 frontmostPids:(id)arg3 atTime:(double)arg4 machTime:(unsigned long long)arg5 sequence:(unsigned)arg6 ;
-(id)exceptionCodesDescription;
-(void)decodeKCDataWithBlock:(/*^block*/id)arg1 withTuning:(id)arg2 usingCatalog:(id)arg3 ;
-(void)addCustomField:(const char*)arg1 value:(id)arg2 into:(id)arg3 ;
-(int)resampleTruncatedBacktracesForTask:(int)arg1 forThreads:(id)arg2 usingCatalog:(id)arg3 in:(id)arg4 ;
-(id)resampleUUIDsForTask:(int)arg1 usingCatalog:(id)arg2 ;
-(id)getVMStatistics;
-(id)initWithName:(id)arg1 reason:(id)arg2 exceptionCode:(long long*)arg3 exceptionCodeCount:(unsigned)arg4 ;
-(void)useStackshotData:(id)arg1 frontmostPids:(id)arg2 atTime:(double)arg3 machTime:(unsigned long long)arg4 sequence:(unsigned)arg5 ;
-(void)acquireStackshot;
-(id)getStackshotData;
-(void)setAdditionalPayload:(id)arg1 ;
-(BOOL)includeSyslog;
-(void)setIncludeSyslog:(BOOL)arg1 ;
-(NSArray *)frontmostPids;
-(unsigned long long)capture_absoluteTime;
-(const void*)ss_trace_buffer;
-(unsigned)ss_trace_length;
-(void)setJetsamLevel:(int)arg1 ;
-(BOOL)dead_snapshot;
-(void)setDead_snapshot:(BOOL)arg1 ;
-(unsigned)ss_sequence;
-(void)setSs_sequence:(unsigned)arg1 ;
-(BOOL)isActionable;
-(id)problemType;
-(void)setFlags:(unsigned)arg1 ;
-(id)reportNamePrefix;
-(void)addNotes:(id)arg1 ;
-(void)setReason:(id)arg1 ;
-(void)setIncidentID:(id)arg1 ;
-(void)dealloc;
@end

