/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)numVenuesExpected;
-(BOOL)_openTileFileForIncrementalIO;
-(NSURL *)path;
-(BOOL)getNextVenueBoundsIncrementally:(VenueBounds*)arg1 ;
-(int)numTotalExpectedExteriorsInVenues;
-(id)initWithEmptyTile;
-(unsigned long long)venuesCount;
-(AvailabilityTile*)getAvlTile;
-(BOOL)tileIsOpenForIncrementalIO;
-(id)initWithTilePathIncrementalIO:(id)arg1 ;
@end

