/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewModel.h>

@protocol PUDisplayAsset;
@class PUMediaProvider, PHAnimatedImage, NSMutableSet;

@interface PUBrowsingAnimatedImagePlayer : PUViewModel {

	SCD_Struct_PU17 _isValid;
	BOOL _isAnimatedImageLoadingAllowed;
	int __animatedImageRequestID;
	id<PUDisplayAsset> _asset;
	PUMediaProvider* _mediaProvider;
	PHAnimatedImage* _animatedImage;
	NSMutableSet* __animatedImageLoadingDisablingReasons;

}

@property (setter=_setAnimatedImage:,nonatomic,retain) PHAnimatedImage * animatedImage;                               //@synthesize animatedImage=_animatedImage - In the implementation block
@property (assign,setter=_setAnimatedImageLoadingAllowed:,nonatomic) BOOL isAnimatedImageLoadingAllowed;              //@synthesize isAnimatedImageLoadingAllowed=_isAnimatedImageLoadingAllowed - In the implementation block
@property (nonatomic,retain) NSMutableSet * _animatedImageLoadingDisablingReasons;                                    //@synthesize _animatedImageLoadingDisablingReasons=__animatedImageLoadingDisablingReasons - In the implementation block
@property (assign,setter=_setAnimatedImageRequestID:,nonatomic) int _animatedImageRequestID;                          //@synthesize _animatedImageRequestID=__animatedImageRequestID - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> asset;                                                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * mediaProvider;                                                       //@synthesize mediaProvider=_mediaProvider - In the implementation block
-(void)setAsset:(id<PUDisplayAsset>)arg1 ;
-(PUMediaProvider *)mediaProvider;
-(id)init;
-(id<PUDisplayAsset>)asset;
-(void)didPerformChanges;
-(void)unloadAnimatedImage;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)setAnimatedImageLoadingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_updateIfNeeded;
-(PHAnimatedImage *)animatedImage;
-(void)_cancelLoading;
-(void)_setAnimatedImage:(id)arg1 ;
-(void)_updateAnimatedImage;
-(void)_setAnimatedImageLoadingAllowed:(BOOL)arg1 ;
-(void)_handleAnimatedImageRequestComplete:(id)arg1 ;
-(BOOL)isAnimatedImageLoadingAllowed;
-(NSMutableSet *)_animatedImageLoadingDisablingReasons;
-(void)set_animatedImageLoadingDisablingReasons:(NSMutableSet *)arg1 ;
-(int)_animatedImageRequestID;
-(void)_setAnimatedImageRequestID:(int)arg1 ;
-(id)debugDetailedDescription;
-(void)_invalidateAnimatedImage;
-(BOOL)_needsUpdate;
-(id)newViewModelChange;
-(void)dealloc;
@end

