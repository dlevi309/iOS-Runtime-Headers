/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPContainer.h>

@interface MSPFavoritesContainer : MSPContainer
+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(id)placesQueryWithDelegate:(id)arg1 ;
-(id)queryWithDelegate:(id)arg1 ;
-(void)moveFavoriteWithIdentifier:(id)arg1 belowFavoriteWithIdentifier:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)moveFavorite:(id)arg1 belowFavorite:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)transiteLinesQueryWithDelegate:(id)arg1 ;
-(void)deDuplicateFavoritesWithCompletion:(/*^block*/id)arg1 ;
@end

