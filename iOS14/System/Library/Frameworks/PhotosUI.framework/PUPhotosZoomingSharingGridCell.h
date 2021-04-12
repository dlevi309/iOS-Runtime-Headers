/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosSharingGridCell.h>

@class UIView;

@interface PUPhotosZoomingSharingGridCell : PUPhotosSharingGridCell {

	CGRect _defaultBounds;
	unsigned long long _badgesLayoutAnchor;
	UIView* _selectionView;
	CGPoint _selectionViewDefaultCenter;
	UIView* _optionView;
	CGPoint _optionViewDefaultCenter;

}
-(id)initWithFrame:(CGRect)arg1 selectionView:(id)arg2 optionView:(id)arg3 layoutAnchor:(unsigned long long)arg4 ;
-(void)layoutSubviews;
@end

