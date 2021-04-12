/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class AVMetadataFaceObject;

@interface PVFaceDetection : NSObject {

	BOOL _hasRollAngle;
	BOOL _hasYawAngle;
	long long _ID;
	double _rollAngleInDegrees;
	double _yawAngleInDegrees;
	long long _detectionOrientation;
	AVMetadataFaceObject* _faceObject;
	SCD_Struct_PV22 _time;
	CGRect _boundingBox;

}

@property (nonatomic,readonly) long long ID;                                          //@synthesize ID=_ID - In the implementation block
@property (nonatomic,readonly) BOOL hasRollAngle;                                     //@synthesize hasRollAngle=_hasRollAngle - In the implementation block
@property (nonatomic,readonly) double rollAngleInDegrees;                             //@synthesize rollAngleInDegrees=_rollAngleInDegrees - In the implementation block
@property (nonatomic,readonly) BOOL hasYawAngle;                                      //@synthesize hasYawAngle=_hasYawAngle - In the implementation block
@property (nonatomic,readonly) double yawAngleInDegrees;                              //@synthesize yawAngleInDegrees=_yawAngleInDegrees - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                                    //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,readonly) long long detectionOrientation;                        //@synthesize detectionOrientation=_detectionOrientation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV22 time;                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,retain,readonly) AVMetadataFaceObject * faceObject;              //@synthesize faceObject=_faceObject - In the implementation block
+(id)faceDetection:(long long)arg1 :(BOOL)arg2 :(double)arg3 :(BOOL)arg4 :(double)arg5 :(CGRect)arg6 :(long long)arg7 :(SCD_Struct_PV22)arg8 :(id)arg9 ;
-(long long)ID;
-(SCD_Struct_PV22)time;
-(id)debugDescription;
-(id)description;
-(CGRect)boundingBox;
-(BOOL)hasRollAngle;
-(BOOL)hasYawAngle;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToFaceDetection:(id)arg1 ;
-(double)rollAngleInDegrees;
-(long long)detectionOrientation;
-(AVMetadataFaceObject *)faceObject;
-(double)yawAngleInDegrees;
@end

