/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRINSExpressionAssignmentLanguage, TRIUIAssignmentLanguage;

@interface TRIAssignment : TRIPBMessage

@property (nonatomic,readonly) int languageOneOfCase; 
@property (nonatomic,retain) TRINSExpressionAssignmentLanguage * nsexpressionLanguage; 
@property (nonatomic,retain) TRIUIAssignmentLanguage * uiLanguage; 
+(id)descriptor;
@end

