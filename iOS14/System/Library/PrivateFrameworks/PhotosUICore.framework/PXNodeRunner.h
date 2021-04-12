/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSOperationQueue;

@interface PXNodeRunner : NSObject {

	NSOperationQueue* _operationQueue;

}

@property (assign) long long maxConcurrentRunNodeCount; 
@property (assign) long long qualityOfService; 
-(void)setQualityOfService:(long long)arg1 ;
-(id)init;
-(void)processGraphForRunNode:(id)arg1 ;
-(long long)maxConcurrentRunNodeCount;
-(void)setMaxConcurrentRunNodeCount:(long long)arg1 ;
-(void)_processRunGraph:(id)arg1 ;
-(long long)qualityOfService;
@end

