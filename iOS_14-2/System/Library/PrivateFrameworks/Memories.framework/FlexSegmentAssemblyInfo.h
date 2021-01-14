/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class FlexSegment, NSURL;

@interface FlexSegmentAssemblyInfo : NSObject {

	FlexSegment* _segment;
	long long _barsUsed;
	NSURL* _url;
	long long _offset;
	long long _duration;

}

@property (nonatomic,retain) FlexSegment * segment;              //@synthesize segment=_segment - In the implementation block
@property (assign,nonatomic) long long barsUsed;                 //@synthesize barsUsed=_barsUsed - In the implementation block
@property (nonatomic,retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) long long duration;                 //@synthesize duration=_duration - In the implementation block
-(void)setDuration:(long long)arg1 ;
-(FlexSegment *)segment;
-(NSURL *)url;
-(long long)offset;
-(id)description;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setOffset:(long long)arg1 ;
-(long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSegment:(FlexSegment *)arg1 ;
-(long long)barsUsed;
-(void)setBarsUsed:(long long)arg1 ;
@end

