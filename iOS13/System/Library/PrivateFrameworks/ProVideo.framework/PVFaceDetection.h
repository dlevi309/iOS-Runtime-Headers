/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_PV20 _time;
	CGRect _boundingBox;

}

@property (nonatomic,readonly) long long ID;                                          //@synthesize ID=_ID - In the implementation block
@property (nonatomic,readonly) BOOL hasRollAngle;                                     //@synthesize hasRollAngle=_hasRollAngle - In the implementation block
@property (nonatomic,readonly) double rollAngleInDegrees;                             //@synthesize rollAngleInDegrees=_rollAngleInDegrees - In the implementation block
@property (nonatomic,readonly) BOOL hasYawAngle;                                      //@synthesize hasYawAngle=_hasYawAngle - In the implementation block
@property (nonatomic,readonly) double yawAngleInDegrees;                              //@synthesize yawAngleInDegrees=_yawAngleInDegrees - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                                    //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,readonly) long long detectionOrientation;                        //@synthesize detectionOrientation=_detectionOrientation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV20 time;                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,retain,readonly) AVMetadataFaceObject * faceObject;              //@synthesize faceObject=_faceObject - In the implementation block
+(id)faceDetection:(long long)arg1 :(BOOL)arg2 :(double)arg3 :(BOOL)arg4 :(double)arg5 :(CGRect)arg6 :(long long)arg7 :(SCD_Struct_PV20)arg8 :(id)arg9 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(SCD_Struct_PV20)time;
-(BOOL)hasRollAngle;
-(BOOL)hasYawAngle;
-(CGRect)boundingBox;
-(long long)ID;
-(double)rollAngleInDegrees;
-(BOOL)isEqualToFaceDetection:(id)arg1 ;
-(long long)detectionOrientation;
-(AVMetadataFaceObject *)faceObject;
-(double)yawAngleInDegrees;
@end

