/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


#import <DataAccess/DataAccess-Structs.h>
@class NoteContext, NSMapTable;

@interface DALocalDBWatcher : NSObject {

	int _lastSavedCalSequenceNumber;
	CalDatabase* _calWatcher;
	NoteContext* _noteWatcher;
	NSMapTable* _concernedABPartyToBlockMap;
	NSMapTable* _concernedCalPartyToBlockMap;
	NSMapTable* _concernedNotePartyToBlockMap;

}

@property (assign,nonatomic) int lastSavedCalSequenceNumber;              //@synthesize lastSavedCalSequenceNumber=_lastSavedCalSequenceNumber - In the implementation block
+(id)sharedDBWatcher;
-(id)init;
-(int)lastSavedCalSequenceNumber;
-(void)setLastSavedCalSequenceNumber:(int)arg1 ;
-(void)noteCalDBDirChanged;
-(void)dealloc;
-(void)_handleCalChangeNotification;
-(void)_notesChangedExternally;
-(void)registerConcernedCalParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedCalParty:(id)arg1 ;
-(void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedNoteParty:(id)arg1 ;
-(void)didReceiveDarwinNotification:(id)arg1 ;
@end

