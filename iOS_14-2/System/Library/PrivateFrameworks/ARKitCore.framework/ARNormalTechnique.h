/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@interface ARNormalTechnique : ARTechnique {

	CVPixelBufferPoolRef _normalPixelBufferPool;
	CV3DNormalEstimationSessionRef _session;

}
-(id)processData:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

