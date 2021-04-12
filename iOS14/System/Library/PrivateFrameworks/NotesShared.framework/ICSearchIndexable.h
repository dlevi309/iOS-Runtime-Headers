/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol ICSearchIndexable <NSObject>
@optional
-(id)dataForTypeIdentifier:(id)arg1;
-(id)fileURLForTypeIdentifier:(id)arg1;

@required
-(id)modificationDate;
-(id)managedObjectContext;
-(unsigned long long)searchResultType;
-(id)dataSourceIdentifier;
-(id)contentIdentifier;
-(id)objectID;
-(id)searchDomainIdentifier;
-(id)creationDate;
-(id)userActivityContentAttributeSet;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(id)searchIndexingIdentifier;
-(id)searchableItemAttributeSet;
-(BOOL)isDeletable;
-(BOOL)isMovable;

@end

