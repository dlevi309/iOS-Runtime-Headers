/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Frameworks/MTLSpline.framework/MTLSpline
*/


@protocol MTLDevice, MTLBuffer;
#import <MTLSpline/MTLSpline-Structs.h>
@class MTLSAnimatablePathCollection;

@interface MTLSPathBufferData : NSObject {

	 _viewRatio;
	MTLSAnimatablePathCollection* _collection;
	id<MTLDevice> _device;
	id<MTLBuffer> _tessellationFactors;
	id<MTLBuffer> _controlPoints;
	id<MTLBuffer> _indices;
	id<MTLBuffer> _patchInfo;
	id<MTLBuffer> _instanceInfo;

}

@property (assign)  viewRatio;                                             //@synthesize viewRatio=_viewRatio - In the implementation block
@property (retain) MTLSAnimatablePathCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (readonly) id<MTLDevice> device;                                 //@synthesize device=_device - In the implementation block
@property (readonly) id<MTLBuffer> tessellationFactors;                    //@synthesize tessellationFactors=_tessellationFactors - In the implementation block
@property (readonly) id<MTLBuffer> controlPoints;                          //@synthesize controlPoints=_controlPoints - In the implementation block
@property (readonly) id<MTLBuffer> indices;                                //@synthesize indices=_indices - In the implementation block
@property (readonly) id<MTLBuffer> patchInfo;                              //@synthesize patchInfo=_patchInfo - In the implementation block
@property (readonly) id<MTLBuffer> instanceInfo;                           //@synthesize instanceInfo=_instanceInfo - In the implementation block
-(void)commit;
-(MTLSAnimatablePathCollection *)collection;
-(void)setCollection:(MTLSAnimatablePathCollection *)arg1 ;
-(id<MTLDevice>)device;
-(id<MTLBuffer>)indices;
-(id<MTLBuffer>)controlPoints;
-(id)initWithCollection:(id)arg1 device:(id)arg2 ;
-(void)updateInstanceBufferWithData:(InstanceInfo*)arg1 count:(unsigned long long)arg2 ;
-(void)updateControlPointBufferWithData:(ControlPoint*)arg1 count:(unsigned long long)arg2 ;
-(id<MTLBuffer>)patchInfo;
-(id<MTLBuffer>)tessellationFactors;
-(id<MTLBuffer>)instanceInfo;
-()viewRatio;
-(void)setViewRatio:;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithDefaultPath:(id)arg1 device:(id)arg2 ;
@end

