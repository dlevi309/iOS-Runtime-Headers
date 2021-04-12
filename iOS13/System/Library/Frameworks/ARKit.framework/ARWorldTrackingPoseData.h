/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ARWorldTrackingState, NSDictionary, ARLineCloud, ARVideoFormat, NSString;

@interface ARWorldTrackingPoseData : NSObject <ARResultData, NSSecureCoding, NSCopying> {

	double _timestamp;
	ARWorldTrackingState* _worldTrackingState;
	NSDictionary* _vioStateDetails;
	ARLineCloud* _lineCloud;
	ARVideoFormat* _currentlyActiveVideoFormat;
	long long _worldMappingStatus;
	SCD_Struct_AR1 _visionCameraTransform;
	SCD_Struct_AR1 _cameraTransform;

}

@property (assign,nonatomic) double timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 visionCameraTransform;                    //@synthesize visionCameraTransform=_visionCameraTransform - In the implementation block
@property (nonatomic,copy) ARWorldTrackingState * worldTrackingState;                 //@synthesize worldTrackingState=_worldTrackingState - In the implementation block
@property (nonatomic,copy) NSDictionary * vioStateDetails;                            //@synthesize vioStateDetails=_vioStateDetails - In the implementation block
@property (nonatomic,retain) ARLineCloud * lineCloud;                                 //@synthesize lineCloud=_lineCloud - In the implementation block
@property (nonatomic,retain) ARVideoFormat * currentlyActiveVideoFormat;              //@synthesize currentlyActiveVideoFormat=_currentlyActiveVideoFormat - In the implementation block
@property (assign,nonatomic) long long worldMappingStatus;                            //@synthesize worldMappingStatus=_worldMappingStatus - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 cameraTransform;                          //@synthesize cameraTransform=_cameraTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)initWithTimestamp:(double)arg1 ;
-(SCD_Struct_AR1)cameraTransform;
-(ARWorldTrackingState *)worldTrackingState;
-(void)setVisionCameraTransform:(SCD_Struct_AR1)arg1 ;
-(void)setCameraTransform:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)visionCameraTransform;
-(void)setWorldTrackingState:(ARWorldTrackingState *)arg1 ;
-(void)setLineCloud:(ARLineCloud *)arg1 ;
-(void)setVioStateDetails:(NSDictionary *)arg1 ;
-(void)setCurrentlyActiveVideoFormat:(ARVideoFormat *)arg1 ;
-(void)setWorldMappingStatus:(long long)arg1 ;
-(NSDictionary *)vioStateDetails;
-(long long)worldMappingStatus;
-(ARVideoFormat *)currentlyActiveVideoFormat;
-(ARLineCloud *)lineCloud;
@end

