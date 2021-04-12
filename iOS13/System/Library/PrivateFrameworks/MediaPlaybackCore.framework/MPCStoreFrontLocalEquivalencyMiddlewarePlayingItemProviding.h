/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class MPModelGenericObject, NSIndexPath;


@protocol MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding <NSObject>
@property (nonatomic,readonly) MPModelGenericObject * overridePlayingItem; 
@property (nonatomic,readonly) NSIndexPath * playingItemIndexPath; 
@required
-(NSIndexPath *)playingItemIndexPath;
-(MPModelGenericObject *)overridePlayingItem;

@end

