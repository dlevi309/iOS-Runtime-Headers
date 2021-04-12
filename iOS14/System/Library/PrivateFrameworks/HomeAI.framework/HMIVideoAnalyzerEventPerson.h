/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoAnalyzerEvent.h>

@class HMIVideoAnalyzerEventFace;

@interface HMIVideoAnalyzerEventPerson : HMIVideoAnalyzerEvent {

	BOOL _isBoundingBoxEstimated;
	HMIVideoAnalyzerEventFace* _face;

}

@property (getter=hasEstimatedBoundingBox,readonly) BOOL isBoundingBoxEstimated;              //@synthesize isBoundingBoxEstimated=_isBoundingBoxEstimated - In the implementation block
@property (readonly) CGRect boundingBoxForFaceTracker; 
@property (readonly) HMIVideoAnalyzerEventFace * face;                                        //@synthesize face=_face - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(id)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)description;
-(HMIVideoAnalyzerEventFace *)face;
-(id)attributeDescriptions;
-(CGRect)boundingBox;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 hasMotionVectors:(BOOL)arg3 face:(id)arg4 ;
-(id)initWithFaceEvent:(id)arg1 ;
-(CGRect)boundingBoxForFaceTracker;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 hasMotionVectors:(BOOL)arg3 ;
-(BOOL)hasEstimatedBoundingBox;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 face:(id)arg3 ;
@end

