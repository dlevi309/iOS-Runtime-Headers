/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSArray;


@protocol FCAudioPlaylistType
@property (nonatomic,readonly) NSArray * articleIDs; 
@required
-(void)addObserver:(id)arg1;
-(void)removeArticleID:(id)arg1;
-(NSArray *)articleIDs;
-(BOOL)containsArticleID:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)ensureSyncedWithCompletion:(/*^block*/id)arg1;
-(void)insertArticleID:(id)arg1 atIndex:(unsigned long long)arg2;

@end

