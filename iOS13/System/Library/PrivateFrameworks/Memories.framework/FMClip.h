/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class NSURL;

@interface FMClip : NSObject {

	NSURL* _url;
	long long _position;
	long long _offset;
	long long _duration;
	long long _fadeInLength;
	long long _fadeOutLength;

}

@property (nonatomic,retain) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long position;                   //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) long long offset;                     //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) long long duration;                   //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long fadeInLength;               //@synthesize fadeInLength=_fadeInLength - In the implementation block
@property (assign,nonatomic) long long fadeOutLength;              //@synthesize fadeOutLength=_fadeOutLength - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)url;
-(long long)position;
-(long long)duration;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(void)setDuration:(long long)arg1 ;
-(long long)fadeInLength;
-(void)setFadeInLength:(long long)arg1 ;
-(long long)fadeOutLength;
-(void)setFadeOutLength:(long long)arg1 ;
@end

