/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitorPrivate.h>

@class CNSaveRequest, NSMutableArray, NSArray, NSString;

@interface CNSaveRequestContactIdentifierCollector : NSObject <CNChangeHistoryEventVisitorPrivate> {

	CNSaveRequest* _request;
	NSMutableArray* _allIdentifiers;
	NSMutableArray* _insertedIdentifiers;

}

@property (readonly) CNSaveRequest * request;                           //@synthesize request=_request - In the implementation block
@property (readonly) NSMutableArray * allIdentifiers;                   //@synthesize allIdentifiers=_allIdentifiers - In the implementation block
@property (readonly) NSMutableArray * insertedIdentifiers;              //@synthesize insertedIdentifiers=_insertedIdentifiers - In the implementation block
@property (readonly) NSArray * allContactIdentifiers; 
@property (readonly) NSArray * insertedContactIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)allIdentifiers;
-(id)initWithSaveRequest:(id)arg1 ;
-(void)collectIdentifiers;
-(NSArray *)insertedContactIdentifiers;
-(NSMutableArray *)insertedIdentifiers;
-(CNSaveRequest *)request;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitLinkContactsEvent:(id)arg1 ;
-(void)visitUnlinkContactEvent:(id)arg1 ;
-(void)visitPreferredContactForNameEvent:(id)arg1 ;
-(void)visitPreferredContactForImageEvent:(id)arg1 ;
-(void)visitDifferentMeCardEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(NSArray *)allContactIdentifiers;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
@end

