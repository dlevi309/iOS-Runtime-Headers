/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>

@class PUAssetViewModel, NSString;

@interface PUBadgeInfoProvider : PXObservable <PUBrowsingVideoPlayerChangeObserver> {

	SCD_Struct_PU17 _needsUpdateFlags;
	BOOL _outputShouldAnimate;
	BOOL _playing;
	PUAssetViewModel* _assetViewModel;
	double _lastPlayingTime;
	PXAssetBadgeInfo _badgeInfo;
	PXAssetBadgeInfo _outputBadgeInfo;

}

@property (assign,nonatomic) double lastPlayingTime;                           //@synthesize lastPlayingTime=_lastPlayingTime - In the implementation block
@property (assign,nonatomic) BOOL playing;                                     //@synthesize playing=_playing - In the implementation block
@property (nonatomic,readonly) PUAssetViewModel * assetViewModel;              //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (nonatomic,readonly) PXAssetBadgeInfo badgeInfo;                     //@synthesize badgeInfo=_badgeInfo - In the implementation block
@property (nonatomic,readonly) PXAssetBadgeInfo outputBadgeInfo;               //@synthesize outputBadgeInfo=_outputBadgeInfo - In the implementation block
@property (nonatomic,readonly) BOOL outputShouldAnimate;                       //@synthesize outputShouldAnimate=_outputShouldAnimate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PUAssetViewModel *)assetViewModel;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(id)init;
-(void)didPerformChanges;
-(void)setPlaying:(BOOL)arg1 ;
-(void)_updateIfNeeded;
-(void)_updatePlaying;
-(void)setLastPlayingTime:(double)arg1 ;
-(void)invalidateOutput;
-(void)_invalidateOutput;
-(void)_updateOutputIfNeeded;
-(PXAssetBadgeInfo)_filteredBadgeInfoForTime:(double)arg1 outShouldAnimate:(BOOL*)arg2 ;
-(void)_setOutputBadgeInfo:(PXAssetBadgeInfo)arg1 shouldAnimate:(BOOL)arg2 ;
-(double)lastPlayingTime;
-(void)prepareForReuse;
-(BOOL)outputShouldAnimate;
-(PXAssetBadgeInfo)outputBadgeInfo;
-(BOOL)_needsUpdate;
-(id)mutableChangeObject;
-(void)setBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(BOOL)playing;
-(void)_setNeedsUpdate;
-(PXAssetBadgeInfo)badgeInfo;
-(void)performChanges:(/*^block*/id)arg1 ;
@end

