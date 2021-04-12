/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@protocol _DASExtensionRunner, OS_os_transaction, OS_os_log;
@class _DASExtensionRemoteContext, _DASActivity, NSObject, NSDate, NSString;

@interface _DASExtension : NSObject <NSExtensionRequestHandling> {

	_DASExtensionRemoteContext* _context;
	id<_DASExtensionRunner> _runner;
	_DASActivity* _activity;
	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_os_log> _log;
	NSDate* _startTime;

}

@property (nonatomic,retain) _DASExtensionRemoteContext * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<_DASExtensionRunner> runner;                        //@synthesize runner=_runner - In the implementation block
@property (nonatomic,retain) _DASActivity * activity;                               //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                              //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                    //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(_DASActivity *)activity;
-(void)setActivity:(_DASActivity *)arg1 ;
-(_DASExtensionRemoteContext *)context;
-(void)suspend;
-(void)setContext:(_DASExtensionRemoteContext *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setRunner:(id<_DASExtensionRunner>)arg1 ;
-(id<_DASExtensionRunner>)runner;
-(void)_activityCompletedWithStatus:(unsigned char)arg1 ;
-(void)runner:(id)arg1 performActivity:(id)arg2 ;
@end

