/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol NTKCGalleryCellDelegate;
@class NTKCGalleryCollection, UILabel, UICollectionView, UICollectionViewFlowLayout, NSLayoutConstraint, UIStackView, NSArray, _NTKCAddNewFace, NSString;

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
	NSArray* _snapshotRequests;
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
@property (nonatomic,copy) NSArray * snapshotRequests;                                     //@synthesize snapshotRequests=_snapshotRequests - In the implementation block
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
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(UILabel *)footer;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)itemSize;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(NTKCGalleryCollection *)collection;
-(id)init;
-(void)setCollection:(NTKCGalleryCollection *)arg1 ;
-(id<NTKCGalleryCellDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)setTitle:(UILabel *)arg1 ;
-(void)didMoveToSuperview;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)prepareForReuse;
-(void)setFooter:(UILabel *)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)setDelegate:(id<NTKCGalleryCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(long long)selectedIndex;
-(CGPoint)contentOffset;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(UILabel *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(UICollectionViewFlowLayout *)layout;
-(void)_fontSizeDidChange;
-(void)_resetSnapshotRequests;
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
-(NSArray *)snapshotRequests;
-(void)setSnapshotRequests:(NSArray *)arg1 ;
-(_NTKCAddNewFace *)addNewFace;
@end
