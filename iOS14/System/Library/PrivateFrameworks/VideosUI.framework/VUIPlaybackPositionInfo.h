/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface VUIPlaybackPositionInfo : NSObject <NSCopying> {

	NSNumber* _bookmarkTime;
	NSNumber* _playCount;
	NSNumber* _hasBeenPlayed;

}

@property (nonatomic,retain) NSNumber * bookmarkTime;               //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (nonatomic,retain) NSNumber * playCount;                  //@synthesize playCount=_playCount - In the implementation block
@property (nonatomic,retain) NSNumber * hasBeenPlayed;              //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
-(NSNumber *)playCount;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(void)setBookmarkTime:(NSNumber *)arg1 ;
-(NSNumber *)hasBeenPlayed;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(NSNumber *)bookmarkTime;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

