/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSession.h>
#import <libobjc.A.dylib/__NSURLSessionTaskGroupForConfiguration.h>

@protocol OS_dispatch_queue;
@class NSObject, NSUUID, NSString, ConnectionContextManager, NSMutableDictionary, NSMutableSet, __CFN_SessionMetrics, NSDictionary, NSURLSessionConfiguration, NSURLSession;

@interface __NSCFURLSession : NSURLSession <__NSURLSessionTaskGroupForConfiguration> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _uuid_ivar;
	NSString* _tlsSessionCachePrefix;
	ConnectionContextManager* _nwContextManager;
	shared_ptr<NSObject<OS_nw_context> >* _nwContext;
	NSMutableDictionary* _altSvc;
	NSMutableSet* _h2BlacklistedHosts;
	NSMutableDictionary* _coalescing;
	__CFN_SessionMetrics* _metrics;

}

@property (copy,readonly) NSDictionary * delegateOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
-(void)dealloc;
-(id)_metrics;
-(id)_uuid;
-(id)workQueue;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(NSURLSession *)_groupSession;
-(void)_useTLSSessionCacheFromSession:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)defaultTaskGroup;
-(shared_ptr<NSObject<OS_nw_context> >*)_nwContext;
-(void)set_coalescing:(id)arg1 ;
-(id)_altSvc;
-(void)set_metrics:(id)arg1 ;
-(id)_tlsSessionCachePrefix;
-(void)set_tlsSessionCachePrefix:(id)arg1 ;
-(NSDictionary *)delegateOptions;
-(id)_coalescing;
-(id)_h2BlacklistedHosts;
-(BOOL)invalid;
-(id)taskGroupWithConfiguration:(id)arg1 ;
-(void)set_altSvc:(id)arg1 ;
-(void)set_h2BlacklistedHosts:(id)arg1 ;
@end

