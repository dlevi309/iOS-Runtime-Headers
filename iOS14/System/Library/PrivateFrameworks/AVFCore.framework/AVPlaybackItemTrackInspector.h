/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(float)estimatedDataRate;
-(CGSize)naturalSize;
-(id)mediaType;
-(id)asset;
-(CGSize)dimensions;
-(SCD_Struct_AV7)timeRange;
-(CGAffineTransform)preferredTransform;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(int)trackID;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(unsigned long long)hash;
-(SCD_Struct_AV6)samplePresentationTimeForTrackTime:(SCD_Struct_AV6)arg1 ;
-(BOOL)isEnabled;
-(float)peakDataRate;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(unsigned)_figMediaType;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

