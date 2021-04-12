/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@protocol OS_os_log;
@class NSObject, NSArray;

@interface CLSRegionItemCacheCreator : NSObject {

	BOOL _simulatesTimeout;
	NSObject*<OS_os_log> _loggingConnection;
	double _timeoutInterval;
	unsigned long long _numberOfRetries;
	NSArray* _queryPerformers;

}

@property (assign,getter=isSimulatingTimeout,nonatomic) BOOL simulatesTimeout;              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRetries;                            //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> loggingConnection;                        //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,readonly) NSArray * queryPerformers;                                   //@synthesize queryPerformers=_queryPerformers - In the implementation block
+(id)businessItemsForRegion:(id)arg1 ;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)setNumberOfRetries:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRetries;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSArray *)queryPerformers;
-(BOOL)isSimulatingTimeout;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
-(id)initWithQueryPerformers:(id)arg1 ;
-(BOOL)createCacheForRegions:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
@end

