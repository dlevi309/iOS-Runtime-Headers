/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/

#import <DocumentManagerCore/DOCItemCollectionObserver.h>

@class NSArray;

@interface DOCFavoritesManager : DOCItemCollectionObserver

@property (readonly) NSArray * favoritedLocations; 
@property (readonly) BOOL isGathering; 
+(id)sharedManager;
-(BOOL)isGathering;
-(void)addFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertFavorite:(id)arg1 atIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_reverseInsertAll:(id)arg1 atIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)favoritedLocations;
-(id)_newlyComputedRanksForItems:(id)arg1 ;
-(void)favoriteItems:(id)arg1 ranks:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveFavorite:(id)arg1 toTargetIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)redistributeRanksCompletion:(/*^block*/id)arg1 ;
-(void)insertFavorites:(id)arg1 atIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateFavoritesRanksToMatchOrderedFavorites:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runInMainThread:(/*^block*/id)arg1 ;
@end

