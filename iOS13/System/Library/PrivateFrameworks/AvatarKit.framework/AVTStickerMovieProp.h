/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)movieURL;
-(void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateNode:(id)arg1 withContentAtTime:(SCD_Struct_AV12)arg2 ;
-(void)stickerGenerationWillBegin;
-(void)stickerGenerationDidEnd;
-(id)initWithMovieURL:(id)arg1 size:(CGSize)arg2 scale:(SCNVector3)arg3 position:(SCNVector3)arg4 renderLast:(BOOL)arg5 orientToCamera:(BOOL)arg6 rotation:(SCNVector3)arg7 palettesDescriptions:(id)arg8 modifiers:(id)arg9 adjustments:(id)arg10 ;
-(NSMutableArray *)loadingNodes;
-(AVPlayerItem *)moviePlayerItem;
-(void)setMoviePlayerItem:(AVPlayerItem *)arg1 ;
-(void)setLoadingNodes:(NSMutableArray *)arg1 ;
@end

