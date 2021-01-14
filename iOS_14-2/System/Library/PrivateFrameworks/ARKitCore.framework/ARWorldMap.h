/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, ARPointCloud, NSData;

@interface ARWorldMap : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _anchors;
	ARPointCloud* _rawFeaturePoints;
	long long _version;
	NSData* _trackingData;
	NSData* _surfaceData;
	 _center;
	 _extent;
	SCD_Struct_AR1 _referenceOriginTransform;

}

@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSData * trackingData;                           //@synthesize trackingData=_trackingData - In the implementation block
@property (nonatomic,copy) NSData * surfaceData;                                     //@synthesize surfaceData=_surfaceData - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 referenceOriginTransform;              //@synthesize referenceOriginTransform=_referenceOriginTransform - In the implementation block
@property (nonatomic,readonly)  center;                                              //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly)  extent;                                              //@synthesize extent=_extent - In the implementation block
@property (nonatomic,copy) NSArray * anchors;                                        //@synthesize anchors=_anchors - In the implementation block
@property (nonatomic,readonly) ARPointCloud * rawFeaturePoints;                      //@synthesize rawFeaturePoints=_rawFeaturePoints - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)featurePointsForTrackingData:(id)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 ;
+(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)boundsForTrackingData:(id)arg1 ;
+(id)keyframesForTrackingData:(id)arg1 withFeaturePoints:(id)arg2 referenceOriginTransform:(SCD_Struct_AR1)arg3 ;
-()center;
-()extent;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)anchors;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAnchors:(NSArray *)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)trackingData;
-(id)initWithTrackingData:(id)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 ;
-(SCD_Struct_AR1)referenceOriginTransform;
-(ARPointCloud *)rawFeaturePoints;
-(NSData *)surfaceData;
-(id)extractReferenceObjectWithTransform:(SCD_Struct_AR1)arg1 center:(id*)arg2 ;
-(void)setSurfaceData:(NSData *)arg1 ;
@end

