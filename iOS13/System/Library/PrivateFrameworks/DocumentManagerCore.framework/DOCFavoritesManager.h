/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/

#import <DocumentManagerCore/DOCItemCollectionObserver.h>

@class NSArray;

@interface DOCFavoritesManager : DOCItemCollectionObserver

@property (readonly) NSArray * favoritedLocations; 
+(id)sharedManager;
-(void)addFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertFavorite:(id)arg1 atIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)favoritedLocations;
-(void)favoriteItems:(id)arg1 ranks:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveFavorite:(id)arg1 toTargetIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)redistributeRanksCompletion:(/*^block*/id)arg1 ;
-(void)insertFavorites:(id)arg1 atIndex:(long long)arg2 ;
-(void)runInMainThread:(/*^block*/id)arg1 ;
@end

