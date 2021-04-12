/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SCD_Struct_FC3)mouth;
-(unsigned long long)trackDuration;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(long long)trackID;
-(void)setFace:(SCD_Struct_FC3)arg1 ;
-(SCD_Struct_FC3)leftEye;
-(void)setTrackDuration:(unsigned long long)arg1 ;
-(SCD_Struct_FC3)face;
-(int)faceType;
-(SCD_Struct_FC3)rightEye;
-(void)setFaceprint:(NSData *)arg1 ;
-(void)setFaceAngle:(double)arg1 ;
-(void)setFaceType:(int)arg1 ;
-(void)setFaceSize:(double)arg1 ;
-(void)setExpressionFeatures:(NSDictionary *)arg1 ;
-(void)setLeftEye:(SCD_Struct_FC3)arg1 ;
-(void)setRightEye:(SCD_Struct_FC3)arg1 ;
-(NSDictionary *)expressionFeatures;
-(NSDictionary *)additionalInfo;
-(double)faceSize;
-(double)faceAngle;
-(void)setMouth:(SCD_Struct_FC3)arg1 ;
-(BOOL)hasLeftEyeBounds;
-(BOOL)hasRightEyeBounds;
-(void)setTrackID:(long long)arg1 ;
-(void)dealloc;
-(NSData *)faceprint;
-(BOOL)hasMouthBounds;
-(NSDictionary *)faceLandmarkPoints;
-(void)setFaceLandmarkPoints:(NSDictionary *)arg1 ;
@end

