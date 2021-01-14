/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOCategorySuggestionsManagerServerProxy;
@interface GEOCategorySuggestionsManager : NSObject {

	id<GEOCategorySuggestionsManagerServerProxy> _serverProxy;

}
+(id)sharedManager;
+(void)setUseLocalProxy:(BOOL)arg1 ;
-(id)init;
-(void)fetchSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
-(id)_categorySuggestionsForSuggestionsResult:(id)arg1 dayOfWeek:(long long)arg2 hourOfDay:(long long)arg3 ;
-(id)_spotlightCategorySuggestionsForResponse:(id)arg1 ;
-(void)updateCachedSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
@end

