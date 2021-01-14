/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPContainer.h>

@interface MSPFavoritesContainer : MSPContainer
+(id)sharedRemoteContainer;
+(id)sharedLocalContainer;
-(id)queryWithDelegate:(id)arg1 ;
-(id)placesQueryWithDelegate:(id)arg1 ;
-(void)moveFavoriteWithIdentifier:(id)arg1 belowFavoriteWithIdentifier:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)moveFavorite:(id)arg1 belowFavorite:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)transiteLinesQueryWithDelegate:(id)arg1 ;
-(void)deDuplicateFavoritesWithCompletion:(/*^block*/id)arg1 ;
@end

