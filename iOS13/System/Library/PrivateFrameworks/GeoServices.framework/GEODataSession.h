/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSession.h>

@protocol GEODataSession <NSObject>
@required
-(id)taskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
-(id)taskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end


@protocol OS_dispatch_queue, GEODataSession;
@class NSObject, GEODataURLSession, NSString;

@interface GEODataSession : NSObject <GEODataSession> {

	NSObject*<OS_dispatch_queue> _sessionIsolation;
	id<GEODataSession> _urlSession;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionIsolation;              //@synthesize sessionIsolation=_sessionIsolation - In the implementation block
@property (nonatomic,readonly) GEODataURLSession * urlSession;                             //@synthesize urlSession=_urlSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDataSession;
+(void)asynchronousGetURL:(id)arg1 kind:(SCD_Struct_GE2)arg2 auditToken:(id)arg3 requestCounterTicket:(id)arg4 queue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)init;
-(void)asynchronousGetURL:(id)arg1 kind:(SCD_Struct_GE2)arg2 auditToken:(id)arg3 requestCounterTicket:(id)arg4 queue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithUrlSession:(id)arg1 ;
-(id)taskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(GEODataURLSession *)urlSession;
-(id)downloadTaskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)taskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)manifestManager;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
@end

