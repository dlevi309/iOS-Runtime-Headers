/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSITable.h>

@class PSIStatement;

@interface PSIWordEmbeddingTable : PSITable {

	PSIStatement* _insertStatement;
	PSIStatement* _insertPrefixStatement;
	PSIStatement* _deleteStatement;
	PSIStatement* _deletePrefixStatement;
	PSIStatement* _checkStatement;
	PSIStatement* _selectMatchesStatement;
	PSIStatement* _selectStatement;
	CFLocaleRef _locale;
	BOOL _localeIsGerman;

}
-(void)clear;
-(id)wordEmbeddingVersion;
-(void)finalizze;
-(id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 locale:(id)arg4 ;
-(void)cacheWritableStatements;
-(void)cacheSearchableStatements;
-(id)dumpWordEmbeddingTable;
-(id)matchesForToken:(id)arg1 ;
-(id)wordEmbeddingsForToken:(id)arg1 ;
-(BOOL)isInsertedWithWord:(id)arg1 ;
-(void)insertWord:(id)arg1 synonyms:(id)arg2 ;
-(void)removeWord:(id)arg1 ;
@end

