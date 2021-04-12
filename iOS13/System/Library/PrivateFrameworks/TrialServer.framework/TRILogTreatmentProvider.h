/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <Trial/TRILogTreatmentReader.h>

@interface TRILogTreatmentProvider : TRILogTreatmentReader
+(int)projectIdFromExperimentId:(id)arg1 ;
+(id)providerWithProjectId:(int)arg1 ;
+(BOOL)deleteFileAtPath:(id)arg1 ;
+(BOOL)upgrade;
-(id)initWithPath:(id)arg1 ;
-(id)initWithProjectId:(int)arg1 ;
-(BOOL)addTreatment:(id)arg1 ;
-(BOOL)saveTreatments:(id)arg1 ;
-(BOOL)removeTreatment:(id)arg1 ;
@end

