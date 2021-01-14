/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXOverlayBadgeTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class PXAssetBadgeManager, PXImageRequester, PXUIAssetBadgeView, NSString, UIView;

@interface PXOverlayBadgeUIViewTile : UIView <PXChangeObserver, PXReusableObject, PXOverlayBadgeTile, PXUIViewBasicTile> {

	SCD_Struct_PX38 _needsUpdateFlags;
	PXAssetBadgeManager* _badgeManager;
	PXImageRequester* _imageRequester;
	unsigned long long __badgeOptions;
	PXUIAssetBadgeView* __badgeView;

}

@property (assign,setter=_setBadgeOptions:,nonatomic) unsigned long long _badgeOptions;              //@synthesize _badgeOptions=__badgeOptions - In the implementation block
@property (nonatomic,readonly) PXUIAssetBadgeView * _badgeView;                                      //@synthesize _badgeView=__badgeView - In the implementation block
@property (nonatomic,retain) PXImageRequester * imageRequester;                                      //@synthesize imageRequester=_imageRequester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXAssetBadgeManager * badgeManager;                                     //@synthesize badgeManager=_badgeManager - In the implementation block
@property (nonatomic,readonly) UIView * view; 
+(void)preloadResources;
-(void)becomeReusable;
-(void)setBadgeManager:(PXAssetBadgeManager *)arg1 ;
-(PXUIAssetBadgeView *)_badgeView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)layoutSubviews;
-(UIView *)view;
-(PXAssetBadgeManager *)badgeManager;
-(void)_invalidateBadgeView;
-(void)_setBadgeOptions:(unsigned long long)arg1 ;
-(unsigned long long)_badgeOptions;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateBadgeViewIfNeeded;
@end

