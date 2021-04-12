/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@interface PVFaceIDModel : NSObject
+(id)defaultConfiguration;
+(id)modelFileName;
+(id)loadModelAtPath:(id)arg1 error:(id*)arg2 ;
+(id)classifyFaceObservation:(id)arg1 withModel:(id)arg2 error:(id*)arg3 ;
+(id)faceObservationFromFaceprintData:(id)arg1 ;
+(BOOL)addFaceObservations:(id)arg1 forPersonIdentifier:(id)arg2 toModel:(id)arg3 error:(id*)arg4 ;
+(id)newMutablePersonsModel;
+(BOOL)persistModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
@end

