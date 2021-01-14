/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface ATAssetLinkPowerLogger : NSObject {

	NSMutableDictionary* _aggregation;
	NSObject*<OS_dispatch_queue> _loggerQueue;
	NSObject*<OS_dispatch_source> _flushTimer;

}

@property (retain) NSMutableDictionary * aggregation;                     //@synthesize aggregation=_aggregation - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> loggerQueue;              //@synthesize loggerQueue=_loggerQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> flushTimer;              //@synthesize flushTimer=_flushTimer - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setFlushTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_scheduleFlushTimer;
-(NSObject*<OS_dispatch_queue>)loggerQueue;
-(void)setLoggerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)flushTimer;
-(void)logAssetLinkOfType:(long long)arg1 didBeginDownloadingAsset:(id)arg2 ;
-(void)logAssetLinkOfType:(long long)arg1 didFinishAsset:(id)arg2 withError:(id)arg3 ;
-(id)_aggregatesForKey:(id)arg1 createIfNotExistsWithTimestamp:(id)arg2 ;
-(void)_incrementCountForAggregates:(id)arg1 key:(id)arg2 ;
-(void)_flushMessagesToPowerlog;
-(NSMutableDictionary *)aggregation;
-(void)setAggregation:(NSMutableDictionary *)arg1 ;
@end

