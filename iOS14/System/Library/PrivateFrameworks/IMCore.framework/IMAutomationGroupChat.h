/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCoreAutomationHook.h>

@interface IMAutomationGroupChat : IMCoreAutomationHook
-(id)_runChangeParticipantsQueryWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id*)arg4 optArguments:(id)arg5 addParticipants:(BOOL)arg6 ;
-(id)createGroupChatWithDestinationIDs:(id)arg1 error:(id*)arg2 optArguments:(id)arg3 ;
-(id)addParticipantsWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id*)arg4 optArguments:(id)arg5 ;
-(id)removeParticipantsWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id*)arg4 optArguments:(id)arg5 ;
-(id)changeGroupNameWithGroupID:(id)arg1 newName:(id)arg2 timeOut:(double)arg3 error:(id*)arg4 optArguments:(id)arg5 ;
-(id)groupParticipantsWithGroupID:(id)arg1 timeOut:(double)arg2 error:(id*)arg3 optArguments:(id)arg4 ;
-(id)groupNameWithGroupID:(id)arg1 timeOut:(double)arg2 error:(id*)arg3 optArguments:(id)arg4 ;
@end

