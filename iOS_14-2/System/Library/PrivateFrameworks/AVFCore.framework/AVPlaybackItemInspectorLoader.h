/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetMakeReadyForInspectionLoader.h>

@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {

	OpaqueFigPlaybackItemRef _playbackItem;
	NSArray* _trackIDs;
	BOOL _shouldCacheDuration;
	SCD_Struct_AV6 _cachedDuration;

}

@property (getter=_playbackItem,nonatomic,readonly) OpaqueFigPlaybackItemRef playbackItem; 
-(void)cancelLoading;
-(BOOL)_inspectionRequiresAFormatReader;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(void)_addFigObjectNotifications;
-(void)_removeFigObjectNotifications;
-(id)_playbackItemPropertiesForKeys:(id)arg1 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)initWithURL:(id)arg1 playbackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4 ;
-(unsigned long long)hash;
-(Class)_classForTrackInspectors;
-(SCD_Struct_AV6)duration;
-(id)assetInspector;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

