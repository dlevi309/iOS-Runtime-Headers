/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ARPatchGrid : NSObject <NSSecureCoding> {

	vector<ARPatch, std::__1::allocator<ARPatch> >* _patchesVector;
	float _angle;

}

@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) const compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* patches; 
@property (nonatomic,readonly) float pivot; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)size;
-(float)pivot;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >*)patches;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPatchesVector:(vector<ARPatch, std::__1::allocator<ARPatch> >*)arg1 pivotAngle:(float)arg2 ;
@end

