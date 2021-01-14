/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dumpWordEmbeddingTable;
-(id)wordEmbeddingVersion;
-(id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 locale:(id)arg4 ;
-(id)wordEmbeddingsForToken:(id)arg1 ;
-(void)cacheSearchableStatements;
-(void)cacheWritableStatements;
-(void)insertWord:(id)arg1 synonyms:(id)arg2 ;
-(id)matchesForToken:(id)arg1 ;
-(BOOL)isInsertedWithWord:(id)arg1 ;
-(void)finalizze;
-(void)removeWord:(id)arg1 ;
@end

