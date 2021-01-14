/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIFocusContainerGuide, UICollectionView;

@interface _UICollectionViewOrthogonalScrollerEmbeddedScrollView : UIScrollView {

	UIFocusContainerGuide* _sectionFocusContainerGuide;
	UICollectionView* _collectionView;
	long long _section;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) long long section;                                     //@synthesize section=_section - In the implementation block
-(void)setSection:(long long)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(long long)section;
-(UICollectionView *)collectionView;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)_configureSectionFocusContainerGuide;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_focusedItem:(id)arg1 isMinX:(BOOL*)arg2 isMaxX:(BOOL*)arg3 isMinY:(BOOL*)arg4 isMaxY:(BOOL*)arg5 ;
@end

