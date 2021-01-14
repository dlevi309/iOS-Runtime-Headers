/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UIColor *)color;
-(long long)scrollDirection;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setScrollDirection:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(BOOL)wantsInkUpdate;
-(CGSize)_itemSizeInContainer;
-(id)_indexPathOfColor:(id)arg1 ;
-(void)scrollToCurrentColor;
@end

