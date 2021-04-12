/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Frameworks/MTLSpline.framework/MTLSpline
*/


#import <MTLSpline/MTLSpline-Structs.h>
@interface MTLSPath : NSObject {

	float _strokeWeight;
	vector<ControlPoint, std::__1::allocator<ControlPoint> >* _controlPointsVector;
	vector<PatchInfo, std::__1::allocator<PatchInfo> >* _patchInfoVector;
	vector<unsigned short, std::__1::allocator<unsigned short> >* _indicesVector;
	vector<InstanceInfo, std::__1::allocator<InstanceInfo> >* _instancesVector;
	vector<simd_float4x4, std::__1::allocator<simd_float4x4> >* _collapsedTransforms;

}

@property (readonly) ControlPoint* controlPoints; 
@property (readonly) unsigned long long controlPointsCount; 
@property (readonly) PatchInfoRef patchInfo; 
@property (readonly) unsigned long long patchInfoCount; 
@property (readonly) unsigned short* indices; 
@property (readonly) unsigned long long indicesCount; 
@property (readonly) InstanceInfo* instances; 
@property (readonly) unsigned long long instanceCount; 
-(id)init;
-(unsigned short*)indices;
-(ControlPoint*)controlPoints;
-(unsigned long long)instanceCount;
-(void)genLeftCapWithWidth:(float)arg1 ;
-(void)genRightCapWithWidth:(float)arg1 ;
-(InstanceInfo*)instances;
-(unsigned long long)indicesCount;
-(void)clearInstances;
-(void)appendInstances:(InstanceInfo*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithPoints:(1*)arg1 colors:(2*)arg2 count:(unsigned long long)arg3 strokeWeight:(float)arg4 pattern:(unsigned long long)arg5 rotation:(AxisAngle)arg6 ;
-(unsigned long long)controlPointsCount;
-(void)genIndicesWithPattern:(unsigned long long)arg1 ;
-(void)collapseTransform:(SCD_Struct_MT11)arg1 ;
-(2)interpolateWithPoints:([4)arg1 t:(float)arg2 ;
-(2)interpolateTangentWithPoints:([4)arg1 t:(float)arg2 ;
-(unsigned long long)indicesVectorCount;
-(unsigned long long)controlPointsVectorCount;
-(unsigned long long)patchInfoVectorCount;
-(unsigned long long)instanceInfoVectorCount;
-(ControlPoint*)controlPointsVectorData;
-(PatchInfoRef)patchInfoVectorData;
-(unsigned short*)indicesVectorData;
-(InstanceInfo*)instanceInfoVectorData;
-(id)initWithPoints:(1*)arg1 count:(unsigned long long)arg2 strokeWeight:(float)arg3 pattern:(unsigned long long)arg4 rotation:(AxisAngle)arg5 ;
-(unsigned long long)patchInfoCount;
-(PatchInfoRef)patchInfo;
-(void)appendControlPoints:(ControlPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)appendPatchInfo:(PatchInfoRef)arg1 count:(unsigned long long)arg2 ;
-(void)appendIndices:(unsigned short*)arg1 count:(unsigned long long)arg2 ;
@end

