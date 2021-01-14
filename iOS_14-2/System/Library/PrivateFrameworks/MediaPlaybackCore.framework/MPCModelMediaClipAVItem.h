/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAVItem.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionCreating.h>

@class MPModelGenericObject, MPModelMediaClip, NSString;

@interface MPCModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating> {

	MPModelGenericObject* _modelGenericObject;
	MPModelMediaClip* _mediaClip;

}

@property (nonatomic,readonly) MPModelMediaClip * mediaClip;                               //@synthesize mediaClip=_mediaClip - In the implementation block
@property (nonatomic,readonly) id rtcReportingParentHierarchyToken; 
@property (nonatomic,copy,readonly) NSString * rtcReportingServiceIdentifier; 
@property (nonatomic,readonly) long long rtcReportingAssetType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredMediaClipProperties;
-(BOOL)allowsExternalPlayback;
-(id)mainTitle;
-(NSString *)description;
-(void)loadAssetAndPlayerItem;
-(void)notePlaybackFinishedByHittingEnd;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(BOOL)isAssetURLValid;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isStreamable;
-(double)durationFromExternalMetadata;
-(void)_applyLoudnessInfo;
-(void)reevaluateType;
-(id)rtcReportingParentHierarchyToken;
-(BOOL)prefersSeekOverSkip;
-(id)modelGenericObject;
-(BOOL)allowsAirPlayFromCloud;
-(MPModelMediaClip *)mediaClip;
-(/*^block*/id)artworkCatalogBlock;
-(long long)rtcReportingAssetType;
-(NSString *)rtcReportingServiceIdentifier;
-(BOOL)_allowsCellularPlayback;
-(id)_currentPreferredStaticAsset;
-(BOOL)_isVideoAsset;
-(id)initWithMediaClip:(id)arg1 ;
@end

