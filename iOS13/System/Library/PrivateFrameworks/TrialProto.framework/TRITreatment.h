/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray;

@interface TRITreatment : TRIPBMessage

@property (nonatomic,copy) NSString * treatmentId; 
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (nonatomic,copy) NSString * treatmentName; 
@property (assign,nonatomic) BOOL hasTreatmentName; 
@property (nonatomic,copy) NSString * treatmentDescription; 
@property (assign,nonatomic) BOOL hasTreatmentDescription; 
@property (nonatomic,retain) NSMutableArray * factorLevelArray; 
@property (nonatomic,readonly) unsigned long long factorLevelArray_Count; 
@property (nonatomic,copy) NSString * cloudKitId; 
@property (assign,nonatomic) BOOL hasCloudKitId; 
+(id)descriptor;
@end

