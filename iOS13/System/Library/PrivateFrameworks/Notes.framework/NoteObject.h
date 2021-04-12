/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICSearchIndexableNote.h>

@class NSArray, NSString, NSNumber, NSDate, NoteBodyObject, NSSet, NoteStoreObject, NSURL, NSData;

@interface NoteObject : NSManagedObject <ICSearchIndexableNote>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isModernNote; 
@property (nonatomic,readonly) NSArray * noteCellKeyPaths; 
@property (nonatomic,retain) NSNumber * externalFlags; 
@property (nonatomic,retain) NSNumber * externalServerIntId; 
@property (nonatomic,retain) NSNumber * deletedFlag; 
@property (nonatomic,retain) NSNumber * externalSequenceNumber; 
@property (nonatomic,retain) NSString * summary; 
@property (nonatomic,retain) NSString * author; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSNumber * contentType; 
@property (nonatomic,retain) NSNumber * containsCJK; 
@property (nonatomic,retain) NoteBodyObject * body; 
@property (nonatomic,retain) NSSet * attachments; 
@property (nonatomic,retain) NoteStoreObject * store; 
@property (nonatomic,retain) NSNumber * integerId; 
@property (nonatomic,retain) NSString * content; 
@property (nonatomic,readonly) NSString * contentAsPlainText; 
@property (nonatomic,readonly) NSString * contentAsPlainTextPreservingNewlines; 
@property (assign,nonatomic) BOOL isPlainText; 
@property (nonatomic,readonly) NSURL * noteId; 
@property (nonatomic,readonly) BOOL isMarkedForDeletion; 
@property (nonatomic,readonly) BOOL isBeingMarkedForDeletion; 
@property (nonatomic,retain) NSNumber * isBookkeepingEntry; 
@property (nonatomic,retain) NSString * serverId; 
@property (nonatomic,readonly) BOOL hasValidServerIntId; 
@property (assign,nonatomic) long long serverIntId; 
@property (nonatomic,retain,readonly) NSString * guid; 
@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,retain) NSData * externalRepresentation; 
@property (nonatomic,retain) NSString * externalContentRef; 
@property (assign,nonatomic) unsigned long long sequenceNumber; 
-(id)identifier;
-(unsigned long long)flags;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(id)accountName;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSString *)content;
-(BOOL)containsAttachments;
-(void)setContent:(NSString *)arg1 ;
-(unsigned long long)searchResultType;
-(NSData *)externalRepresentation;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(id)contentIdentifier;
-(id)folderName;
-(void)markForDeletion;
-(NSString *)contentAsPlainText;
-(NSString *)contentAsPlainTextPreservingNewlines;
-(BOOL)isMarkedForDeletion;
-(void)setIsPlainText:(BOOL)arg1 ;
-(long long)serverIntId;
-(id)noteAsPlainTextWithoutTitle;
-(id)userActivityContentAttributeSet;
-(BOOL)isPasswordProtected;
-(BOOL)isModernNote;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedViaICloudFolder;
-(BOOL)isSharedReadOnly;
-(BOOL)isMovable;
-(id)trimmedTitle;
-(id)folderNameForNoteList;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(NSArray *)noteCellKeyPaths;
-(id)contentInfoText;
-(id)dateForCurrentSortType;
-(id)searchIndexingIdentifier;
-(id)searchDomainIdentifier;
-(id)searchableItemAttributeSet;
-(id)dataForTypeIdentifier:(id)arg1 ;
-(id)defaultTitleForEmptyNote;
-(BOOL)isPlainText;
-(NSString *)externalContentRef;
-(void)setExternalContentRef:(NSString *)arg1 ;
-(BOOL)isBeingMarkedForDeletion;
-(NSURL *)noteId;
-(void)setServerIntId:(long long)arg1 ;
-(BOOL)hasValidServerIntId;
-(BOOL)belongsToCollection:(id)arg1 ;
@end

