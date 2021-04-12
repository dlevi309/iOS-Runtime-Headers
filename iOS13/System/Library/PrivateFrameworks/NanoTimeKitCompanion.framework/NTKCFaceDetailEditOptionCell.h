/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol NTKCFaceDetailEditOptionCellDelegate;
@class NTKEditOptionCollection, NTKFaceView, NTKFace, NSDictionary, UICollectionView, UICollectionViewFlowLayout, UILabel, NSString;

@interface NTKCFaceDetailEditOptionCell : NTKCDetailTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {

	CGRect _swatchFrame;
	double _outlineOutset;
	double _outlinePadding;
	long long _selectedIndex;
	NTKEditOptionCollection* _collection;
	NTKFaceView* _faceView;
	NTKFace* _face;
	NSDictionary* _selectedOptions;
	id<NTKCFaceDetailEditOptionCellDelegate> _delegate;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _layout;
	UILabel* _optionsDescription;

}

@property (nonatomic,retain) NTKEditOptionCollection * collection;                                  //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic,__weak) NTKFaceView * faceView;                                         //@synthesize faceView=_faceView - In the implementation block
@property (assign,nonatomic,__weak) NTKFace * face;                                                 //@synthesize face=_face - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * layout;                                   //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UILabel * optionsDescription;                                          //@synthesize optionsDescription=_optionsDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * selectedOptions;                                        //@synthesize selectedOptions=_selectedOptions - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailEditOptionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id<NTKCFaceDetailEditOptionCellDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailEditOptionCellDelegate>)arg1 ;
-(NTKEditOptionCollection *)collection;
-(double)_spacing;
-(void)setFace:(NTKFace *)arg1 ;
-(NTKFace *)face;
-(UICollectionViewFlowLayout *)layout;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(double)rowHeight;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setCollection:(NTKEditOptionCollection *)arg1 ;
-(NTKFaceView *)faceView;
-(void)setFaceView:(NTKFaceView *)arg1 ;
-(void)_fontSizeDidChange;
-(void)_setupFromCollection;
-(UILabel *)optionsDescription;
-(void)setOptionsDescription:(UILabel *)arg1 ;
-(id)_imageForIndexPath:(id)arg1 ;
-(void)reloadVisibleCells;
-(void)setSelectedOptions:(NSDictionary *)arg1 ;
-(id)_dequeueCellForIndexPath:(id)arg1 ;
-(void)_ensureIndexPathVisible:(id)arg1 animated:(BOOL)arg2 ;
-(void)scrollToIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)ensureIndexVisible:(long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithCollection:(id)arg1 forFaceView:(id)arg2 face:(id)arg3 ;
-(BOOL)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2 ;
-(void)scrollToSelectedOption:(BOOL)arg1 ;
-(void)ensureSelectedOptionVisible:(BOOL)arg1 ;
-(NSDictionary *)selectedOptions;
@end

