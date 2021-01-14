/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAudioStatistics.dylib
*/


@class NSDictionary, NSMutableDictionary, NSDate, CAReportingPerformanceObject;

@interface CAReporter : NSObject {

	BOOL _started;
	BOOL _removedByClient;
	BOOL _connected;
	unsigned short _serviceType;
	NSDictionary* _configuration;
	NSMutableDictionary* _internalConfiguration;
	long long _reporterID;
	NSDate* _startDate;
	CAReportingPerformanceObject* _perfObject;
	unsigned long long _signpostID;

}

@property (retain) NSMutableDictionary * internalConfiguration;              //@synthesize internalConfiguration=_internalConfiguration - In the implementation block
@property (retain) NSDate * startDate;                                       //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned short serviceType;                     //@synthesize serviceType=_serviceType - In the implementation block
@property (assign) BOOL started;                                             //@synthesize started=_started - In the implementation block
@property (assign) BOOL removedByClient;                                     //@synthesize removedByClient=_removedByClient - In the implementation block
@property (assign) BOOL connected;                                           //@synthesize connected=_connected - In the implementation block
@property (retain) CAReportingPerformanceObject * perfObject;                //@synthesize perfObject=_perfObject - In the implementation block
@property (readonly) unsigned long long signpostID;                          //@synthesize signpostID=_signpostID - In the implementation block
@property (readonly) long long reporterID;                                   //@synthesize reporterID=_reporterID - In the implementation block
@property (nonatomic,retain) NSDictionary * configuration;                   //@synthesize configuration=_configuration - In the implementation block
+(void)sendSingleMessage:(id)arg1 category:(unsigned)arg2 type:(unsigned short)arg3 ;
-(BOOL)connected;
-(void)setInternalConfiguration:(NSMutableDictionary *)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(NSMutableDictionary *)internalConfiguration;
-(void)setStartDate:(NSDate *)arg1 ;
-(unsigned long long)signpostID;
-(void)cacheServiceType:(unsigned short)arg1 ;
-(void)start;
-(BOOL)started;
-(NSDate *)startDate;
-(void)setPerfObject:(CAReportingPerformanceObject *)arg1 ;
-(id)initWithSessionID:(unsigned)arg1 serviceType:(unsigned short)arg2 ;
-(long long)reporterID;
-(void)stop;
-(void)setServiceType:(unsigned short)arg1 ;
-(void)sendMessage:(id)arg1 category:(unsigned)arg2 type:(unsigned short)arg3 ;
-(void)updateWithReporterID:(long long)arg1 ;
-(NSDictionary *)configuration;
-(id)initWithNewReporterID;
-(id)initWithReporterID:(long long)arg1 serviceType:(unsigned short)arg2 ;
-(CAReportingPerformanceObject *)perfObject;
-(void)setRemovedByClient:(BOOL)arg1 ;
-(BOOL)removedByClient;
-(unsigned short)serviceType;
-(void)setStarted:(BOOL)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

