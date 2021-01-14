/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, NSArray, UICollectionView;

@interface _TVAlertTemplateView : UIView {

	UIImage* _bgImage;
	UIImageView* _bgImageView;
	NSArray* _viewsAbove;
	UICollectionView* _collectionView;
	NSArray* _viewsBelow;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) NSArray * viewsAbove;                           //@synthesize viewsAbove=_viewsAbove - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * viewsBelow;                           //@synthesize viewsBelow=_viewsBelow - In the implementation block
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UICollectionView *)collectionView;
-(void)layoutSubviews;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setViewsAbove:(NSArray *)arg1 ;
-(void)setViewsBelow:(NSArray *)arg1 ;
-(void)setBgImage:(id)arg1 ;
-(NSArray *)viewsAbove;
-(NSArray *)viewsBelow;
@end

