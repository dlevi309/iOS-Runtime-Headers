/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class MPMediaQuery, MPMediaItemCollection, MPMediaItem;

@interface MPMusicPlayerMediaItemQueueDescriptor : MPMusicPlayerQueueDescriptor {

	MPMediaQuery* _query;
	MPMediaItemCollection* _itemCollection;
	MPMediaItem* _startItem;

}

@property (nonatomic,copy,readonly) MPMediaQuery * query; 
@property (nonatomic,readonly) MPMediaItemCollection * itemCollection; 
@property (nonatomic,retain) MPMediaItem * startItem;                               //@synthesize startItem=_startItem - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPMediaQuery *)query;
-(id)initWithQuery:(id)arg1 ;
-(MPMediaItemCollection *)itemCollection;
-(void)setStartItem:(MPMediaItem *)arg1 ;
-(id)initWithItemCollection:(id)arg1 ;
-(void)setStartTime:(double)arg1 forItem:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItem:(id)arg2 ;
-(MPMediaItem *)startItem;
@end

