/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOMapFeatureAccess;

@interface GEORoadMatcher : NSObject {

	GEOMapFeatureAccess* _mapFeatureAccess;
	BOOL _useRawLocations;

}

@property (assign,nonatomic) BOOL useRawLocations;              //@synthesize useRawLocations=_useRawLocations - In the implementation block
-(id)init;
-(void)dealloc;
-(id)matchLocation:(id)arg1 forTransportType:(int)arg2 ;
-(void)setUseRawLocations:(BOOL)arg1 ;
-(id)_bestCandidateSegmentForLocation:(id)arg1 transportType:(int)arg2 ;
-(BOOL)useRawLocations;
@end

