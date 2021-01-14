/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelPlaylist;

@interface MPModelPlaylistEntriesShareEligibilityRequest : NSObject <NSCopying> {

	MPModelPlaylist* _playlist;

}

@property (nonatomic,readonly) MPModelPlaylist * playlist;              //@synthesize playlist=_playlist - In the implementation block
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelPlaylist *)playlist;
-(id)initWithPlaylist:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

