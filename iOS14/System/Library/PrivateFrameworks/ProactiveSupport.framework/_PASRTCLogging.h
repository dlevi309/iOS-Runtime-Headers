/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source;
@class NSString, NSObject, NSMutableArray;

@interface _PASRTCLogging : NSObject <NSSecureCoding> {

	opaque_pthread_mutex_t _lock;
	NSString* _path;
	NSObject*<OS_dispatch_source> _persistenceTimerSource;
	double _storeCreationDate;
	NSMutableArray* _aggregators;
	NSMutableArray* _logQueue;

}

@property (retain) NSMutableArray * logQueue;              //@synthesize logQueue=_logQueue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loggerForPath:(id)arg1 ;
+(unsigned long long)numberOfDaysBetweenDate:(id)arg1 andDate:(id)arg2 ;
+(id)dateByAppendingDaysToCurrentDate:(double)arg1 ;
+(double)round:(double)arg1 toSignificantFigures:(long long)arg2 ;
+(unsigned long long)bucketizeInteger:(unsigned long long)arg1 withBucketSize:(unsigned long long)arg2 limit:(unsigned long long)arg3 ;
-(id)init;
-(void)expireLogs;
-(BOOL)resetLogs;
-(BOOL)_storeToDisk;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFileName:(id)arg1 ;
-(id)_createRTCReportingWithClientName:(id)arg1 serviceName:(id)arg2 assetVersion:(unsigned long long)arg3 ;
-(void)enqueueRTCLog:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 ;
-(void)registerBeforeSendProcessor:(id)arg1 ;
-(void)logAggregateEvent:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 ;
-(void)sendRTCLogsWithClientName:(id)arg1 serviceName:(id)arg2 assetVersion:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_removeSentLogsAndResetStoreAge:(id)arg1 ;
-(id)whitelistedLogFromLog:(id)arg1 ;
-(void)updateAndScheduleDiskWrite;
-(double)_storeAge;
-(void)setLogQueue:(NSMutableArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableArray *)logQueue;
-(void)dealloc;
@end

