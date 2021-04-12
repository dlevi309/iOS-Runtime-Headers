/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSObject;

@interface ARImageBasedTechnique : ARTechnique {

	NSMutableArray* _pendingResultData;
	NSMutableArray* _pendingFrameReferences;
	NSMutableArray* _pendingRequestContexts;
	NSObject*<OS_dispatch_semaphore> _pendingRequestsSemaphore;

}
-(id)processData:(id)arg1 ;
-(id)init;
-(id)_fullDescription;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)pushResultData:(id)arg1 forTimestamp:(double)arg2 ;
-(BOOL)context:(id)arg1 matchesFrameReference:(id)arg2 ;
-(void)prepareResultData:(id)arg1 forContext:(id)arg2 ;
-(void)pushResultData:(id)arg1 forFrameReference:(id)arg2 ;
-(void)pushResultData:(id)arg1 forFrame:(CVBufferRef)arg2 ;
@end

