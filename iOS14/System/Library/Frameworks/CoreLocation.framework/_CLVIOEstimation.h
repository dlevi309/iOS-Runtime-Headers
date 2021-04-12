/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface _CLVIOEstimation : NSObject <NSCopying, NSSecureCoding> {

	int _trackingState;
	double _originTimestamp;
	double _timestamp;
	NSData* _inertialState;
	NSData* _inertialCovariance;
	CGSize _cameraImageResolution;
	SCD_Struct_CL32 _inertialStateInfo;
	SCD_Struct_CL32 _inertialCovarianceInfo;
	SCD_Struct_CL30 _cameraIntrinsics;
	SCD_Struct_CL13 _cameraPose;

}

@property (assign,nonatomic) int trackingState;                                   //@synthesize trackingState=_trackingState - In the implementation block
@property (assign,nonatomic) double originTimestamp;                              //@synthesize originTimestamp=_originTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL32 inertialStateInfo;                   //@synthesize inertialStateInfo=_inertialStateInfo - In the implementation block
@property (nonatomic,copy) NSData * inertialState;                                //@synthesize inertialState=_inertialState - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL32 inertialCovarianceInfo;              //@synthesize inertialCovarianceInfo=_inertialCovarianceInfo - In the implementation block
@property (nonatomic,copy) NSData * inertialCovariance;                           //@synthesize inertialCovariance=_inertialCovariance - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL13 cameraPose;                          //@synthesize cameraPose=_cameraPose - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL30 cameraIntrinsics;                    //@synthesize cameraIntrinsics=_cameraIntrinsics - In the implementation block
@property (assign,nonatomic) CGSize cameraImageResolution;                        //@synthesize cameraImageResolution=_cameraImageResolution - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)description;
-(int)trackingState;
-(double)originTimestamp;
-(NSData *)inertialState;
-(SCD_Struct_CL32)inertialStateInfo;
-(SCD_Struct_CL32)inertialCovarianceInfo;
-(NSData *)inertialCovariance;
-(SCD_Struct_CL13)cameraPose;
-(SCD_Struct_CL30)cameraIntrinsics;
-(CGSize)cameraImageResolution;
-(void)setTrackingState:(int)arg1 ;
-(void)setOriginTimestamp:(double)arg1 ;
-(void)setInertialStateInfo:(SCD_Struct_CL32)arg1 ;
-(void)setInertialState:(NSData *)arg1 ;
-(void)setInertialCovarianceInfo:(SCD_Struct_CL32)arg1 ;
-(void)setInertialCovariance:(NSData *)arg1 ;
-(void)setCameraPose:(SCD_Struct_CL13)arg1 ;
-(void)setCameraIntrinsics:(SCD_Struct_CL30)arg1 ;
-(void)setCameraImageResolution:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)dealloc;
@end

