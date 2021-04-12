/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_mergeItem:(id)arg1 intoItem:(id)arg2 ;
+(id)transactionToMutateSeenArticlesWithInsertedOrUpdatedHistoryItems:(id)arg1 deletedArticleIDs:(id)arg2 ;
+(id)transactionToClearSeenArticles;
+(id)collapsedTransactionOfTransactions:(id)arg1 ;
+(id)transactionOfIdentity;
-(id)init;
-(void)setInsertedOrUpdatedHistoryItems:(NSArray *)arg1 ;
-(void)setTransactionType:(unsigned long long)arg1 ;
-(void)_mergeItem:(id)arg1 intoItem:(id)arg2 ;
-(NSArray *)insertedOrUpdatedHistoryItems;
-(NSSet *)deletedArticleIDs;
-(id)initWithTransactionType:(unsigned long long)arg1 insertedOrUpdatedHistoryItems:(id)arg2 deletedArticleIDs:(id)arg3 ;
-(/*^block*/id)todayPrivateDataAccessor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)transactionType;
-(void)setDeletedArticleIDs:(NSSet *)arg1 ;
@end

