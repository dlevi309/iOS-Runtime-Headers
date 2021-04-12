/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GKImageSource.h>

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource {

	NSMutableDictionary* _loadingGroups;

}

@property (nonatomic,retain) NSMutableDictionary * loadingGroups;              //@synthesize loadingGroups=_loadingGroups - In the implementation block
-(void)loadAndCacheAvatarFromGamedForURLString:(id)arg1 useUIImage:(BOOL)arg2 cacheSubdirectory:(id)arg3 reference:(id)arg4 queue:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)loadImageForURLString:(id)arg1 loader:(/*^block*/id)arg2 reference:(id)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(NSMutableDictionary *)loadingGroups;
-(void)setLoadingGroups:(NSMutableDictionary *)arg1 ;
-(BOOL)imageNeedsRefresh:(id)arg1 ;
@end

