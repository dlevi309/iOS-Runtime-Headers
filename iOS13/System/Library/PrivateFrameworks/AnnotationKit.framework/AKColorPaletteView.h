/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/AKInkIsUpdatable.h>
#import <libobjc.A.dylib/AKUserInterfaceItem.h>
#import <libobjc.A.dylib/AKColorChooserUserInterfaceItem.h>

@class UIColor, UICollectionView, NSArray, NSString;

@interface AKColorPaletteView : UIControl <UICollectionViewDataSource, UICollectionViewDelegate, AKInkIsUpdatable, AKUserInterfaceItem, AKColorChooserUserInterfaceItem> {

	UIColor* _color;
	long long _scrollDirection;
	UICollectionView* _collectionView;
	NSArray* _colors;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * colors;                               //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long scrollDirection;                      //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)setScrollDirection:(long long)arg1 ;
-(long long)scrollDirection;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)colors;
-(BOOL)wantsInkUpdate;
-(CGSize)_itemSizeInContainer;
-(id)_indexPathOfColor:(id)arg1 ;
-(void)scrollToCurrentColor;
@end

