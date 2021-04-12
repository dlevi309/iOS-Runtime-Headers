/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(void)start;
-(void)_generateEndSignpostEventIfNecessary:(GEOTileKey)arg1 ;
-(void)cancel;
@end

