/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOMapFeatureAccess;

@interface GEORoadMatcher : NSObject {

	GEOMapFeatureAccess* _mapFeatureAccess;
	BOOL _useRawLocations;

}

@property (assign,nonatomic) BOOL useRawLocations;              //@synthesize useRawLocations=_useRawLocations - In the implementation block
-(id)init;
-(id)_bestCandidateSegmentForLocation:(id)arg1 transportType:(int)arg2 ;
-(BOOL)useRawLocations;
-(id)matchLocation:(id)arg1 forTransportType:(int)arg2 ;
-(void)setUseRawLocations:(BOOL)arg1 ;
-(void)dealloc;
@end

