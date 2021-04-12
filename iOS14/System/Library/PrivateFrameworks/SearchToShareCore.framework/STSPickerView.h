/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@class STSGridLayout, UIActivityIndicatorView, NSMutableArray, NSLayoutConstraint, UICollectionView, STSSearchNoticeView, UIView;

@interface STSPickerView : UIView {

	STSGridLayout* _gridLayout;
	UIActivityIndicatorView* _activityIndicator;
	double _lastContentOffsetY;
	BOOL _isDeceleratingQuickly;
	NSMutableArray* _constraints;
	NSLayoutConstraint* _headerTopConstraint;
	BOOL _showActivityIndicator;
	UICollectionView* _collectionView;
	STSSearchNoticeView* _overlayView;
	UIView* _headerView;
	double _topInset;
	double _bottomInset;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) STSSearchNoticeView * overlayView;                //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                              //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) double topInset;                                  //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) double bottomInset;                               //@synthesize bottomInset=_bottomInset - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                       //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
-(void)setHeaderView:(UIView *)arg1 ;
-(double)topInset;
-(id)init;
-(STSSearchNoticeView *)overlayView;
-(void)setOverlayView:(STSSearchNoticeView *)arg1 ;
-(UICollectionView *)collectionView;
-(void)setTopInset:(double)arg1 ;
-(void)layoutSubviews;
-(double)bottomInset;
-(BOOL)showActivityIndicator;
-(UIView *)headerView;
-(void)setBottomInset:(double)arg1 ;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(UIEdgeInsets)_updateContentInset;
-(void)updateHeaderPositionOnScroll;
-(void)scrollToTopWithAnimation:(BOOL)arg1 ;
-(void)updateHeaderPositionOnDraggingBegan;
-(void)updateHeaderPositionOnDraggingEndedWithVelocity:(CGPoint)arg1 ;
-(void)updateHeaderPositionOnDecelerationEnded;
-(void)updateContentOffset:(double)arg1 ;
@end

