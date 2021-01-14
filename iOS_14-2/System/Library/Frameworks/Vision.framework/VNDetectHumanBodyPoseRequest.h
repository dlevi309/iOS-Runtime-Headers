/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSArray;

@interface VNDetectHumanBodyPoseRequest : VNImageBasedRequest

@property (copy,readonly) NSArray * results; 
+(id)supportedJointNamesForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedRecognizedPointKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedRecognizedPointGroupKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedIdentifiedPointKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedIdentifiedPointGroupKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedJointsGroupNamesForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
@end

