/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol CNChangeHistoryEventVisitor <NSObject>
@optional
-(void)visitAddGroupEvent:(id)arg1;
-(void)visitUpdateGroupEvent:(id)arg1;
-(void)visitDeleteGroupEvent:(id)arg1;
-(void)visitAddMemberToGroupEvent:(id)arg1;
-(void)visitRemoveMemberFromGroupEvent:(id)arg1;
-(void)visitAddSubgroupToGroupEvent:(id)arg1;
-(void)visitRemoveSubgroupFromGroupEvent:(id)arg1;

@required
-(void)visitAddContactEvent:(id)arg1;
-(void)visitUpdateContactEvent:(id)arg1;
-(void)visitDeleteContactEvent:(id)arg1;
-(void)visitDropEverythingEvent:(id)arg1;

@end

