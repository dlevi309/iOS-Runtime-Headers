/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSMutableArray, NSMutableDictionary;

@interface ICURLRequestRegistry : NSObject {

	NSMutableArray* _activeRequests;
	NSMutableDictionary* _requestHandlers;

}

@property (nonatomic,retain) NSMutableArray * activeRequests;                    //@synthesize activeRequests=_activeRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestHandlers;              //@synthesize requestHandlers=_requestHandlers - In the implementation block
+(id)sharedRegistry;
-(NSMutableDictionary *)requestHandlers;
-(NSMutableArray *)activeRequests;
-(void)registerHandler:(/*^block*/id)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3 ;
-(void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2 ;
-(/*^block*/id)handlerForIncomingRequestWithAction:(id)arg1 scheme:(id)arg2 ;
-(void)registerOutgoingRequest:(id)arg1 ;
-(id)popRequest:(id)arg1 ;
-(id)popActiveRequest;
-(id)popRequestWithUUID:(id)arg1 ;
-(void)setActiveRequests:(NSMutableArray *)arg1 ;
-(void)setRequestHandlers:(NSMutableDictionary *)arg1 ;
@end

