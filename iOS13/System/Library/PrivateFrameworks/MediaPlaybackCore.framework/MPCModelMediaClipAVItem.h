/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAVItem.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionCreating.h>

@class MPModelGenericObject, MPModelMediaClip, NSString;

@interface MPCModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating> {

	MPModelGenericObject* _modelGenericObject;
	id _rtcReportingParentHierarchyToken;
	MPModelMediaClip* _mediaClip;

}

@property (nonatomic,readonly) MPModelMediaClip * mediaClip;                               //@synthesize mediaClip=_mediaClip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id rtcReportingParentHierarchyToken; 
@property (nonatomic,copy,readonly) NSString * rtcReportingServiceIdentifier; 
@property (nonatomic,readonly) long long rtcReportingAssetType; 
+(id)requiredMediaClipProperties;
-(NSString *)description;
-(BOOL)allowsExternalPlayback;
-(BOOL)isStreamable;
-(void)loadAssetAndPlayerItem;
-(void)notePlaybackFinishedByHittingEnd;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isAssetURLValid;
-(id)mainTitle;
-(double)durationFromExternalMetadata;
-(void)_applyLoudnessInfo;
-(void)reevaluateType;
-(BOOL)prefersSeekOverSkip;
-(id)modelGenericObject;
-(BOOL)allowsAirPlayFromCloud;
-(/*^block*/id)artworkCatalogBlock;
-(MPModelMediaClip *)mediaClip;
-(NSString *)rtcReportingServiceIdentifier;
-(id)rtcReportingParentHierarchyToken;
-(long long)rtcReportingAssetType;
-(BOOL)_allowsCellularPlayback;
-(id)_currentPreferredStaticAsset;
-(BOOL)_isVideoAsset;
-(id)initWithMediaClip:(id)arg1 ;
@end

