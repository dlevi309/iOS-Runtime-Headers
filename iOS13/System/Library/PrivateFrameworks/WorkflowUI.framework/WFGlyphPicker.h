/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/WFGlyphPickerTabBarDelegate.h>

@protocol WFGlyphPickerDelegate;
@class UICollectionView, UICollectionViewFlowLayout, NSArray, WFGlyphPickerTabBar, NSString;

@interface WFGlyphPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource, WFGlyphPickerTabBarDelegate> {

	unsigned short _selectedGlyphCharacter;
	id<WFGlyphPickerDelegate> _delegate;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	NSArray* _glyphSections;
	WFGlyphPickerTabBar* _tabBar;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,copy) NSArray * glyphSections;                                                 //@synthesize glyphSections=_glyphSections - In the implementation block
@property (assign,nonatomic,__weak) WFGlyphPickerTabBar * tabBar;                                   //@synthesize tabBar=_tabBar - In the implementation block
@property (assign,nonatomic,__weak) id<WFGlyphPickerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned short selectedGlyphCharacter;                                 //@synthesize selectedGlyphCharacter=_selectedGlyphCharacter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)numberOfSections;
-(id<WFGlyphPickerDelegate>)delegate;
-(void)setDelegate:(id<WFGlyphPickerDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)safeAreaInsetsDidChange;
-(WFGlyphPickerTabBar *)tabBar;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setTabBar:(WFGlyphPickerTabBar *)arg1 ;
-(void)glyphPickerTabBar:(id)arg1 didSelectTabAtIndex:(unsigned long long)arg2 ;
-(void)setSelectedGlyphCharacter:(unsigned short)arg1 ;
-(unsigned short)glyphCharacterAtIndexPath:(id)arg1 ;
-(id)indexPathForGlyphCharacter:(unsigned short)arg1 ;
-(unsigned short)selectedGlyphCharacter;
-(NSArray *)glyphSections;
-(void)setGlyphSections:(NSArray *)arg1 ;
@end

