/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHAssetCreationAdjustmentBakeInOptions : NSObject <NSCopying> {

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
+(id)adjustmentBakeInOptionsForPublishingOriginals;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 ;
-(BOOL)shouldBakeInIfLivePhotoPlaybackDisabled;
-(void)setShouldBakeInIfLivePhotoPlaybackDisabled:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfLivePhotoMuted;
-(void)setShouldBakeInIfLivePhotoMuted:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfAdjustedByThirdParty;
-(void)setShouldBakeInIfAdjustedByThirdParty:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfCropped;
-(void)setShouldBakeInIfCropped:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfTimelineTrimmed;
-(void)setShouldBakeInIfTimelineTrimmed:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfPortraitDepthEffectEnabled;
-(void)setShouldBakeInIfPortraitDepthEffectEnabled:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfContainsPenultimateResources;
-(void)setShouldBakeInIfContainsPenultimateResources:(BOOL)arg1 ;
-(BOOL)flattenLivePhotoToStillIfNeeded;
-(void)setFlattenLivePhotoToStillIfNeeded:(BOOL)arg1 ;
@end

