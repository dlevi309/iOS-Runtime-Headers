/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchController.h>

@class NSSet, NSArray, IMTimingCollection;

@interface CKMessageTypeSearchController : CKSearchController {

	BOOL _searchTerminated;
	BOOL _gotResults;
	NSSet* _intermediaryResults;
	NSArray* _resultsToCheck;
	IMTimingCollection* _timingCollection;

}

@property (nonatomic,retain) NSSet * intermediaryResults;                        //@synthesize intermediaryResults=_intermediaryResults - In the implementation block
@property (assign,nonatomic) BOOL gotResults;                                    //@synthesize gotResults=_gotResults - In the implementation block
@property (assign,nonatomic) BOOL searchTerminated;                              //@synthesize searchTerminated=_searchTerminated - In the implementation block
@property (nonatomic,retain) NSArray * resultsToCheck;                           //@synthesize resultsToCheck=_resultsToCheck - In the implementation block
@property (nonatomic,retain) IMTimingCollection * timingCollection;              //@synthesize timingCollection=_timingCollection - In the implementation block
+(id)timeRankedQueries;
+(BOOL)useRecencyRankedSearchForMode:(unsigned long long)arg1 ;
+(unsigned long long)recencyRankedTargetResultCount;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(void)fractionalWidth:(double*)arg1 count:(unsigned long long*)arg2 forLayoutWidth:(unsigned long long)arg3 ;
-(void)_IMSPIQueryMessageItemsWithGUIDs:(id)arg1 results:(/*^block*/id)arg2 ;
-(id)queryResultsForItems:(id)arg1 ;
-(void)postProcessAndUpdateResults:(id)arg1 ;
-(void)deleteAttachmentForResult:(id)arg1 ;
-(void)searchWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(void)searchEnded;
-(void)setTimingCollection:(IMTimingCollection *)arg1 ;
-(BOOL)searchTerminated;
-(void)setGotResults:(BOOL)arg1 ;
-(NSSet *)intermediaryResults;
-(void)setIntermediaryResults:(NSSet *)arg1 ;
-(void)setSearchTerminated:(BOOL)arg1 ;
-(void)setResultsToCheck:(NSArray *)arg1 ;
-(void)checkIfResultsExistOnDiskAndNotify:(id)arg1 ;
-(void)_asyncCheckIfResultsExistOnDisk:(id)arg1 firstBatch:(BOOL)arg2 ;
-(IMTimingCollection *)timingCollection;
-(NSArray *)resultsToCheck;
-(id)menuActionsForResult:(id)arg1 atRect:(CGRect)arg2 ;
-(BOOL)wantsDeleteAction;
-(id)zkwFilterQueries;
-(id)rankingQueriesWithText:(id)arg1 ;
-(BOOL)wantsFooterSection;
-(Class)footerClass;
-(BOOL)gotResults;
@end

