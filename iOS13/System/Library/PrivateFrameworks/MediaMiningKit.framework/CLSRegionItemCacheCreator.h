/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setNumberOfRetries:(unsigned long long)arg1 ;
-(double)timeoutInterval;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
-(BOOL)isSimulatingTimeout;
-(unsigned long long)numberOfRetries;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(id)initWithQueryPerformers:(id)arg1 ;
-(BOOL)createCacheForRegions:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(NSArray *)queryPerformers;
@end

