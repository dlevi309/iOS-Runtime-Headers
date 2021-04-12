/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)itemIdentifier;
-(long long)index;
-(NSString *)artworkIdentifier;
-(MPMediaItem *)item;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
@end

