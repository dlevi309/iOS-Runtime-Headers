/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIView, NSString;

@interface PXSelectionBadgeUIViewTile : UIView <PXReusableObject, PXUIViewBasicTile> {

	BOOL _needsUpdate;
	UIView* _selectedView;
	UIView* _unselectedView;
	BOOL __selected;

}

@property (assign,setter=_setSelected:,nonatomic) BOOL _selected;              //@synthesize _selected=__selected - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)preferredSize;
-(BOOL)_selected;
-(void)becomeReusable;
-(void)_invalidate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(UIView *)view;
-(void)_showSelectedView;
-(void)_showUnselectedView;
-(void)_setSelected:(BOOL)arg1 ;
-(void)_updateBadgeViewIfNeeded;
@end

