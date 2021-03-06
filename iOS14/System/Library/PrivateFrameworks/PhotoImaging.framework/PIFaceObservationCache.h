/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@protocol OS_dispatch_group, OS_dispatch_queue, NUFaceDetectionResult;
@class NSObject;

@interface PIFaceObservationCache : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_queue> _queue;
	id<NUFaceDetectionResult> _result;

}
+(id)faceRequestWithRequest:(id)arg1 ;
-(id)init;
-(void)submit:(id)arg1 response:(/*^block*/id)arg2 ;
-(id)submitSynchronous:(id)arg1 error:(out id*)arg2 ;
@end

