/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXWidgetBar.h>

@class PXUIWidgetBarViewTile;

@interface PXUIWidgetBar : PXWidgetBar {

	PXUIWidgetBarViewTile* __viewTile;

}

@property (nonatomic,readonly) PXUIWidgetBarViewTile * _viewTile;              //@synthesize _viewTile=__viewTile - In the implementation block
-(id)createTileAnimator;
-(void)updateView;
-(PXUIWidgetBarViewTile *)_viewTile;
-(void)checkInTile:(id)arg1 ;
-(id)checkOutTileWithKind:(long long)arg1 ;
@end

