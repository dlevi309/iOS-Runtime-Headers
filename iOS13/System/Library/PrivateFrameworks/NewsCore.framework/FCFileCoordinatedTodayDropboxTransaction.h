/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSSet;

@interface FCFileCoordinatedTodayDropboxTransaction : NSObject <NSCopying> {

	unsigned long long _transactionType;
	NSArray* _insertedOrUpdatedHistoryItems;
	NSSet* _deletedArticleIDs;

}

@property (assign,nonatomic) unsigned long long transactionType;                 //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,copy) NSArray * insertedOrUpdatedHistoryItems;              //@synthesize insertedOrUpdatedHistoryItems=_insertedOrUpdatedHistoryItems - In the implementation block
@property (nonatomic,copy) NSSet * deletedArticleIDs;                            //@synthesize deletedArticleIDs=_deletedArticleIDs - In the implementation block
+(id)transactionToMutateSeenArticlesWithInsertedOrUpdatedHistoryItems:(id)arg1 deletedArticleIDs:(id)arg2 ;
+(void)_mergeItem:(id)arg1 intoItem:(id)arg2 ;
+(id)transactionOfIdentity;
+(id)transactionToClearSeenArticles;
+(id)collapsedTransactionOfTransactions:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTransactionType:(unsigned long long)arg1 ;
-(unsigned long long)transactionType;
-(NSSet *)deletedArticleIDs;
-(void)setDeletedArticleIDs:(NSSet *)arg1 ;
-(id)initWithTransactionType:(unsigned long long)arg1 insertedOrUpdatedHistoryItems:(id)arg2 deletedArticleIDs:(id)arg3 ;
-(NSArray *)insertedOrUpdatedHistoryItems;
-(void)_mergeItem:(id)arg1 intoItem:(id)arg2 ;
-(/*^block*/id)todayPrivateDataAccessor;
-(void)setInsertedOrUpdatedHistoryItems:(NSArray *)arg1 ;
@end

