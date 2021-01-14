/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIImageView, PUProgressIndicatorView, NSArray, NSNumber, PUPhotoView;

@interface PUPhotosGridCell : UICollectionViewCell {

	UIView* _selectionOverlayView;
	UIView* _selectionBadgeView;
	UIImageView* _cloudIconImageView;
	PUProgressIndicatorView* _progressIndicatorView;
	UIView* _highlightOverlayView;
	NSArray* _progressIndicatorViewConstraints;
	BOOL _draggable;
	BOOL _selectionBadgeVisible;
	BOOL _cloudIconVisible;
	BOOL _transitionFillerViewEnabled;
	BOOL _transitionIsAppearing;
	int _currentImageRequestID;
	UIView* _transitionFillerView;
	NSNumber* _progress;
	PUPhotoView* _photoContentView;
	PUPhotoView* _temporaryPhotoContentView;
	long long _dragState;
	UIEdgeInsets _fillerEdgeInsets;

}

@property (nonatomic,retain) PUPhotoView * photoContentView;                                         //@synthesize photoContentView=_photoContentView - In the implementation block
@property (nonatomic,retain) PUPhotoView * temporaryPhotoContentView;                                //@synthesize temporaryPhotoContentView=_temporaryPhotoContentView - In the implementation block
@property (assign,nonatomic) long long dragState;                                                    //@synthesize dragState=_dragState - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isDraggable,nonatomic) BOOL draggable;                                      //@synthesize draggable=_draggable - In the implementation block
@property (assign,getter=isSelectionBadgeVisible,nonatomic) BOOL selectionBadgeVisible;              //@synthesize selectionBadgeVisible=_selectionBadgeVisible - In the implementation block
@property (assign,getter=isCloudIconVisible,nonatomic) BOOL cloudIconVisible;                        //@synthesize cloudIconVisible=_cloudIconVisible - In the implementation block
@property (nonatomic,retain) NSNumber * progress;                                                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL transitionFillerViewEnabled;                                       //@synthesize transitionFillerViewEnabled=_transitionFillerViewEnabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets fillerEdgeInsets;                                          //@synthesize fillerEdgeInsets=_fillerEdgeInsets - In the implementation block
@property (nonatomic,readonly) UIView * transitionFillerView;                                        //@synthesize transitionFillerView=_transitionFillerView - In the implementation block
@property (assign,nonatomic) BOOL transitionIsAppearing;                                             //@synthesize transitionIsAppearing=_transitionIsAppearing - In the implementation block
@property (assign,nonatomic) int currentImageRequestID;                                              //@synthesize currentImageRequestID=_currentImageRequestID - In the implementation block
+(Class)_contentViewClass;
-(void)_updateHighlight;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSNumber *)progress;
-(BOOL)isDraggable;
-(void)prepareForReuse;
-(void)setTemporaryPhotoImage:(id)arg1 with:(long long)arg2 ;
-(UIView *)transitionFillerView;
-(PUPhotoView *)temporaryPhotoContentView;
-(void)setFillerEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setTransitionFillerViewEnabled:(BOOL)arg1 ;
-(void)setTransitionIsAppearing:(BOOL)arg1 ;
-(void)addTemporaryPhotoContentView;
-(void)removeTemporaryPhotoContentView;
-(UIEdgeInsets)fillerEdgeInsets;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)applyLayoutAttributes:(id)arg1 ;
-(PUPhotoView *)photoContentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateSelectionBadge;
-(void)_updateCloudIcon;
-(void)_updateProgressImmediately:(BOOL)arg1 ;
-(void)_layoutTransitionFillerView;
-(void)setSelectionBadgeVisible:(BOOL)arg1 ;
-(void)setCloudIconVisible:(BOOL)arg1 ;
-(void)setProgress:(id)arg1 immediately:(BOOL)arg2 ;
-(BOOL)isSelectionBadgeVisible;
-(BOOL)isCloudIconVisible;
-(void)setPhotoContentView:(PUPhotoView *)arg1 ;
-(void)setTemporaryPhotoContentView:(PUPhotoView *)arg1 ;
-(BOOL)transitionFillerViewEnabled;
-(void)setProgress:(NSNumber *)arg1 ;
-(void)_updateSubviewOrdering;
-(void)_updateContentViewClipsToBounds;
-(BOOL)transitionIsAppearing;
-(void)dragStateDidChange:(long long)arg1 ;
-(int)currentImageRequestID;
-(void)setCurrentImageRequestID:(int)arg1 ;
-(void)setDraggable:(BOOL)arg1 ;
-(void)setDragState:(long long)arg1 ;
-(long long)dragState;
-(BOOL)_disableRasterizeInAnimations;
-(void)setHighlighted:(BOOL)arg1 ;
@end

