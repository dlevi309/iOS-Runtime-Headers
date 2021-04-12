/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOMapServiceTicket;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList, NSMutableSet, NSMutableArray;

@interface _GEOTransitPreloadBatch : NSObject {

	GEOTileKeyList* _tilesToLoad;
	NSMutableSet* _placeDatasToLoad;
	unsigned long long status;
	unsigned long long generation;
	unsigned long long errCount;
	unsigned long long bytesLoaded;
	unsigned long long bytesLoadedFromNetwork;
	double startTime;
	double endTime;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* coords;
	NSMutableArray* _latLngToLoad;
	unsigned priority;
	id<GEOMapServiceTicket> placeDataRequestTicketForBatch;
	double endTimeForScheduleFreshness;

}

@property (nonatomic,retain) GEOTileKeyList * tilesToLoad;                 //@synthesize tilesToLoad=_tilesToLoad - In the implementation block
@property (nonatomic,retain) NSMutableSet * placeDatasToLoad;              //@synthesize placeDatasToLoad=_placeDatasToLoad - In the implementation block
-(id)init;
-(double)networkDataRateKB;
-(GEOTileKeyList *)tilesToLoad;
-(void)setTilesToLoad:(GEOTileKeyList *)arg1 ;
-(NSMutableSet *)placeDatasToLoad;
-(void)setPlaceDatasToLoad:(NSMutableSet *)arg1 ;
@end

