/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspector.h>

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	NSArray* _trackIDs;

}

@property (setter=_setPlaybackItem:,getter=_playbackItem,nonatomic,retain) OpaqueFigPlaybackItemRef playbackItem; 
-(id)lyrics;
-(long long)trackCount;
-(id)commonMetadata;
-(CGSize)naturalSize;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableMetadataFormats;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(void)_setPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
-(id)initWithPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 trackIDs:(id)arg2 ;
-(id)trackIDs;
-(BOOL)providesPreciseDurationAndTiming;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_AV6)duration;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

