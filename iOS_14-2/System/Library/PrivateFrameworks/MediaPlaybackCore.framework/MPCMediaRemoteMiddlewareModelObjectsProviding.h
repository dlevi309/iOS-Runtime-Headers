/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class MPSectionedCollection, NSIndexPath;


@protocol MPCMediaRemoteMiddlewareModelObjectsProviding <NSObject>
@property (nonatomic,readonly) MPSectionedCollection * sourceContentItems; 
@property (nonatomic,readonly) MPSectionedCollection * modelObjects; 
@property (nonatomic,copy,readonly) NSIndexPath * playingIndexPath; 
@required
-(NSIndexPath *)playingIndexPath;
-(MPSectionedCollection *)sourceContentItems;
-(MPSectionedCollection *)modelObjects;

@end

