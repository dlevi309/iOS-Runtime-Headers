/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
*/


#import <FaceCore/FaceCore-Structs.h>
@class NSData, NSDictionary;

@interface FCRFace : NSObject {

	SCD_Struct_FC3 face;
	SCD_Struct_FC3 leftEye;
	SCD_Struct_FC3 rightEye;
	SCD_Struct_FC3 mouth;
	double faceSize;
	double faceAngle;
	long long trackID;
	unsigned long long trackDuration;
	NSData* faceprint;
	int faceType;
	NSDictionary* faceLandmarkPoints;
	NSDictionary* expressionFeatures;
	NSDictionary* additionalInfo;

}

@property (assign) SCD_Struct_FC3 face; 
@property (assign) SCD_Struct_FC3 leftEye; 
@property (assign) SCD_Struct_FC3 rightEye; 
@property (assign) SCD_Struct_FC3 mouth; 
@property (assign) double faceSize; 
@property (assign) double faceAngle; 
@property (assign) long long trackID; 
@property (assign) unsigned long long trackDuration; 
@property (retain) NSData * faceprint; 
@property (assign) int faceType; 
@property (retain) NSDictionary * faceLandmarkPoints; 
@property (retain) NSDictionary * expressionFeatures; 
@property (retain) NSDictionary * additionalInfo; 
@property (readonly) BOOL hasLeftEyeBounds; 
@property (readonly) BOOL hasRightEyeBounds; 
@property (readonly) BOOL hasMouthBounds; 
-(void)dealloc;
-(void)setFaceAngle:(double)arg1 ;
-(double)faceAngle;
-(void)setFaceType:(int)arg1 ;
-(void)setFace:(SCD_Struct_FC3)arg1 ;
-(void)setFaceSize:(double)arg1 ;
-(void)setExpressionFeatures:(NSDictionary *)arg1 ;
-(void)setLeftEye:(SCD_Struct_FC3)arg1 ;
-(void)setRightEye:(SCD_Struct_FC3)arg1 ;
-(void)setMouth:(SCD_Struct_FC3)arg1 ;
-(SCD_Struct_FC3)face;
-(NSDictionary *)expressionFeatures;
-(SCD_Struct_FC3)leftEye;
-(SCD_Struct_FC3)rightEye;
-(SCD_Struct_FC3)mouth;
-(long long)trackID;
-(unsigned long long)trackDuration;
-(NSData *)faceprint;
-(void)setFaceprint:(NSData *)arg1 ;
-(int)faceType;
-(NSDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(void)setTrackID:(long long)arg1 ;
-(BOOL)hasLeftEyeBounds;
-(BOOL)hasRightEyeBounds;
-(BOOL)hasMouthBounds;
-(NSDictionary *)faceLandmarkPoints;
-(void)setFaceLandmarkPoints:(NSDictionary *)arg1 ;
-(double)faceSize;
-(void)setTrackDuration:(unsigned long long)arg1 ;
@end

