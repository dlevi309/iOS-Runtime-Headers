/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PHAssetCreationAdjustmentBakeInOptions : NSObject <NSCopying, NSSecureCoding> {

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
+(BOOL)supportsSecureCoding;
+(id)adjustmentBakeInOptionsForPublishingOriginals;
-(id)initWithXPCDict:(id)arg1 ;
-(id)init;
-(BOOL)shouldBakeInIfLivePhotoMuted;
-(void)setShouldBakeInIfLivePhotoMuted:(BOOL)arg1 ;
-(void)setShouldBakeInIfPortraitDepthEffectEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShouldBakeInIfAdjustedByThirdParty:(BOOL)arg1 ;
-(void)setShouldBakeInIfCropped:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfCropped;
-(BOOL)shouldBakeInIfContainsPenultimateResources;
-(BOOL)shouldBakeInIfLivePhotoPlaybackDisabled;
-(id)plRepresentation;
-(BOOL)flattenLivePhotoToStillIfNeeded;
-(void)setFlattenLivePhotoToStillIfNeeded:(BOOL)arg1 ;
-(id)description;
-(BOOL)shouldBakeInIfAdjustedByThirdParty;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShouldBakeInIfTimelineTrimmed:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfTimelineTrimmed;
-(void)setShouldBakeInIfLivePhotoPlaybackDisabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldBakeInIfContainsPenultimateResources:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfPortraitDepthEffectEnabled;
@end

