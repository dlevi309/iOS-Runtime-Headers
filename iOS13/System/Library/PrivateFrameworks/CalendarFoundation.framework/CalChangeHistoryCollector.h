/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class NSMutableArray, NSString;

@interface CalChangeHistoryCollector : NSObject <CNChangeHistoryEventVisitor> {

	BOOL _didReset;
	BOOL _hasChanges;
	NSMutableArray* _insertedContacts;
	NSMutableArray* _updatedContacts;
	NSMutableArray* _deletedContactIdentifiers;

}

@property (assign) BOOL didReset;                                           //@synthesize didReset=_didReset - In the implementation block
@property (assign) BOOL hasChanges;                                         //@synthesize hasChanges=_hasChanges - In the implementation block
@property (retain) NSMutableArray * insertedContacts;                       //@synthesize insertedContacts=_insertedContacts - In the implementation block
@property (retain) NSMutableArray * updatedContacts;                        //@synthesize updatedContacts=_updatedContacts - In the implementation block
@property (retain) NSMutableArray * deletedContactIdentifiers;              //@synthesize deletedContactIdentifiers=_deletedContactIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)hasChanges;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(NSMutableArray *)updatedContacts;
-(void)setHasChanges:(BOOL)arg1 ;
-(BOOL)didReset;
-(NSMutableArray *)insertedContacts;
-(NSMutableArray *)deletedContactIdentifiers;
-(void)setDidReset:(BOOL)arg1 ;
-(void)setInsertedContacts:(NSMutableArray *)arg1 ;
-(void)setUpdatedContacts:(NSMutableArray *)arg1 ;
-(void)setDeletedContactIdentifiers:(NSMutableArray *)arg1 ;
@end

