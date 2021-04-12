/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PUCameraImportItemCellDelegate;
@class PXImportItemViewModel, PUPhotoView, UIView, UIActivityIndicatorView, UITextField, NSString;

@interface PUCameraImportItemCell : UICollectionViewCell <PXChangeObserver> {

	CGRect _badgeTapZone;
	BOOL _needsThumbnailRefresh;
	BOOL _selectable;
	BOOL _needsBadgeUpdate;
	id<PUCameraImportItemCellDelegate> _delegate;
	PXImportItemViewModel* _representedImportItem;
	PUPhotoView* _photoView;
	long long _badgeType;
	UIView* _badgeContainerView;
	UIView* _badgeView;
	UIActivityIndicatorView* _spinner;
	UITextField* _debugTextField;
	long long _thumbnailRequestID;
	CGRect _scaledDisplayRect;

}

@property (assign,nonatomic) long long badgeType;                                             //@synthesize badgeType=_badgeType - In the implementation block
@property (assign,nonatomic) BOOL selectable;                                                 //@synthesize selectable=_selectable - In the implementation block
@property (nonatomic,retain) UIView * badgeContainerView;                                     //@synthesize badgeContainerView=_badgeContainerView - In the implementation block
@property (nonatomic,retain) UIView * badgeView;                                              //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                               //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) PUPhotoView * photoView;                                         //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,retain) UITextField * debugTextField;                                    //@synthesize debugTextField=_debugTextField - In the implementation block
@property (assign,nonatomic) BOOL needsBadgeUpdate;                                           //@synthesize needsBadgeUpdate=_needsBadgeUpdate - In the implementation block
@property (assign,nonatomic) CGRect scaledDisplayRect;                                        //@synthesize scaledDisplayRect=_scaledDisplayRect - In the implementation block
@property (assign,nonatomic) long long thumbnailRequestID;                                    //@synthesize thumbnailRequestID=_thumbnailRequestID - In the implementation block
@property (assign,nonatomic,__weak) id<PUCameraImportItemCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXImportItemViewModel * representedImportItem;                   //@synthesize representedImportItem=_representedImportItem - In the implementation block
@property (nonatomic,readonly) BOOL needsThumbnailRefresh;                                    //@synthesize needsThumbnailRefresh=_needsThumbnailRefresh - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)alphaForSelectedCells;
-(id)accessibilityLabel;
-(void)clearImage;
-(UIView *)badgeView;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(id<PUCameraImportItemCellDelegate>)delegate;
-(UIActivityIndicatorView *)spinner;
-(void)setBadgeView:(UIView *)arg1 ;
-(UIView *)badgeContainerView;
-(void)handleTapGesture:(id)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)prepareForReuse;
-(unsigned long long)accessibilityTraits;
-(void)setDelegate:(id<PUCameraImportItemCellDelegate>)arg1 ;
-(long long)badgeType;
-(void)layoutSubviews;
-(void)setSelectable:(BOOL)arg1 ;
-(BOOL)shouldBeginGestureForPoint:(CGPoint)arg1 ;
-(void)showActivityBadge:(BOOL)arg1 ;
-(void)setRepresentedImportItem:(PXImportItemViewModel *)arg1 ;
-(void)setBadgeType:(long long)arg1 ;
-(void)refreshThumbnail;
-(void)updateBadgeUIIfNeeded;
-(void)_fetchThumbnailReady;
-(void)setCachedImage:(id)arg1 isPlaceholder:(BOOL)arg2 ;
-(void)setPhotoImage:(id)arg1 withSize:(CGSize)arg2 fillMode:(long long)arg3 videoDuration:(double)arg4 isPlaceholder:(BOOL)arg5 ;
-(void)cancelThumbnailLoadIfActive;
-(CGRect)_filledPhotosRectForImage:(id)arg1 ;
-(void)_selectAction;
-(void)_enterOneUpAction;
-(void)updateDebugLabel:(id)arg1 ;
-(PXImportItemViewModel *)representedImportItem;
-(BOOL)needsThumbnailRefresh;
-(void)setBadgeContainerView:(UIView *)arg1 ;
-(UITextField *)debugTextField;
-(void)setDebugTextField:(UITextField *)arg1 ;
-(BOOL)needsBadgeUpdate;
-(void)setNeedsBadgeUpdate:(BOOL)arg1 ;
-(CGRect)scaledDisplayRect;
-(void)setScaledDisplayRect:(CGRect)arg1 ;
-(long long)thumbnailRequestID;
-(void)setThumbnailRequestID:(long long)arg1 ;
-(id)accessibilityCustomActions;
-(void)setPhotoView:(PUPhotoView *)arg1 ;
-(BOOL)selectable;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(PUPhotoView *)photoView;
-(long long)dragState;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

