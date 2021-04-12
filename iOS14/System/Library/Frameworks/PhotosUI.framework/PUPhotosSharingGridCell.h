/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class PUPhotoView, UIView, PUPhotosZoomingSharingGridCell;

@interface PUPhotosSharingGridCell : UICollectionViewCell {

	PUPhotoView* _photoView;
	UIView* _highlightOverlayView;
	CGPoint _originalZoomPoint;
	CGPoint _lastZoomPoint;
	PUPhotosZoomingSharingGridCell* _zoomingCell;
	UIView* _zoomingCellSuperview;
	long long _currentImageRequestID;

}

@property (nonatomic,readonly) PUPhotoView * photoView;                    //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) long long currentImageRequestID;              //@synthesize currentImageRequestID=_currentImageRequestID - In the implementation block
-(void)_updateHighlight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)_updateSubviewOrdering;
-(long long)currentImageRequestID;
-(void)setCurrentImageRequestID:(long long)arg1 ;
-(PUPhotoView *)photoView;
-(void)setHighlighted:(BOOL)arg1 ;
@end

