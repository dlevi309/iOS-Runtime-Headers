/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARResultData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARPointCloud, NSString;

@interface ARWorldTrackingFeaturePointData : NSObject <ARResultData, NSSecureCoding> {

	double _timestamp;
	ARPointCloud* _visionFeaturePoints;
	ARPointCloud* _featurePoints;

}

@property (nonatomic,readonly) double timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) ARPointCloud * visionFeaturePoints;              //@synthesize visionFeaturePoints=_visionFeaturePoints - In the implementation block
@property (nonatomic,retain) ARPointCloud * featurePoints;                    //@synthesize featurePoints=_featurePoints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithTimestamp:(double)arg1 ;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(ARPointCloud *)featurePoints;
-(void)setVisionFeaturePoints:(ARPointCloud *)arg1 ;
-(void)setFeaturePoints:(ARPointCloud *)arg1 ;
-(ARPointCloud *)visionFeaturePoints;
@end

