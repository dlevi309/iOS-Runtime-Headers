/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class NSMutableArray, NSDictionary, NSIndexSet, NSMutableIndexSet;

@interface CNAutocompleteQueryResponseUniqueResultFinder : NSObject {

	NSMutableArray* _uniqueResults;
	NSMutableArray* _hashes;
	NSDictionary* _hashIndex;
	NSIndexSet* _firstIndexes;
	NSMutableIndexSet* _uniqueResultIndexes;
	/*^block*/id _duplicateResultHandler;

}
+(id)findUniqueResults:(id)arg1 duplicateResultHandler:(/*^block*/id)arg2 ;
-(void)removeDuplicateResults;
-(id)initWithResults:(id)arg1 duplicateResultHandler:(/*^block*/id)arg2 ;
-(id)findUniqueResults;
-(void)generateHashes;
-(void)indexHashes;
-(void)resolveDuplicatesWithinIndexes:(id)arg1 ;
@end

