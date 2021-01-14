/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOProtobufSessionTaskDelegate.h>

@protocol OS_dispatch_queue;
@class GEOProtobufSession, GEOProtobufSessionTask, GEOETATrafficUpdateRequest, GEOApplicationAuditToken, GEOMapServiceTraits, NSObject, NSString;

@interface GEOETAProvider : NSObject <GEOProtobufSessionTaskDelegate> {

	GEOProtobufSession* _protobufSession;
	GEOProtobufSessionTask* _task;
	GEOETATrafficUpdateRequest* _currentRequest;
	/*^block*/id _errorHandler;
	/*^block*/id _finishedHandler;
	/*^block*/id _willSendRequestHandler;
	GEOApplicationAuditToken* _auditToken;
	GEOMapServiceTraits* _traits;
	BOOL _cancelled;
	GEOOnce_s _didStart;
	NSObject*<OS_dispatch_queue> _isolationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOProtobufSession * protobufSession;              //@synthesize protobufSession=_protobufSession - In the implementation block
@property (nonatomic,retain) GEOProtobufSessionTask * task;                       //@synthesize task=_task - In the implementation block
@property (retain) GEOETATrafficUpdateRequest * currentRequest;                   //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,copy) id errorHandler;                                       //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id finishedHandler;                                    //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id willSendRequestHandler;                             //@synthesize willSendRequestHandler=_willSendRequestHandler - In the implementation block
-(GEOETATrafficUpdateRequest *)currentRequest;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(GEOProtobufSessionTask *)task;
-(void)cancelRequest;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)updateRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(id)initWithAuditToken:(id)arg1 traits:(id)arg2 ;
-(void)_startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)didCompleteTask;
-(id)init;
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(void)setTask:(GEOProtobufSessionTask *)arg1 ;
-(void)setFinishedHandler:(id)arg1 ;
-(id)finishedHandler;
-(void)setWillSendRequestHandler:(id)arg1 ;
-(id)willSendRequestHandler;
-(void)setCurrentRequest:(GEOETATrafficUpdateRequest *)arg1 ;
-(GEOProtobufSession *)protobufSession;
-(void)protobufSession:(id)arg1 willSendRequestForTask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)protobufSession:(id)arg1 validateResponse:(id)arg2 ;
@end

