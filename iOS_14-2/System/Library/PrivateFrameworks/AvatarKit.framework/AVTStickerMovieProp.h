/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <AvatarKit/AVTStickerProp.h>

@class AVPlayerItem, NSURL, NSMutableArray;

@interface AVTStickerMovieProp : AVTStickerProp {

	AVPlayerItem* _moviePlayerItem;
	NSURL* _movieURL;
	NSMutableArray* _loadingNodes;

}

@property (nonatomic,retain) AVPlayerItem * moviePlayerItem;              //@synthesize moviePlayerItem=_moviePlayerItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * loadingNodes;               //@synthesize loadingNodes=_loadingNodes - In the implementation block
@property (nonatomic,readonly) NSURL * movieURL;                          //@synthesize movieURL=_movieURL - In the implementation block
-(NSURL *)movieURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateNode:(id)arg1 withContentAtTime:(SCD_Struct_AV13)arg2 ;
-(void)stickerGenerationWillBegin;
-(void)stickerGenerationDidEnd;
-(id)initWithMovieURL:(id)arg1 size:(CGSize)arg2 scale:(BOOL)arg3 position:(BOOL)arg4 renderLast:(id)arg5 orientToCamera:(id)arg6 rotation:(id)arg7 ;
-(id)dictionaryWithTargetPath:(id)arg1 ;
-(NSMutableArray *)loadingNodes;
-(AVPlayerItem *)moviePlayerItem;
-(void)setMoviePlayerItem:(AVPlayerItem *)arg1 ;
-(void)setLoadingNodes:(NSMutableArray *)arg1 ;
@end

