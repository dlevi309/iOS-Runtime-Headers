/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString, ARPointCloud, NSUUID, NSData;

@interface ARReferenceObject : NSObject <NSSecureCoding> {

	NSSet* _keyframes;
	NSString* _name;
	NSString* _resourceGroupName;
	ARPointCloud* _rawFeaturePoints;
	NSUUID* _identifier;
	long long _version;
	NSData* _trackingData;
	 _center;
	 _extent;
	SCD_Struct_AR1 _referenceOriginTransform;

}

@property (nonatomic,readonly) NSUUID * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSData * trackingData;                                //@synthesize trackingData=_trackingData - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 referenceOriginTransform;              //@synthesize referenceOriginTransform=_referenceOriginTransform - In the implementation block
@property (nonatomic,readonly) NSSet * keyframes; 
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly)  center;                                              //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly)  extent;                                              //@synthesize extent=_extent - In the implementation block
@property (nonatomic,readonly)  scale; 
@property (nonatomic,readonly) NSString * resourceGroupName;                         //@synthesize resourceGroupName=_resourceGroupName - In the implementation block
@property (nonatomic,readonly) ARPointCloud * rawFeaturePoints;                      //@synthesize rawFeaturePoints=_rawFeaturePoints - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)referenceObjectsInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3 ;
+(id)referenceObjectsInGroupNamed:(id)arg1 catalog:(id)arg2 ;
+(id)referenceObjectsInGroupNamed:(id)arg1 bundle:(id)arg2 ;
+(id)referenceObjectsInGroupNamed:(id)arg1 catalogURL:(id)arg2 ;
-(BOOL)exportObjectToURL:(id)arg1 previewImage:(id)arg2 error:(id*)arg3 ;
-()center;
-(NSSet *)keyframes;
-()extent;
-()scale;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(long long)version;
-(BOOL)isEqual:(id)arg1 ;
-(void)setResourceGroupName:(NSString *)arg1 ;
-(NSString *)resourceGroupName;
-(NSData *)trackingData;
-(id)initWithTrackingData:(id)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 ;
-(SCD_Struct_AR1)referenceOriginTransform;
-(ARPointCloud *)rawFeaturePoints;
-(id)initWithArchiveURL:(id)arg1 error:(id*)arg2 ;
-(id)referenceObjectByApplyingTransform:(SCD_Struct_AR1)arg1 ;
-(id)referenceObjectByMergingObject:(id)arg1 error:(id*)arg2 ;
@end

