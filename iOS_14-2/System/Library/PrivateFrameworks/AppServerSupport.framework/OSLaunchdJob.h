/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
*/


@protocol OS_xpc_object, OS_dispatch_source, OS_dispatch_queue;
@class NSObject, OSLaunchdDomain, NSUUID;

@interface OSLaunchdJob : NSObject {

	NSObject*<OS_xpc_object> _plist;
	OSLaunchdDomain* _domain;
	NSObject*<OS_dispatch_source> _monitor_source;
	/*^block*/id _monitor_handler;
	NSObject*<OS_dispatch_queue> _monitor_queue;
	NSUUID* _handle;

}

@property (nonatomic,readonly) NSUUID * handle;              //@synthesize handle=_handle - In the implementation block
+(id)copyJobWithPid:(int)arg1 ;
+(id)_createJobFromReplyHandle:(id)arg1 ;
+(id)jobInfoFromMessage:(id)arg1 ;
+(id)submitExtension:(id)arg1 overlay:(id)arg2 domain:(id)arg3 error:(id*)arg4 ;
+(id)copyJobWithLabel:(id)arg1 domain:(id)arg2 ;
+(long long)jobStateFromMessage:(id)arg1 ;
+(id)copyJobsManagedBy:(id)arg1 error:(id*)arg2 ;
+(int)_monitorNormalizeError:(int)arg1 ;
-(BOOL)remove:(id*)arg1 ;
-(id)start:(id*)arg1 ;
-(id)createInstance:(unsigned char)arg1 error:(id*)arg2 ;
-(NSUUID *)handle;
-(id)_newRequest;
-(void)monitorOnQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)cancelMonitor;
-(id)description;
-(void)_setupMonitorSourceWithPort:(unsigned)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)submitAndStart:(id*)arg1 ;
-(id)initWithPlist:(id)arg1 ;
-(id)_initWithHandle:(id)arg1 ;
-(id)initWithPlist:(id)arg1 domain:(id)arg2 ;
@end

