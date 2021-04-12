/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUILibraryMenuDataSource.h>

@class NSString, NSArray, VUIMediaAPIClient;

@interface VUIFamilySharingMenuDataSource : VUILibraryMenuDataSource {

	BOOL _hasFetchedGenres;
	BOOL _hasFetchedRecentPurchases;
	BOOL _hasFetchedMovies;
	BOOL _hasFetchedShows;
	BOOL _hasRecentPurchases;
	BOOL _hasMovies;
	BOOL _hasShows;
	NSString* _ownerIdentifier;
	NSArray* _genres;
	VUIMediaAPIClient* _mediaClient;

}

@property (nonatomic,retain) NSArray * genres;                             //@synthesize genres=_genres - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedGenres;                        //@synthesize hasFetchedGenres=_hasFetchedGenres - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedRecentPurchases;               //@synthesize hasFetchedRecentPurchases=_hasFetchedRecentPurchases - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedMovies;                        //@synthesize hasFetchedMovies=_hasFetchedMovies - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedShows;                         //@synthesize hasFetchedShows=_hasFetchedShows - In the implementation block
@property (assign,nonatomic) BOOL hasRecentPurchases;                      //@synthesize hasRecentPurchases=_hasRecentPurchases - In the implementation block
@property (assign,nonatomic) BOOL hasMovies;                               //@synthesize hasMovies=_hasMovies - In the implementation block
@property (assign,nonatomic) BOOL hasShows;                                //@synthesize hasShows=_hasShows - In the implementation block
@property (nonatomic,retain) VUIMediaAPIClient * mediaClient;              //@synthesize mediaClient=_mediaClient - In the implementation block
@property (nonatomic,retain) NSString * ownerIdentifier;                   //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
-(void)setOwnerIdentifier:(NSString *)arg1 ;
-(NSString *)ownerIdentifier;
-(BOOL)hasMovies;
-(NSArray *)genres;
-(void)setGenres:(NSArray *)arg1 ;
-(void)startFetch;
-(id)initWithValidCategories:(id)arg1 ;
-(VUIMediaAPIClient *)mediaClient;
-(void)setMediaClient:(VUIMediaAPIClient *)arg1 ;
-(void)_fetchGenres;
-(void)_fetchRecentPurchases;
-(void)_fetchMovies;
-(void)_fetchShows;
-(void)setHasFetchedGenres:(BOOL)arg1 ;
-(BOOL)_hasCompletedAllFetches;
-(id)_constructVUIMenuDataSource;
-(void)_notifyDelegatesFetchDidComplete;
-(void)setHasFetchedRecentPurchases:(BOOL)arg1 ;
-(void)setHasRecentPurchases:(BOOL)arg1 ;
-(void)setHasFetchedMovies:(BOOL)arg1 ;
-(void)setHasMovies:(BOOL)arg1 ;
-(void)setHasFetchedShows:(BOOL)arg1 ;
-(void)setHasShows:(BOOL)arg1 ;
-(id)_constructMainMenuItems;
-(id)_constructGenreMenuItems;
-(BOOL)hasRecentPurchases;
-(BOOL)hasShows;
-(/*^block*/id)_categoryTypesSortComparator;
-(id)getGenreByGenreTitle:(id)arg1 ;
-(BOOL)hasFetchedGenres;
-(BOOL)hasFetchedRecentPurchases;
-(BOOL)hasFetchedMovies;
-(BOOL)hasFetchedShows;
@end

