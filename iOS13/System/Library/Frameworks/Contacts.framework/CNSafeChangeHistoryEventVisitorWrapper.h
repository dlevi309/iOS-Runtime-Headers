/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitorPrivate.h>

@protocol CNChangeHistoryEventVisitor;
@class NSString;

@interface CNSafeChangeHistoryEventVisitorWrapper : NSObject <CNChangeHistoryEventVisitorPrivate> {

	id<CNChangeHistoryEventVisitor> _visitor;

}

@property (nonatomic,readonly) id<CNChangeHistoryEventVisitor> visitor;              //@synthesize visitor=_visitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitAddGroupEvent:(id)arg1 ;
-(void)visitUpdateGroupEvent:(id)arg1 ;
-(void)visitDeleteGroupEvent:(id)arg1 ;
-(void)visitAddMemberToGroupEvent:(id)arg1 ;
-(void)visitRemoveMemberFromGroupEvent:(id)arg1 ;
-(void)visitAddSubgroupToGroupEvent:(id)arg1 ;
-(void)visitRemoveSubgroupFromGroupEvent:(id)arg1 ;
-(id)initWithChangeHistoryEventVisitor:(id)arg1 ;
-(void)visitLinkContactsEvent:(id)arg1 ;
-(void)visitUnlinkContactEvent:(id)arg1 ;
-(void)visitPreferredContactForNameEvent:(id)arg1 ;
-(void)visitPreferredContactForImageEvent:(id)arg1 ;
-(void)visitDifferentMeCardEvent:(id)arg1 ;
-(id<CNChangeHistoryEventVisitor>)visitor;
@end

