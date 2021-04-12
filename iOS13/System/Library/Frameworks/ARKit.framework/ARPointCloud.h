/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ADJasperPointCloud;

@interface ARPointCloud : NSObject <NSSecureCoding> {

	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _pointsVector;
	vector<unsigned long long, std::__1::allocator<unsigned long long> >* _identifiersVector;
	vector<float, std::__1::allocator<float> >* _vergenceAngleCosinesVector;
	 _centroid;
	 _standardDeviation;
	ADJasperPointCloud* _depthPointCloud;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) const * points; 
@property (nonatomic,readonly) const unsigned long long* identifiers; 
+(BOOL)supportsSecureCoding;
+(id)concatPointClouds:(id)arg1 ;
+(id)emptyPointCloud;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const *)points;
-(const unsigned long long*)identifiers;
-(1)centroid;
-(1)standardDeviation;
-(id)initWithPointsVector:(const vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >}Ref)arg1 identifiersVector:(const vector<unsigned long long, std::__1::allocator<unsigned long long> >*)arg2 ;
-(id)initWithPointsVector:(const vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >}Ref)arg1 identifiersVector:(const vector<unsigned long long, std::__1::allocator<unsigned long long> >*)arg2 vergenceAngleCosinesVector:(const vector<float, std::__1::allocator<float> >*)arg3 ;
-(const float*)vergenceAngleCosines;
-(id)initWithPointData:(id)arg1 ;
-(id)initWithDepthPointCloud:(id)arg1 ;
-(id)depthPointCloud;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)computeBounds;
-(id)filterPointCloudFrom:ellipsoid:;
-(id)filterPointCloudWithIdentifiers:(set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 ;
-(id)_hitTestPointFromOrigin:(float)arg1 withDirection:(SCD_Struct_AR1)arg2 ;
-(id)pointCloudByApplyingTransform:(SCD_Struct_AR1)arg1 ;
@end

