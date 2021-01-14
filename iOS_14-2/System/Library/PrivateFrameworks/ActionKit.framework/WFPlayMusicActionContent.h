/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSArray, MPMediaItemCollection, MPPlaybackArchive;

@interface WFPlayMusicActionContent : NSObject {

	NSArray* _storeIDs;
	MPMediaItemCollection* _mediaCollection;
	MPPlaybackArchive* _playbackArchive;

}

@property (nonatomic,copy) NSArray * storeIDs;                                     //@synthesize storeIDs=_storeIDs - In the implementation block
@property (nonatomic,retain) MPMediaItemCollection * mediaCollection;              //@synthesize mediaCollection=_mediaCollection - In the implementation block
@property (nonatomic,retain) MPPlaybackArchive * playbackArchive;                  //@synthesize playbackArchive=_playbackArchive - In the implementation block
-(void)setPlaybackArchive:(MPPlaybackArchive *)arg1 ;
-(NSArray *)storeIDs;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(id)initWithStoreIDs:(id)arg1 ;
-(id)initWithPlaybackArchive:(id)arg1 ;
-(MPPlaybackArchive *)playbackArchive;
-(MPMediaItemCollection *)mediaCollection;
-(void)setMediaCollection:(MPMediaItemCollection *)arg1 ;
-(id)initWithMediaCollection:(id)arg1 ;
@end

