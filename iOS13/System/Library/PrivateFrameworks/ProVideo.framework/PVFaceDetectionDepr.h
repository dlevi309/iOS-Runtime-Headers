/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class AVMetadataFaceObject;

@interface PVFaceDetectionDepr : NSObject {

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

@property (assign,nonatomic) long long ID;                                //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) BOOL hasRollAngle;                           //@synthesize hasRollAngle=_hasRollAngle - In the implementation block
@property (assign,nonatomic) double rollAngleInDegrees;                   //@synthesize rollAngleInDegrees=_rollAngleInDegrees - In the implementation block
@property (assign,nonatomic) BOOL hasYawAngle;                            //@synthesize hasYawAngle=_hasYawAngle - In the implementation block
@property (assign,nonatomic) double yawAngleInDegrees;                    //@synthesize yawAngleInDegrees=_yawAngleInDegrees - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;                          //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV20 time;                        //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long detectionOrientation;              //@synthesize detectionOrientation=_detectionOrientation - In the implementation block
@property (retain) AVMetadataFaceObject * faceObject;                     //@synthesize faceObject=_faceObject - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(SCD_Struct_PV20)time;
-(BOOL)hasRollAngle;
-(BOOL)hasYawAngle;
-(void)setHasRollAngle:(BOOL)arg1 ;
-(void)setHasYawAngle:(BOOL)arg1 ;
-(CGRect)boundingBox;
-(void)setTime:(SCD_Struct_PV20)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(long long)ID;
-(void)setID:(long long)arg1 ;
-(double)rollAngleInDegrees;
-(BOOL)isEqualToFaceDetection:(id)arg1 ;
-(long long)detectionOrientation;
-(void)setRollAngleInDegrees:(double)arg1 ;
-(void)setDetectionOrientation:(long long)arg1 ;
-(id)initWithFaceObject:(id)arg1 ;
-(AVMetadataFaceObject *)faceObject;
-(double)yawAngleInDegrees;
-(void)setYawAngleInDegrees:(double)arg1 ;
-(void)setFaceObject:(AVMetadataFaceObject *)arg1 ;
@end

