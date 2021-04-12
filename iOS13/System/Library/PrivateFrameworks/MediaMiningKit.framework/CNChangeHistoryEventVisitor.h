/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
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
-(void)visitDropEverythingEvent:(id)arg1;
-(void)visitAddContactEvent:(id)arg1;
-(void)visitUpdateContactEvent:(id)arg1;
-(void)visitDeleteContactEvent:(id)arg1;

@end

