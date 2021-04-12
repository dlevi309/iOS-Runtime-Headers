/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIMediaAPIRequestFactory : NSObject
+(id)seasonsRequestWithShowIdentifier:(id)arg1 withOwnerIdentifier:(id)arg2 ;
+(id)episodesRequestWithShowIdentifier:(id)arg1 withOwnerIdentifier:(id)arg2 ;
+(id)recentPurchasesRequestWithOwnerIdentifier:(id)arg1 ;
+(id)showsPurchasesRequestWithOwnerIdentifier:(id)arg1 ;
+(id)moviesPurchasesRequestWithOwnerIdentifier:(id)arg1 ;
+(id)genresRequestForVUIFamilySharingGenre:(id)arg1 withOwnerIdentifier:(id)arg2 ;
+(id)genresRequestWithOwnerIdentifier:(id)arg1 ;
+(id)familyMembersRequest;
+(id)_URLRequestWithURLString:(id)arg1 ;
+(id)_URLParameterForAdditionalParameters;
+(id)_URLParameterTypeFilterWithTypes:(id)arg1 ;
+(id)_URLParameterForSort:(id)arg1 ;
+(id)_URLAddAdditionalParameter:(id)arg1 ;
+(id)_URLParameterWithSharedPurchases;
+(id)_URLParameterForLimit:(id)arg1 ;
+(id)_URLParameterWithOwnerIdentifier:(id)arg1 ;
+(id)_URLParameterForExtend:(id)arg1 ;
+(id)_purchasesEpisodesEndpoint;
+(id)_URLParameterFilterWithShowIdentifier:(id)arg1 ;
+(id)_URLParameterForInclude:(id)arg1 ;
+(id)_URLParameterWithGenreFilter:(id)arg1 ;
+(void)_addTypeFilterToURL:(id*)arg1 forRequest:(id)arg2 ;
@end

