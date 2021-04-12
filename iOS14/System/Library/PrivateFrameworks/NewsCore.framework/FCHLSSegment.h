/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCHLSMap, NSURL, FCHLSKey;

@interface FCHLSSegment : NSObject {

	FCHLSMap* _map;
	NSURL* _url;
	double _duration;
	FCHLSKey* _key;

}

@property (nonatomic,readonly) FCHLSMap * map;               //@synthesize map=_map - In the implementation block
@property (nonatomic,readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) double duration;              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) FCHLSKey * key;               //@synthesize key=_key - In the implementation block
-(NSURL *)url;
-(id)description;
-(id)initWithURL:(id)arg1 duration:(double)arg2 map:(id)arg3 key:(id)arg4 ;
-(FCHLSMap *)map;
-(FCHLSKey *)key;
-(double)duration;
@end

