/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class UIView, NSString;

@interface PXCMMAssetStatusBadgeView : UIView <PXUIViewBasicTile, PXReusableObject> {

	SCD_Struct_PX38 _needsUpdateFlags;
	long long _status;
	UIView* _glyphView;

}

@property (assign,nonatomic) long long status;                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) UIView * glyphView;                    //@synthesize glyphView=_glyphView - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)preferredSize;
-(void)_invalidateImageView;
-(void)becomeReusable;
-(void)_updateImageViewIfNeeded;
-(void)setGlyphView:(UIView *)arg1 ;
-(UIView *)glyphView;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(UIView *)view;
-(void)setStatus:(long long)arg1 ;
-(long long)status;
@end

