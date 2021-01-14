/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNRecognizedPointsObservation.h>

@class NSArray;

@interface VNHumanBodyPoseObservation : VNRecognizedPointsObservation

@property (copy,readonly) NSArray * availableJointNames; 
@property (copy,readonly) NSArray * availableJointsGroupNames; 
-(NSArray *)availableJointNames;
-(NSArray *)availableJointsGroupNames;
-(id)recognizedPointForJointName:(id)arg1 error:(id*)arg2 ;
-(id)recognizedPointsForJointsGroupName:(id)arg1 error:(id*)arg2 ;
@end

