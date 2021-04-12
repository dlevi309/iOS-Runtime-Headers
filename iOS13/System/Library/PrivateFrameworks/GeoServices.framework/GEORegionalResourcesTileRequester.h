/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>

@class NSMutableArray, geo_isolater, GEOTileKeyMap;

@interface GEORegionalResourcesTileRequester : GEOTileRequester {

	NSMutableArray* _loaders;
	geo_isolater* _loadersIsolater;
	GEOTileKeyMap* _signpostIDs;
	geo_isolater* _signpostIDsIsolater;

}
+(unsigned char)tileProviderIdentifier;
-(void)cancel;
-(void)start;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(void)_generateEndSignpostEventIfNecessary:(GEOTileKey)arg1 ;
@end

