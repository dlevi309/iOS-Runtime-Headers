/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NMSSHLogger : NSObject {

	BOOL _enabled;
	/*^block*/id _logBlock;
	unsigned long long _logLevel;
	NSObject*<OS_dispatch_queue> _loggerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> loggerQueue;              //@synthesize loggerQueue=_loggerQueue - In the implementation block
@property (nonatomic,copy) id logBlock;                                             //@synthesize logBlock=_logBlock - In the implementation block
@property (assign,nonatomic) unsigned long long logLevel;                           //@synthesize logLevel=_logLevel - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                         //@synthesize enabled=_enabled - In the implementation block
+(id)logger;
+(id)sharedLogger;
-(void)setEnabled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)loggerQueue;
-(void)setLoggerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)logLevel;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(void)logInfo:(id)arg1 ;
-(void)logError:(id)arg1 ;
-(void)log:(id)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 ;
-(void)logVerbose:(id)arg1 ;
-(void)logWarn:(id)arg1 ;
-(id)logBlock;
-(void)setLogBlock:(id)arg1 ;
@end

