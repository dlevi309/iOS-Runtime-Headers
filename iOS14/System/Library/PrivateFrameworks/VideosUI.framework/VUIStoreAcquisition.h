/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableArray, VUIAcquisitionRequest;

@interface VUIStoreAcquisition : NSObject {

	NSMutableArray* _pendingQueue;
	unsigned long long _concurrentCount;
	VUIAcquisitionRequest* _activeRequest;

}
+(id)sharedInstance;
-(id)init;
-(void)_processRequest:(id)arg1 ;
-(void)postCrossProcessNotificationWithBuyParams:(id)arg1 error:(id)arg2 ;
-(id)acquireWithProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_processFirstRequest;
-(void)_handleCustomRequest:(id)arg1 ;
-(void)_handleRequest:(id)arg1 ;
-(void)_handleResponse:(id)arg1 responseDict:(id)arg2 forRequest:(id)arg3 error:(id)arg4 cancelled:(BOOL)arg5 ;
-(void)cancelAcquisition:(id)arg1 ;
@end

