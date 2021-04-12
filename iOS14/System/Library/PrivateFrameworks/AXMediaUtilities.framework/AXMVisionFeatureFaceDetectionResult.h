/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, AXMVisionFeatureFaceAttributes, NSDictionary, AXMVisionFeatureFaceLandmarks;

@interface AXMVisionFeatureFaceDetectionResult : NSObject <NSSecureCoding> {

	long long _likelyExpression;
	NSString* _name;
	NSUUID* _uuid;
	unsigned long long _faceId;
	double _rectanglesConfidence;
	double _nameConfidence;
	AXMVisionFeatureFaceAttributes* _attributes;
	double _attributesConfidence;
	NSDictionary* _expressionsAndConfidence;
	AXMVisionFeatureFaceLandmarks* _landmarks;
	AXMVisionFeatureFaceLandmarks* _landmarks3d;
	double _landmarksConfidence;
	double _poseConfidence;
	CGRect _frame;
	SCD_Struct_AX10 _pose;

}

@property (nonatomic,retain) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long faceId;                                //@synthesize faceId=_faceId - In the implementation block
@property (assign,nonatomic) CGRect frame;                                             //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double rectanglesConfidence;                              //@synthesize rectanglesConfidence=_rectanglesConfidence - In the implementation block
@property (nonatomic,retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double nameConfidence;                                    //@synthesize nameConfidence=_nameConfidence - In the implementation block
@property (nonatomic,retain) AXMVisionFeatureFaceAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) double attributesConfidence;                              //@synthesize attributesConfidence=_attributesConfidence - In the implementation block
@property (nonatomic,retain) NSDictionary * expressionsAndConfidence;                  //@synthesize expressionsAndConfidence=_expressionsAndConfidence - In the implementation block
@property (nonatomic,readonly) long long likelyExpression; 
@property (nonatomic,retain) AXMVisionFeatureFaceLandmarks * landmarks;                //@synthesize landmarks=_landmarks - In the implementation block
@property (nonatomic,retain) AXMVisionFeatureFaceLandmarks * landmarks3d;              //@synthesize landmarks3d=_landmarks3d - In the implementation block
@property (assign,nonatomic) double landmarksConfidence;                               //@synthesize landmarksConfidence=_landmarksConfidence - In the implementation block
@property (assign,nonatomic) SCD_Struct_AX10 pose;                                     //@synthesize pose=_pose - In the implementation block
@property (assign,nonatomic) double poseConfidence;                                    //@synthesize poseConfidence=_poseConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nameForFaceExpression:(long long)arg1 ;
+(id)localizedStringFormatterForExpression:(id)arg1 ;
-(SCD_Struct_AX10)pose;
-(NSUUID *)uuid;
-(double)rectanglesConfidence;
-(double)nameConfidence;
-(double)attributesConfidence;
-(double)landmarksConfidence;
-(id)descriptionForExpression:(long long)arg1 ;
-(long long)_expressionForString:(id)arg1 ;
-(double)confidenceForExpression:(long long)arg1 ;
-(void)setAttributes:(AXMVisionFeatureFaceAttributes *)arg1 ;
-(void)setRectanglesConfidence:(double)arg1 ;
-(void)setNameConfidence:(double)arg1 ;
-(void)setAttributesConfidence:(double)arg1 ;
-(AXMVisionFeatureFaceLandmarks *)landmarks3d;
-(void)setLandmarks3d:(AXMVisionFeatureFaceLandmarks *)arg1 ;
-(unsigned long long)faceId;
-(void)setExpressionsAndConfidence:(NSDictionary *)arg1 ;
-(void)setLandmarksConfidence:(double)arg1 ;
-(void)setPose:(SCD_Struct_AX10)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(NSDictionary *)expressionsAndConfidence;
-(void)setPoseConfidence:(double)arg1 ;
-(double)poseConfidence;
-(NSString *)name;
-(AXMVisionFeatureFaceAttributes *)attributes;
-(void)setFrame:(CGRect)arg1 ;
-(long long)likelyExpression;
-(void)setFaceId:(unsigned long long)arg1 ;
-(AXMVisionFeatureFaceLandmarks *)landmarks;
-(id)initWithCoder:(id)arg1 ;
-(void)setLandmarks:(AXMVisionFeatureFaceLandmarks *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)_init;
-(void)setUuid:(NSUUID *)arg1 ;
@end

