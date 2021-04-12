/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPMediaItem, NSString;

@interface MPMusicPlayerControllerNowPlaying : NSObject <NSSecureCoding> {

	MPMediaItem* _item;
	NSString* _itemIdentifier;
	NSString* _artworkIdentifier;
	long long _index;
	long long _count;

}

@property (nonatomic,readonly) MPMediaItem * item;                        //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                 //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,readonly) long long index;                           //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long count;                           //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nowPlayingWithItem:(id)arg1 itemIdentifier:(id)arg2 artworkIdentifier:(id)arg3 index:(long long)arg4 count:(long long)arg5 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(long long)index;
-(MPMediaItem *)item;
-(NSString *)itemIdentifier;
-(NSString *)artworkIdentifier;
@end

