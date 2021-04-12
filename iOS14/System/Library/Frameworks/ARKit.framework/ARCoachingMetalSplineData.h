/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLBuffer;
#import <ARKit/ARKit-Structs.h>
@class NSArray, ARCoachingBlendableSplineGroup, ARCoachingControlPointContainer;

@interface ARCoachingMetalSplineData : NSObject {

	id<MTLBuffer> _controlPointsBuffer;
	id<MTLBuffer> _controlPointIndicesBuffer;
	id<MTLBuffer> _patchUserDataBuffer;
	id<MTLBuffer> _tessellationFactorsBuffer;
	id<MTLBuffer> _instanceBuffer;
	int _patchCount;
	NSArray* _instanceTransforms;
	ARCoachingBlendableSplineGroup* _shapes;
	ARCoachingControlPointContainer* _recordedControlPoints;
	 _recordedScale;
	 _recordedTranslation;

}

@property (nonatomic,readonly) id<MTLBuffer> controlPointsBuffer;                                    //@synthesize controlPointsBuffer=_controlPointsBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> controlPointIndicesBuffer;                              //@synthesize controlPointIndicesBuffer=_controlPointIndicesBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> patchUserDataBuffer;                                    //@synthesize patchUserDataBuffer=_patchUserDataBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> tessellationFactorsBuffer;                              //@synthesize tessellationFactorsBuffer=_tessellationFactorsBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> instanceBuffer;                                         //@synthesize instanceBuffer=_instanceBuffer - In the implementation block
@property (nonatomic,readonly) int patchCount;                                                       //@synthesize patchCount=_patchCount - In the implementation block
@property (nonatomic,readonly) NSArray * instanceTransforms;                                         //@synthesize instanceTransforms=_instanceTransforms - In the implementation block
@property (nonatomic,readonly) ARCoachingBlendableSplineGroup * shapes;                              //@synthesize shapes=_shapes - In the implementation block
@property (nonatomic,readonly) ARCoachingControlPointContainer * recordedControlPoints;              //@synthesize recordedControlPoints=_recordedControlPoints - In the implementation block
@property (nonatomic,readonly)  recordedScale;                                                       //@synthesize recordedScale=_recordedScale - In the implementation block
@property (nonatomic,readonly)  recordedTranslation;                                                 //@synthesize recordedTranslation=_recordedTranslation - In the implementation block
-(ARCoachingBlendableSplineGroup *)shapes;
-(int)patchCount;
-(id)init:(id)arg1 ;
-(id<MTLBuffer>)controlPointsBuffer;
-()recordedScale;
-()recordedTranslation;
-(void)makeShapes;
-(void)resetInstanceTransforms:(id)arg1 ;
-(void)recordState;
-(id)shapeBlendWithStart:(SCD_Struct_AR11*)arg1 startCount:(int)arg2 end:(SCD_Struct_AR11*)arg3 endCount:(int)arg4 t:(float)arg5 ;
-(void)computeShapeBlendWithEnd:(SCD_Struct_AR11*)arg1 endCount:(int)arg2 t:(float)arg3 ;
-(void)computeShapeBlendWithEnd:(SCD_Struct_AR11*)arg1 endCount:(int)arg2 ;
-(void)computeShapeBlendWithStart:(SCD_Struct_AR11*)arg1 startCount:(int)arg2 end:(SCD_Struct_AR11*)arg3 endCount:(int)arg4 t:(float)arg5 ;
-(void)computeInstanceTransformScale:(float)arg1 ;
-(void)computeInstanceTransformScale:(float)arg1 ;
-(void)computeInstanceTransformScale:;
-(void)computeInstanceTransformTranslate:(float)arg1 t:(int)arg2 ;
-(void)computeInstanceTransformTranslate:(float)arg1 x1:(int)arg2 ;
-(void)computeInstanceTransformTranslate:(int)arg1 ;
-(id<MTLBuffer>)controlPointIndicesBuffer;
-(id<MTLBuffer>)patchUserDataBuffer;
-(id<MTLBuffer>)tessellationFactorsBuffer;
-(id<MTLBuffer>)instanceBuffer;
-(NSArray *)instanceTransforms;
-(ARCoachingControlPointContainer *)recordedControlPoints;
@end

