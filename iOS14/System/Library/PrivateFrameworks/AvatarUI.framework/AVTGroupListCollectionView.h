/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTGroupPicker.h>

@protocol AVTGroupPickerDelegate;
@class NSArray, UICollectionView, CALayer, NSString;

@interface AVTGroupListCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTGroupPicker> {

	id<AVTGroupPickerDelegate> delegate;
	NSArray* _groupItems;
	long long selectedGroupIndex;
	UICollectionView* _collectionView;
	CALayer* _border;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CALayer * border;                                        //@synthesize border=_border - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groupItems;                                  //@synthesize groupItems=_groupItems - In the implementation block
@property (assign,nonatomic,__weak) id<AVTGroupPickerDelegate> delegate; 
@property (assign,nonatomic) long long selectedGroupIndex; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CALayer *)border;
-(id<AVTGroupPickerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setupView;
-(void)setDelegate:(id<AVTGroupPickerDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(NSArray *)groupItems;
-(void)setSelectedGroupIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)selectedGroupIndex;
-(id)initWithGroupItems:(id)arg1 environment:(id)arg2 ;
-(void)setSelectedGroupIndex:(long long)arg1 ;
-(double)borderWidth;
-(void)setupBorder;
-(void)setBorder:(CALayer *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateCollectionLayoutItemSize:(id)arg1 ;
@end

