/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol ICSearchIndexable <NSObject>
@optional
-(id)dataForTypeIdentifier:(id)arg1;
-(id)fileURLForTypeIdentifier:(id)arg1;

@required
-(id)modificationDate;
-(id)objectID;
-(id)creationDate;
-(id)managedObjectContext;
-(unsigned long long)searchResultType;
-(id)contentIdentifier;
-(id)userActivityContentAttributeSet;
-(BOOL)isMovable;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(id)searchIndexingIdentifier;
-(id)searchDomainIdentifier;
-(id)searchableItemAttributeSet;

@end

