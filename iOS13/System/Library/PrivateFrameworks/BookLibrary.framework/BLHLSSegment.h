/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(BLHLSKey *)key;
-(BLHLSMap *)map;
-(NSURL *)url;
-(double)duration;
-(id)initWithURL:(id)arg1 duration:(double)arg2 map:(id)arg3 key:(id)arg4 ;
@end

