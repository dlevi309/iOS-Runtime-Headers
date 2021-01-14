/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelSong;

@interface MPStoreLyricsRequest : NSObject <NSCopying> {

	MPModelSong* _song;

}

@property (nonatomic,retain) MPModelSong * song;              //@synthesize song=_song - In the implementation block
+(BOOL)supportsLyricsForURLBagDictionary:(id)arg1 ;
-(MPModelSong *)song;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setSong:(MPModelSong *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

