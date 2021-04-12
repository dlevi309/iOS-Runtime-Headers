/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ARHWFaceDetection : NSObject <NSSecureCoding> {

	long long _ID;
	double _rollAngleInDegrees;
	long long _detectionOrientation;
	SCD_Struct_AR57 _time;
	CGRect _boundingBox;

}

@property (assign,nonatomic) long long ID;                                //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) double rollAngleInDegrees;                   //@synthesize rollAngleInDegrees=_rollAngleInDegrees - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;                          //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) long long detectionOrientation;              //@synthesize detectionOrientation=_detectionOrientation - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR57 time;                        //@synthesize time=_time - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)faceDetectionFromDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_AR57)time;
-(CGRect)boundingBox;
-(void)setTime:(SCD_Struct_AR57)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(long long)ID;
-(void)setID:(long long)arg1 ;
-(double)rollAngleInDegrees;
-(BOOL)isEqualToFaceDetection:(id)arg1 ;
-(long long)detectionOrientation;
-(void)setRollAngleInDegrees:(double)arg1 ;
-(void)setDetectionOrientation:(long long)arg1 ;
@end

