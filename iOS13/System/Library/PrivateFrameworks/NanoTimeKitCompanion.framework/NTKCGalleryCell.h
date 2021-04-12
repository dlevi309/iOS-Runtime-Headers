/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol NTKCGalleryCellDelegate;
@class NTKCGalleryCollection, UILabel, UICollectionView, UICollectionViewFlowLayout, NSLayoutConstraint, UIStackView, _NTKCAddNewFace, NSString;

@interface NTKCGalleryCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {

	BOOL _hasCalloutName;
	BOOL _hasCalloutImage;
	BOOL _allSnapshotsLoaded;
	NTKCGalleryCollection* _collection;
	id<NTKCGalleryCellDelegate> _delegate;
	long long _selectedIndex;
	UILabel* _title;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _layout;
	NSLayoutConstraint* _titleBaselineConstraint;
	NSLayoutConstraint* _faceContainerTopConstraint;
	NSLayoutConstraint* _leadingInsetConstraint;
	NSLayoutConstraint* _cvHeightConstraint;
	UIStackView* _titleStack;
	UIStackView* _collectionViewFooterStack;
	UILabel* _footer;
	_NTKCAddNewFace* _addNewFace;
	CGSize _itemSize;

}

@property (nonatomic,retain) UILabel * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * layout;                          //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                              //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) BOOL hasCalloutName;                                          //@synthesize hasCalloutName=_hasCalloutName - In the implementation block
@property (assign,nonatomic) BOOL hasCalloutImage;                                         //@synthesize hasCalloutImage=_hasCalloutImage - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleBaselineConstraint;                 //@synthesize titleBaselineConstraint=_titleBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * faceContainerTopConstraint;              //@synthesize faceContainerTopConstraint=_faceContainerTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingInsetConstraint;                  //@synthesize leadingInsetConstraint=_leadingInsetConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cvHeightConstraint;                      //@synthesize cvHeightConstraint=_cvHeightConstraint - In the implementation block
@property (nonatomic,retain) UIStackView * titleStack;                                     //@synthesize titleStack=_titleStack - In the implementation block
@property (nonatomic,retain) UIStackView * collectionViewFooterStack;                      //@synthesize collectionViewFooterStack=_collectionViewFooterStack - In the implementation block
@property (nonatomic,retain) UILabel * footer;                                             //@synthesize footer=_footer - In the implementation block
@property (nonatomic,retain) _NTKCAddNewFace * addNewFace;                                 //@synthesize addNewFace=_addNewFace - In the implementation block
@property (assign,nonatomic) BOOL allSnapshotsLoaded;                                      //@synthesize allSnapshotsLoaded=_allSnapshotsLoaded - In the implementation block
@property (nonatomic,retain) NTKCGalleryCollection * collection;                           //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCGalleryCellDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) long long selectedIndex;                                      //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
+(double)rowHeightForCollection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<NTKCGalleryCellDelegate>)delegate;
-(void)setDelegate:(id<NTKCGalleryCellDelegate>)arg1 ;
-(NTKCGalleryCollection *)collection;
-(UILabel *)title;
-(void)setTitle:(UILabel *)arg1 ;
-(void)prepareForReuse;
-(UICollectionViewFlowLayout *)layout;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGPoint)contentOffset;
-(void)didMoveToSuperview;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)itemSize;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)setItemSize:(CGSize)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(UILabel *)footer;
-(void)setFooter:(UILabel *)arg1 ;
-(void)setCollection:(NTKCGalleryCollection *)arg1 ;
-(void)_fontSizeDidChange;
-(NSLayoutConstraint *)leadingInsetConstraint;
-(NSLayoutConstraint *)faceContainerTopConstraint;
-(void)setFaceContainerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)ensureCorrectTitleViewOrientation;
-(void)setHasCalloutName:(BOOL)arg1 ;
-(void)showFooterTextIfNeeded;
-(void)calculateHeightForCollection;
-(void)setAllSnapshotsLoaded:(BOOL)arg1 ;
-(NSLayoutConstraint *)cvHeightConstraint;
-(BOOL)hasFooterText;
-(BOOL)shouldShowFooterTextInCollectionView;
-(CGPoint)_contentInsetPoint;
-(BOOL)allSnapshotsLoaded;
-(BOOL)_shouldShowAddNewFace;
-(void)setAddNewFace:(_NTKCAddNewFace *)arg1 ;
-(void)updateFaceAtIndex:(unsigned long long)arg1 ;
-(void)selectFace:(id)arg1 ;
-(void)clearSelectedFaces;
-(id)faceForLocation:(CGPoint)arg1 ;
-(id)containerViewForFace:(id)arg1 ;
-(BOOL)hasCalloutName;
-(BOOL)hasCalloutImage;
-(void)setHasCalloutImage:(BOOL)arg1 ;
-(NSLayoutConstraint *)titleBaselineConstraint;
-(void)setTitleBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLeadingInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCvHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIStackView *)titleStack;
-(void)setTitleStack:(UIStackView *)arg1 ;
-(UIStackView *)collectionViewFooterStack;
-(void)setCollectionViewFooterStack:(UIStackView *)arg1 ;
-(_NTKCAddNewFace *)addNewFace;
@end

