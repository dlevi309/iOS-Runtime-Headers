/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchController.h>

@class NSSet, NSString, NSArray, IMTimingCollection, NSMutableSet;

@interface CKMessageTypeSearchController : CKSearchController {

	BOOL _searchTerminated;
	BOOL _gotResults;
	NSSet* _intermediaryResults;
	NSString* _priorQueryIdentifier;
	NSArray* _resultsToCheck;
	IMTimingCollection* _timingCollection;
	NSMutableSet* _itemsVerifiedOnDiskCache;

}

@property (nonatomic,retain) NSSet * intermediaryResults;                          //@synthesize intermediaryResults=_intermediaryResults - In the implementation block
@property (assign,nonatomic) BOOL gotResults;                                      //@synthesize gotResults=_gotResults - In the implementation block
@property (assign,nonatomic) BOOL searchTerminated;                                //@synthesize searchTerminated=_searchTerminated - In the implementation block
@property (nonatomic,retain) NSString * priorQueryIdentifier;                      //@synthesize priorQueryIdentifier=_priorQueryIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * resultsToCheck;                             //@synthesize resultsToCheck=_resultsToCheck - In the implementation block
@property (nonatomic,retain) IMTimingCollection * timingCollection;                //@synthesize timingCollection=_timingCollection - In the implementation block
@property (nonatomic,retain) NSMutableSet * itemsVerifiedOnDiskCache;              //@synthesize itemsVerifiedOnDiskCache=_itemsVerifiedOnDiskCache - In the implementation block
+(id)timeRankedQueries;
+(BOOL)useRecencyRankedSearchForMode:(unsigned long long)arg1 ;
+(unsigned long long)recencyRankedTargetResultCount;
-(void)searchWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(void)searchEnded;
-(BOOL)gotResults;
-(Class)footerClass;
-(void)setTimingCollection:(IMTimingCollection *)arg1 ;
-(BOOL)searchTerminated;
-(void)setGotResults:(BOOL)arg1 ;
-(NSSet *)intermediaryResults;
-(NSArray *)resultsToCheck;
-(void)setIntermediaryResults:(NSSet *)arg1 ;
-(NSMutableSet *)itemsVerifiedOnDiskCache;
-(void)setItemsVerifiedOnDiskCache:(NSMutableSet *)arg1 ;
-(void)setSearchTerminated:(BOOL)arg1 ;
-(void)setResultsToCheck:(NSArray *)arg1 ;
-(void)checkIfResultsExistOnDiskAndNotify:(id)arg1 ;
-(void)_asyncCheckIfResultsExistOnDisk:(id)arg1 firstBatch:(BOOL)arg2 ;
-(NSString *)priorQueryIdentifier;
-(IMTimingCollection *)timingCollection;
-(void)setPriorQueryIdentifier:(NSString *)arg1 ;
-(id)menuElementsForResult:(id)arg1 atRect:(CGRect)arg2 ;
-(BOOL)wantsDeleteAction;
-(id)zkwFilterQueries;
-(id)rankingQueriesWithText:(id)arg1 ;
-(BOOL)wantsFooterSection;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(void)fractionalWidth:(double*)arg1 count:(unsigned long long*)arg2 forLayoutWidth:(unsigned long long)arg3 ;
-(id)queryResultsForItems:(id)arg1 ;
-(void)postProcessAndUpdateResults:(id)arg1 ;
-(id)itemProviderForSearchResult:(id)arg1 ;
-(void)deleteAttachmentForResult:(id)arg1 ;
@end

