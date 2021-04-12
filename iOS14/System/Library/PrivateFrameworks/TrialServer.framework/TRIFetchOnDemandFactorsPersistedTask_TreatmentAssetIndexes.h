/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBUInt32Array;

@interface TRIFetchOnDemandFactorsPersistedTask_TreatmentAssetIndexes : TRIPBMessage

@property (nonatomic,copy) NSString * treatmentId; 
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (nonatomic,retain) TRIPBUInt32Array * indexArray; 
@property (nonatomic,readonly) unsigned long long indexArray_Count; 
+(id)descriptor;
@end

