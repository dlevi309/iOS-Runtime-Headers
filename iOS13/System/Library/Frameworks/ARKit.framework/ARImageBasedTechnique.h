/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSObject;

@interface ARImageBasedTechnique : ARTechnique {

	NSMutableArray* _pendingResultData;
	NSMutableArray* _pendingFrameReferences;
	NSMutableArray* _pendingRequestContexts;
	NSObject*<OS_dispatch_semaphore> _pendingRequestsSemaphore;

}
-(id)init;
-(id)processData:(id)arg1 ;
-(id)_fullDescription;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(BOOL)context:(id)arg1 matchesFrameReference:(id)arg2 ;
-(void)prepareResultData:(id)arg1 forContext:(id)arg2 ;
-(void)pushResultData:(id)arg1 forFrameReference:(id)arg2 ;
-(void)pushResultData:(id)arg1 forFrame:(CVBufferRef)arg2 ;
-(void)pushResultData:(id)arg1 forTimestamp:(double)arg2 ;
@end

