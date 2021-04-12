/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

