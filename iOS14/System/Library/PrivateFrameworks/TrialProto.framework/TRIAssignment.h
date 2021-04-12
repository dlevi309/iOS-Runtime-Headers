/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRINSExpressionAssignmentLanguage, TRIUIAssignmentLanguage, TRICoreMLAssignmentLanguage, TRIPlanOutAssignmentLanguage, TRIRolloutAssignmentLanguage;

@interface TRIAssignment : TRIPBMessage

@property (nonatomic,readonly) int languageOneOfCase; 
@property (nonatomic,retain) TRINSExpressionAssignmentLanguage * nsexpressionLanguage; 
@property (nonatomic,retain) TRIUIAssignmentLanguage * uiLanguage; 
@property (nonatomic,retain) TRICoreMLAssignmentLanguage * coremlLanguage; 
@property (nonatomic,retain) TRIPlanOutAssignmentLanguage * planoutLanguage; 
@property (nonatomic,retain) TRIRolloutAssignmentLanguage * rolloutLanguage; 
+(id)descriptor;
@end

