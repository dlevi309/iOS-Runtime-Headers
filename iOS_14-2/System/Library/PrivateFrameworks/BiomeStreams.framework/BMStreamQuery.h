/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/


@protocol BMStream;
@class NSDateInterval;

@interface BMStreamQuery : NSObject {

	id<BMStream> _stream;
	NSDateInterval* _interval;
	long long _origin;

}

@property (nonatomic,readonly) id<BMStream> stream;                    //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSDateInterval * interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) long long origin;                       //@synthesize origin=_origin - In the implementation block
+(id)publisherForStream:(id)arg1 interval:(id)arg2 origin:(long long)arg3 ;
+(id)publisherForStream:(id)arg1 interval:(id)arg2 ;
-(id<BMStream>)stream;
-(long long)origin;
-(id)init;
-(NSDateInterval *)interval;
-(id)initWithStream:(id)arg1 interval:(id)arg2 origin:(long long)arg3 ;
@end

