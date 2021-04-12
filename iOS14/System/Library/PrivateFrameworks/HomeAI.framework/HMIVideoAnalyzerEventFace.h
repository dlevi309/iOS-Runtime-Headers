/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoAnalyzerEvent.h>

@class HMIFaceRecognition, NSNumber;

@interface HMIVideoAnalyzerEventFace : HMIVideoAnalyzerEvent {

	HMIFaceRecognition* _faceRecognition;
	NSNumber* _yaw;
	NSNumber* _roll;

}

@property (readonly) NSNumber * yaw;                                    //@synthesize yaw=_yaw - In the implementation block
@property (readonly) NSNumber * roll;                                   //@synthesize roll=_roll - In the implementation block
@property (readonly) HMIFaceRecognition * faceRecognition;              //@synthesize faceRecognition=_faceRecognition - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(NSNumber *)roll;
-(NSNumber *)yaw;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)description;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMIFaceRecognition *)faceRecognition;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 yaw:(id)arg3 roll:(id)arg4 faceRecognition:(id)arg5 userInfo:(id)arg6 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 faceRecognition:(id)arg3 ;
@end

