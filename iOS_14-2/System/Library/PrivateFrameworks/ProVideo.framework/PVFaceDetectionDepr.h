/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_PV22 _time;
	CGRect _boundingBox;

}

@property (assign,nonatomic) long long ID;                                //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) BOOL hasRollAngle;                           //@synthesize hasRollAngle=_hasRollAngle - In the implementation block
@property (assign,nonatomic) double rollAngleInDegrees;                   //@synthesize rollAngleInDegrees=_rollAngleInDegrees - In the implementation block
@property (assign,nonatomic) BOOL hasYawAngle;                            //@synthesize hasYawAngle=_hasYawAngle - In the implementation block
@property (assign,nonatomic) double yawAngleInDegrees;                    //@synthesize yawAngleInDegrees=_yawAngleInDegrees - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;                          //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV22 time;                        //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long detectionOrientation;              //@synthesize detectionOrientation=_detectionOrientation - In the implementation block
@property (retain) AVMetadataFaceObject * faceObject;                     //@synthesize faceObject=_faceObject - In the implementation block
-(long long)ID;
-(void)setID:(long long)arg1 ;
-(SCD_Struct_PV22)time;
-(void)setTime:(SCD_Struct_PV22)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(id)debugDescription;
-(id)description;
-(CGRect)boundingBox;
-(BOOL)hasRollAngle;
-(BOOL)hasYawAngle;
-(void)setHasRollAngle:(BOOL)arg1 ;
-(void)setHasYawAngle:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRollAngleInDegrees:(double)arg1 ;
-(void)setDetectionOrientation:(long long)arg1 ;
-(id)initWithFaceObject:(id)arg1 ;
-(BOOL)isEqualToFaceDetection:(id)arg1 ;
-(double)rollAngleInDegrees;
-(long long)detectionOrientation;
-(AVMetadataFaceObject *)faceObject;
-(double)yawAngleInDegrees;
-(void)setYawAngleInDegrees:(double)arg1 ;
-(void)setFaceObject:(AVMetadataFaceObject *)arg1 ;
@end

