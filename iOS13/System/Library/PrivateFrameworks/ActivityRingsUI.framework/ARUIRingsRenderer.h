/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol MTLBuffer;
@interface ARUIRingsRenderer : NSObject {

	id<MTLBuffer> _vertexPositionsBuffer;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _indexCount;

}
+(void)clearCaches;
-(id)initWithDevice:(id)arg1 maximumRingCount:(unsigned long long)arg2 ;
-(void)beginRenderingWithCommandEncoder:(id)arg1 ;
-(void)renderRings:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3 ;
-(void)_renderEntireRings:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3 ;
-(void)_renderRingsFollowingPercent:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3 ;
@end

