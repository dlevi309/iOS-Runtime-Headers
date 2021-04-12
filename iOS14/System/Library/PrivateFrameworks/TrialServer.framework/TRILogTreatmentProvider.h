/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <Trial/TRILogTreatmentReader.h>

@interface TRILogTreatmentProvider : TRILogTreatmentReader
+(BOOL)deleteFileAtPath:(id)arg1 ;
+(id)providerWithProjectId:(int)arg1 paths:(id)arg2 ;
+(int)projectIdFromExperiment:(id)arg1 paths:(id)arg2 ;
-(void)removeTreatment:(id)arg1 ;
-(BOOL)addTreatment:(id)arg1 ;
-(void)updatePersistedLogNamespace:(id)arg1 ;
-(BOOL)saveTreatments:(id)arg1 ;
@end

