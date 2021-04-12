/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSString, NSArray;


@protocol EMSearchableIndexQueryBuilder <NSObject>
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) id resultsBlock; 
@property (nonatomic,copy) id completionBlock; 
@property (nonatomic,copy) id failureBlock; 
@property (nonatomic,copy) id gatheredBlock; 
@property (nonatomic,copy) id changedItemsBlock; 
@property (nonatomic,copy) id removedItemsBlock; 
@property (nonatomic,copy) id countChangedBlock; 
@property (nonatomic,copy) NSArray * fetchAttributes; 
@property (nonatomic,copy) NSArray * protectionClasses; 
@property (nonatomic,copy) NSArray * rankingQueries; 
@property (assign,nonatomic) long long maxCount; 
@property (assign,nonatomic) BOOL live; 
@property (assign,nonatomic) BOOL counting; 
@property (nonatomic,copy) NSString * logIdentifier; 
@required
-(NSString *)bundleIdentifier;
-(id)completionBlock;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(void)setBundleIdentifier:(id)arg1;
-(void)setMaxCount:(long long)arg1;
-(long long)maxCount;
-(NSString *)logIdentifier;
-(void)setProtectionClasses:(id)arg1;
-(void)setFetchAttributes:(id)arg1;
-(void)setLive:(BOOL)arg1;
-(id)failureBlock;
-(void)setFailureBlock:(/*^block*/id)arg1;
-(NSArray *)fetchAttributes;
-(NSArray *)protectionClasses;
-(NSArray *)rankingQueries;
-(void)setRankingQueries:(id)arg1;
-(BOOL)live;
-(BOOL)counting;
-(void)setCounting:(BOOL)arg1;
-(id)resultsBlock;
-(void)setResultsBlock:(/*^block*/id)arg1;
-(id)gatheredBlock;
-(id)removedItemsBlock;
-(id)changedItemsBlock;
-(id)countChangedBlock;
-(void)setGatheredBlock:(/*^block*/id)arg1;
-(void)setChangedItemsBlock:(/*^block*/id)arg1;
-(void)setCountChangedBlock:(/*^block*/id)arg1;
-(void)setRemovedItemsBlock:(/*^block*/id)arg1;
-(void)setLogIdentifier:(id)arg1;

@end

