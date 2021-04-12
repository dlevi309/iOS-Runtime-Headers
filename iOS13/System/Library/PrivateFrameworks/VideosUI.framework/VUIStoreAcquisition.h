/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_handleRequest:(id)arg1 ;
-(id)acquireWithProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_processFirstRequest;
-(void)_handleCustomRequest:(id)arg1 ;
-(void)_handleResponse:(id)arg1 responseDict:(id)arg2 forRequest:(id)arg3 error:(id)arg4 cancelled:(BOOL)arg5 ;
-(void)_postCrossProcessNotificationWithBuyParams:(id)arg1 error:(id)arg2 ;
-(void)cancelAcquisition:(id)arg1 ;
@end

