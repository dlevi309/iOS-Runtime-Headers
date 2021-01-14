/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class BLHLSMap, NSURL, BLHLSKey;

@interface BLHLSSegment : NSObject {

	BLHLSMap* _map;
	NSURL* _url;
	double _duration;
	BLHLSKey* _key;

}

@property (nonatomic,readonly) BLHLSMap * map;               //@synthesize map=_map - In the implementation block
@property (nonatomic,readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) double duration;              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BLHLSKey * key;               //@synthesize key=_key - In the implementation block
-(NSURL *)url;
-(id)description;
-(id)initWithURL:(id)arg1 duration:(double)arg2 map:(id)arg3 key:(id)arg4 ;
-(BLHLSMap *)map;
-(BLHLSKey *)key;
-(double)duration;
@end

