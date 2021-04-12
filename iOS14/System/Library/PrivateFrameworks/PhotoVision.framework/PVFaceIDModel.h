/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@interface PVFaceIDModel : NSObject
+(id)loadModelAtPath:(id)arg1 error:(id*)arg2 ;
+(id)defaultConfiguration;
+(BOOL)persistModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(id)classifyFaceObservation:(id)arg1 withModel:(id)arg2 error:(id*)arg3 ;
+(id)modelFileName;
+(BOOL)addFaceObservations:(id)arg1 forPersonIdentifier:(id)arg2 toModel:(id)arg3 error:(id*)arg4 ;
+(id)newMutablePersonsModel;
+(id)faceObservationFromFaceprintData:(id)arg1 ;
@end

