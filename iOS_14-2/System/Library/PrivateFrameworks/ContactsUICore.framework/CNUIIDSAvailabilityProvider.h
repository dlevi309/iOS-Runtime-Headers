/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIIDSAvailabilityProvider.h>

@protocol CNUIIDSAvailabilityProvider <NSObject>
@required
-(id)validateHandlesForFaceTime:(id)arg1 schedulerProvider:(id)arg2;
-(id)validateHandlesForIMessage:(id)arg1 schedulerProvider:(id)arg2;

@end


@protocol CNUIIDSIDQueryControllerWrapper, CNScheduler;
@class CNUIDSHandleAvailabilityCache, NSArray, NSString;

@interface CNUIIDSAvailabilityProvider : NSObject <CNUIIDSAvailabilityProvider> {

	id<CNUIIDSIDQueryControllerWrapper> _queryControllerWrapper;
	CNUIDSHandleAvailabilityCache* _faceTimeRequests;
	CNUIDSHandleAvailabilityCache* _iMessageRequests;
	NSArray* _requestFutures;
	id<CNScheduler> _resourceLock;

}

@property (nonatomic,retain) id<CNUIIDSIDQueryControllerWrapper> queryControllerWrapper;              //@synthesize queryControllerWrapper=_queryControllerWrapper - In the implementation block
@property (nonatomic,retain) CNUIDSHandleAvailabilityCache * faceTimeRequests;                        //@synthesize faceTimeRequests=_faceTimeRequests - In the implementation block
@property (nonatomic,retain) CNUIDSHandleAvailabilityCache * iMessageRequests;                        //@synthesize iMessageRequests=_iMessageRequests - In the implementation block
@property (nonatomic,retain) NSArray * requestFutures;                                                //@synthesize requestFutures=_requestFutures - In the implementation block
@property (nonatomic,retain) id<CNScheduler> resourceLock;                                            //@synthesize resourceLock=_resourceLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validateHandlesForFaceTime:(id)arg1 availabilityProvider:(id)arg2 schedulerProvider:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)validateHandlesForIMessage:(id)arg1 availabilityProvider:(id)arg2 schedulerProvider:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)makeFaceTimeRequestsCache;
+(id)makeIMessageRequestsCache;
-(void)setResourceLock:(id<CNScheduler>)arg1 ;
-(id)init;
-(id<CNScheduler>)resourceLock;
-(id)validateHandlesForFaceTime:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)validateHandlesForIMessage:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)initWithQueryControllerWrapper:(id)arg1 ;
-(id<CNUIIDSIDQueryControllerWrapper>)queryControllerWrapper;
-(CNUIDSHandleAvailabilityCache *)faceTimeRequests;
-(CNUIDSHandleAvailabilityCache *)iMessageRequests;
-(void)startRequestForCacheMisses:(id)arg1 service:(long long)arg2 scheduler:(id)arg3 ;
-(id)validateHandles:(id)arg1 forService:(long long)arg2 schedulerProvider:(id)arg3 ;
-(void)setQueryControllerWrapper:(id<CNUIIDSIDQueryControllerWrapper>)arg1 ;
-(void)setFaceTimeRequests:(CNUIDSHandleAvailabilityCache *)arg1 ;
-(void)setIMessageRequests:(CNUIDSHandleAvailabilityCache *)arg1 ;
-(NSArray *)requestFutures;
-(void)setRequestFutures:(NSArray *)arg1 ;
@end

