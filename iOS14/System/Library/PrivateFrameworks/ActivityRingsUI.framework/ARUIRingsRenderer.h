/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol MTLBuffer;
@class ARUIRingUniformsCache;

@interface ARUIRingsRenderer : NSObject {

	id<MTLBuffer> _vertexPositionsBuffer;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _indexCount;
	ARUIRingUniformsCache* _cache;

}
-(id)initWithDevice:(id)arg1 ;
-(void)clearCaches;
-(void)beginRenderingWithCommandEncoder:(id)arg1 ;
-(void)renderRings:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4 ;
-(void)_renderEntireRings:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4 ;
-(void)_renderRingsFollowingPercent:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4 ;
@end

