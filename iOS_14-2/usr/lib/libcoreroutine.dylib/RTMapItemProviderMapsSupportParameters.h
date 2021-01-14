/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTMapItemProviderMapsSupportParameters : NSObject {

	double _favoriteConfidence;
	double _historyEntryRouteConfidence;
	double _historyEntryPlaceDisplayConfidence;

}

@property (nonatomic,readonly) double favoriteConfidence;                              //@synthesize favoriteConfidence=_favoriteConfidence - In the implementation block
@property (nonatomic,readonly) double historyEntryRouteConfidence;                     //@synthesize historyEntryRouteConfidence=_historyEntryRouteConfidence - In the implementation block
@property (nonatomic,readonly) double historyEntryPlaceDisplayConfidence;              //@synthesize historyEntryPlaceDisplayConfidence=_historyEntryPlaceDisplayConfidence - In the implementation block
-(id)init;
-(id)description;
-(id)initWithDefaultsManager:(id)arg1 ;
-(double)favoriteConfidence;
-(double)historyEntryRouteConfidence;
-(double)historyEntryPlaceDisplayConfidence;
-(id)initWithFavoriteConfidence:(double)arg1 historyEntryRouteConfidence:(double)arg2 historyEntryPlaceDisplayConfidence:(double)arg3 ;
@end

