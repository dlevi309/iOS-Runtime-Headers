/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)playCount;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(NSNumber *)bookmarkTime;
-(NSNumber *)hasBeenPlayed;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(void)setBookmarkTime:(NSNumber *)arg1 ;
@end

