/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARDepthData : NSObject {

	CVBufferRef _depthMap;
	CVBufferRef _confidenceMap;

}

@property (nonatomic,readonly) CVBufferRef depthMap;                   //@synthesize depthMap=_depthMap - In the implementation block
@property (nonatomic,readonly) CVBufferRef confidenceMap;              //@synthesize confidenceMap=_confidenceMap - In the implementation block
-(void)dealloc;
-(CVBufferRef)depthMap;
-(CVBufferRef)confidenceMap;
-(id)initWithDepthMap:(CVBufferRef)arg1 confidenceMap:(CVBufferRef)arg2 ;
@end

