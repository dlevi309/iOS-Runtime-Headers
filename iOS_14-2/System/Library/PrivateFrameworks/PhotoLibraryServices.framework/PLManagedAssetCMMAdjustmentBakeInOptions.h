/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLManagedAssetCMMAdjustmentBakeInOptions : NSObject {

	BOOL _shouldBakeInIfLivePhotoPlaybackDisabled;
	BOOL _shouldBakeInIfLivePhotoMuted;
	BOOL _shouldBakeInIfAdjustedByThirdParty;
	BOOL _shouldBakeInIfCropped;
	BOOL _shouldBakeInIfTimelineTrimmed;
	BOOL _shouldBakeInIfPortraitDepthEffectEnabled;
	BOOL _shouldBakeInIfContainsPenultimateResources;
	BOOL _flattenLivePhotoToStillIfNeeded;

}

@property (assign,nonatomic) BOOL shouldBakeInIfLivePhotoPlaybackDisabled;                 //@synthesize shouldBakeInIfLivePhotoPlaybackDisabled=_shouldBakeInIfLivePhotoPlaybackDisabled - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfLivePhotoMuted;                            //@synthesize shouldBakeInIfLivePhotoMuted=_shouldBakeInIfLivePhotoMuted - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfAdjustedByThirdParty;                      //@synthesize shouldBakeInIfAdjustedByThirdParty=_shouldBakeInIfAdjustedByThirdParty - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfCropped;                                   //@synthesize shouldBakeInIfCropped=_shouldBakeInIfCropped - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfTimelineTrimmed;                           //@synthesize shouldBakeInIfTimelineTrimmed=_shouldBakeInIfTimelineTrimmed - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfPortraitDepthEffectEnabled;                //@synthesize shouldBakeInIfPortraitDepthEffectEnabled=_shouldBakeInIfPortraitDepthEffectEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfContainsPenultimateResources;              //@synthesize shouldBakeInIfContainsPenultimateResources=_shouldBakeInIfContainsPenultimateResources - In the implementation block
@property (assign,nonatomic) BOOL flattenLivePhotoToStillIfNeeded;                         //@synthesize flattenLivePhotoToStillIfNeeded=_flattenLivePhotoToStillIfNeeded - In the implementation block
-(BOOL)shouldBakeInIfLivePhotoMuted;
-(void)setShouldBakeInIfLivePhotoMuted:(BOOL)arg1 ;
-(void)setShouldBakeInIfPortraitDepthEffectEnabled:(BOOL)arg1 ;
-(void)setShouldBakeInIfAdjustedByThirdParty:(BOOL)arg1 ;
-(void)setShouldBakeInIfCropped:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfCropped;
-(BOOL)shouldBakeInIfContainsPenultimateResources;
-(BOOL)shouldBakeInIfLivePhotoPlaybackDisabled;
-(BOOL)flattenLivePhotoToStillIfNeeded;
-(void)setFlattenLivePhotoToStillIfNeeded:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfAdjustedByThirdParty;
-(void)setShouldBakeInIfTimelineTrimmed:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfTimelineTrimmed;
-(void)setShouldBakeInIfLivePhotoPlaybackDisabled:(BOOL)arg1 ;
-(void)setShouldBakeInIfContainsPenultimateResources:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfPortraitDepthEffectEnabled;
@end

