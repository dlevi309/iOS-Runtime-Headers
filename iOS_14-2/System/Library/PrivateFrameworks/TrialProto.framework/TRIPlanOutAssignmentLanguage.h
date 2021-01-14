/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray;

@interface TRIPlanOutAssignmentLanguage : TRIPBMessage

@property (nonatomic,copy) NSString * yaml; 
@property (assign,nonatomic) BOOL hasYaml; 
@property (nonatomic,retain) NSMutableArray * treatmentIdArray; 
@property (nonatomic,readonly) unsigned long long treatmentIdArray_Count; 
+(id)descriptor;
@end

