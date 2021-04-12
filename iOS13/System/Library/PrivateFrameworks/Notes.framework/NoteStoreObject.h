/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <Notes/Notes-Structs.h>
#import <Notes/NoteCollectionObject.h>

@class NSString, NoteAccountObject, NSSet;

@interface NoteStoreObject : NoteCollectionObject

@property (nonatomic,retain) NSString * externalIdentifier; 
@property (nonatomic,retain) NoteAccountObject * account; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSSet * changes; 
@property (nonatomic,retain) NSString * syncAnchor; 
-(id)collectionInfo;
-(id)predicateForNotes;
-(id)notesForIntegerIds:(id)arg1 ;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)basicAccountIdentifier;
-(id)notesForServerIntIds:(id)arg1 ascending:(BOOL)arg2 limit:(unsigned long long)arg3 ;
-(id)notesForServerIntIdsInRange:(NSRange)arg1 ascending:(BOOL)arg2 limit:(unsigned long long)arg3 ;
-(id)notesForServerIds:(id)arg1 ;
-(id)notesForGUIDs:(id)arg1 ;
-(id)notesForServerIntIds:(id)arg1 ;
-(id)notesForServerIntIdsInRange:(NSRange)arg1 ;
-(unsigned)maximumServerIntId;
-(unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1 ;
@end

