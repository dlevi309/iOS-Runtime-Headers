/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


#import <CoreIndoor/CoreIndoor-Structs.h>
@class NSURL;

@interface CLAvailabilityTileParser : NSObject {

	shared_ptr<AvailabilityTile>* _avlTile;
	NSURL* _path;

}

@property (nonatomic,readonly) NSURL * path;              //@synthesize path=_path - In the implementation block
+(void)_setParamOverrides:(LocalizerParameters*)arg1 fromDict:(id)arg2 ;
+(BOOL)generateAvlTileFromJSON:(id)arg1 atPath:(id)arg2 ;
-(id)init;
-(NSURL *)path;
-(unsigned long long)venuesCount;
-(BOOL)tileIsOpenForIncrementalIO;
-(BOOL)_openTileFileForIncrementalIO;
-(int)numTotalExpectedExteriorsInVenues;
-(int)numVenuesExpected;
-(BOOL)getNextVenueBoundsIncrementally:(VenueBounds*)arg1 ;
-(id)initWithEmptyTile;
-(id)initWithTilePathIncrementalIO:(id)arg1 ;
-(AvailabilityTile*)getAvlTile;
@end

