/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol WFColorPickerDelegate;
@class WFColor, NSArray, UICollectionView, NSString;

@interface WFColorPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {

	WFColor* _selectedColor;
	id<WFColorPickerDelegate> _delegate;
	NSArray* _colors;
	NSArray* _colorNames;
	UICollectionView* _colorCollectionView;

}

@property (nonatomic,retain) NSArray * colors;                                       //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) NSArray * colorNames;                                   //@synthesize colorNames=_colorNames - In the implementation block
@property (nonatomic,retain) UICollectionView * colorCollectionView;                 //@synthesize colorCollectionView=_colorCollectionView - In the implementation block
@property (nonatomic,retain) WFColor * selectedColor;                                //@synthesize selectedColor=_selectedColor - In the implementation block
@property (assign,nonatomic,__weak) id<WFColorPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFColorPickerDelegate>)delegate;
-(void)setDelegate:(id<WFColorPickerDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)colors;
-(WFColor *)selectedColor;
-(void)setSelectedColor:(WFColor *)arg1 ;
-(NSArray *)colorNames;
-(void)setColorNames:(NSArray *)arg1 ;
-(UICollectionView *)colorCollectionView;
-(void)setColorCollectionView:(UICollectionView *)arg1 ;
@end

