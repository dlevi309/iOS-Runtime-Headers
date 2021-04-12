/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)descriptor;
@end

