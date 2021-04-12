/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MPMediaQuery *)query;
-(void)encodeWithCoder:(id)arg1 ;
-(MPMediaItem *)startItem;
-(id)initWithItemCollection:(id)arg1 ;
-(void)setStartTime:(double)arg1 forItem:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItem:(id)arg2 ;
-(void)setStartItem:(MPMediaItem *)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPMediaItemCollection *)itemCollection;
-(BOOL)isEqual:(id)arg1 ;
@end

