/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {

	AVAssetProxyInternal* _assetProxy;

}
+(id)assetProxyWithPropertyList:(id)arg1 ;
+(id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)initWithPropertyList:(id)arg1 ;
-(BOOL)isProxy;
-(id)tracks;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(Class)_classForTrackInspectors;
-(OpaqueFigAssetRef)_figAsset;
-(void)dealloc;
@end

