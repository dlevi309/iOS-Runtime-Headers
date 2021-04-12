/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStoreIDs:(id)arg1 ;
-(NSArray *)storeIDs;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(id)initWithPlaybackArchive:(id)arg1 ;
-(MPPlaybackArchive *)playbackArchive;
-(MPMediaItemCollection *)mediaCollection;
-(void)setMediaCollection:(MPMediaItemCollection *)arg1 ;
-(void)setPlaybackArchive:(MPPlaybackArchive *)arg1 ;
-(id)initWithMediaCollection:(id)arg1 ;
@end

