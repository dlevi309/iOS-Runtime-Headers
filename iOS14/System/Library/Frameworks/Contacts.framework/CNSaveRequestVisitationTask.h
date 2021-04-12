/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <ContactsFoundation/CNTask.h>

@protocol CNChangeHistoryEventVisitorPrivate;
@class CNSaveRequest, CNChangeHistoryEventFactory;

@interface CNSaveRequestVisitationTask : CNTask {

	CNSaveRequest* _saveRequest;
	id<CNChangeHistoryEventVisitorPrivate> _visitor;
	CNChangeHistoryEventFactory* _factory;

}

@property (readonly) CNSaveRequest * saveRequest;                                 //@synthesize saveRequest=_saveRequest - In the implementation block
@property (readonly) id<CNChangeHistoryEventVisitorPrivate> visitor;              //@synthesize visitor=_visitor - In the implementation block
@property (readonly) CNChangeHistoryEventFactory * factory;                       //@synthesize factory=_factory - In the implementation block
-(id<CNChangeHistoryEventVisitorPrivate>)visitor;
-(CNSaveRequest *)saveRequest;
-(CNChangeHistoryEventFactory *)factory;
-(id)run:(id*)arg1 ;
-(id)initWithSaveRequest:(id)arg1 visitor:(id)arg2 factory:(id)arg3 ;
-(void)sendAddedGroupEvents;
-(void)sendAddedContactEvents;
-(void)sendUpdatedContactEvents;
-(void)sendDeletedContactEvents;
-(void)sendUpdatedGroupEvents;
-(void)sendDeletedGroupEvents;
-(void)sendAddMemberToGroupEvents;
-(void)sendRemoveMemberFromGroupEvents;
-(void)sendAddSubgroupToGroupEvents;
-(void)sendLinkContactsEvents;
-(void)sendRemoveSubgroupFromGroupEvents;
-(void)sendUnlinkContactEvents;
-(void)sendDifferentMeCardEvent;
-(void)sendPreferredContactForNameEvents;
-(void)sendPreferredContactForImageEvents;
@end

