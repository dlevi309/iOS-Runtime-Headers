/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/CRUndoDelegate.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>

@protocol REMCRReminderIDListDelegate;
@class CRTombstoneOrderedSet, NSObject, NSUUID, CRDocument, REMObjectID, NSMutableOrderedSet, NSString;

@interface REMCRReminderIDList : NSObject <CRUndoDelegate, REMObjectIDProviding> {

	CRTombstoneOrderedSet* _reminderIDsStorage;
	NSObject*<REMCRReminderIDListDelegate> _delegate;
	NSUUID* _replica;
	CRDocument* _document;
	REMObjectID* _remObjectID;

}

@property (nonatomic,readonly) NSUUID * replica;                                                  //@synthesize replica=_replica - In the implementation block
@property (nonatomic,retain) CRDocument * document;                                               //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) REMObjectID * remObjectID;                                           //@synthesize remObjectID=_remObjectID - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<REMCRReminderIDListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * reminderIDsProxy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
+(id)listFromSerializedData:(id)arg1 replica:(id)arg2 ;
-(id)_orderedSet;
-(id)init;
-(REMObjectID *)remObjectID;
-(NSObject*<REMCRReminderIDListDelegate>)delegate;
-(void)setDocument:(CRDocument *)arg1 ;
-(NSUUID *)replica;
-(void)mergeWith:(id)arg1 ;
-(void)setDelegate:(NSObject*<REMCRReminderIDListDelegate>)arg1 ;
-(CRDocument *)document;
-(id)initWithDocument:(id)arg1 objectID:(id)arg2 ;
-(NSMutableOrderedSet *)reminderIDsProxy;
-(void)addReminder:(id)arg1 ;
-(unsigned long long)countOfReminderIDs;
-(id)objectInReminderIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexInReminderIDsOfObject:(id)arg1 ;
-(void)insertObject:(id)arg1 inReminderIDsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromReminderIDsAtIndex:(unsigned long long)arg1 ;
-(id)copyForReplica:(id)arg1 ;
-(void)addUndoCommandsForObject:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)wantsUndoCommands;
-(void)setRemObjectID:(REMObjectID *)arg1 ;
@end

