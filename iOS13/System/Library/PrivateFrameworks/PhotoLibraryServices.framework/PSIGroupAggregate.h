/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSMutableArray, NSObject, NSString, PSIGroup;

@interface PSIGroupAggregate : NSObject {

	NSArray* _searchTokens;
	NSMutableArray* _groupAggregateItems;
	NSMutableArray* _aggregatedGroupIds;
	NSMutableArray* _aggregateItemPool;
	unsigned long long _filenameGroupCount;
	NSObject*<OS_dispatch_queue> _groupResultsQueue;
	NSString* _transientToken;
	PSIGroup* _filenameGroupInAggregate;

}

@property (nonatomic,readonly) NSArray * searchTokens;                           //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,copy) NSString * transientToken;                            //@synthesize transientToken=_transientToken - In the implementation block
@property (nonatomic,readonly) PSIGroup * filenameGroupInAggregate;              //@synthesize filenameGroupInAggregate=_filenameGroupInAggregate - In the implementation block
-(void)pop;
-(void)setTransientToken:(NSString *)arg1 ;
-(id)initWithSearchTokens:(id)arg1 groupResultsQueue:(id)arg2 ;
-(BOOL)pushGroup:(id)arg1 ;
-(PSIGroup *)filenameGroupInAggregate;
-(NSString *)transientToken;
-(id)newGroupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2 ;
-(NSArray *)searchTokens;
-(NSRange)_rangeOfString:(id)arg1 inGroup:(id)arg2 useNormalizedString:(BOOL)arg3 extendingSearchRange:(BOOL)arg4 matchingFullToken:(BOOL)arg5 excludingRanges:(id)arg6 ;
-(id)aggregateItemWithSearchToken:(id)arg1 rangeMatchingToken:(id)arg2 group:(id)arg3 ;
-(BOOL)_verifySortedGroupIdsUnique;
-(CFArrayRef)_newSortedGroupIds;
-(id)newGroupResult;
@end

