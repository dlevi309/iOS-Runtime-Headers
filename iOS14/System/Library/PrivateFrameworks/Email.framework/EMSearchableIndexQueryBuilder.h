/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMaxCount:(long long)arg1;
-(long long)maxCount;
-(id)completionBlock;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(BOOL)live;
-(void)setProtectionClasses:(id)arg1;
-(NSArray *)rankingQueries;
-(BOOL)counting;
-(NSArray *)protectionClasses;
-(NSArray *)fetchAttributes;
-(void)setCounting:(BOOL)arg1;
-(NSString *)bundleIdentifier;
-(NSString *)logIdentifier;
-(void)setLive:(BOOL)arg1;
-(void)setBundleIdentifier:(id)arg1;
-(id)resultsBlock;
-(void)setResultsBlock:(/*^block*/id)arg1;
-(id)gatheredBlock;
-(id)removedItemsBlock;
-(id)changedItemsBlock;
-(id)countChangedBlock;
-(void)setFailureBlock:(/*^block*/id)arg1;
-(void)setGatheredBlock:(/*^block*/id)arg1;
-(void)setChangedItemsBlock:(/*^block*/id)arg1;
-(void)setCountChangedBlock:(/*^block*/id)arg1;
-(void)setRemovedItemsBlock:(/*^block*/id)arg1;
-(void)setLogIdentifier:(id)arg1;
-(void)setRankingQueries:(id)arg1;
-(id)failureBlock;
-(void)setFetchAttributes:(id)arg1;

@end

