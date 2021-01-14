/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSession.h>

@protocol GEODataSession <NSObject>
@required
-(id)taskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
-(id)taskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;

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
+(void)asynchronousGetURL:(id)arg1 kind:(SCD_Struct_GE91)arg2 auditToken:(id)arg3 requestCounterTicket:(id)arg4 queue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)sharedDataSession;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
-(id)manifestManager;
-(id)init;
-(void)asynchronousGetURL:(id)arg1 kind:(SCD_Struct_GE91)arg2 auditToken:(id)arg3 requestCounterTicket:(id)arg4 queue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithUrlSession:(id)arg1 ;
-(GEODataURLSession *)urlSession;
-(id)taskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)downloadTaskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)taskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
@end

