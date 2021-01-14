/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMapTable;

@interface GEOSpatialPlaceLookupResult : NSObject {

	NSMapTable* _parametersToMapItemsMap;
	NSMapTable* _parametersToResultItemMap;

}
-(id)mapItemsForSpatialLookupParameters:(id)arg1 ;
-(id)resultItemForSpatialLookupParameters:(id)arg1 ;
-(id)init;
-(id)initWithMapItemMap:(id)arg1 resultItemMap:(id)arg2 ;
@end

