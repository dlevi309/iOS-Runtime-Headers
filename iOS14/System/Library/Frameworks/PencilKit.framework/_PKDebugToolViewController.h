/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKInkAttributesPickerDelegate.h>

@class PKTiledView, UICollectionView, UILabel, UIButton, NSArray, NSString;

@interface _PKDebugToolViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIPopoverPresentationControllerDelegate, PKInkAttributesPickerDelegate> {

	PKTiledView* _tiledView;
	UICollectionView* _toolCollectionView;
	UILabel* _doNotFileBugsLabel;
	UIButton* _dismissButton;
	NSArray* _tools;

}

@property (nonatomic,readonly) UICollectionView * toolCollectionView;              //@synthesize toolCollectionView=_toolCollectionView - In the implementation block
@property (nonatomic,readonly) UILabel * doNotFileBugsLabel;                       //@synthesize doNotFileBugsLabel=_doNotFileBugsLabel - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                           //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) NSArray * tools;                                    //@synthesize tools=_tools - In the implementation block
@property (assign,nonatomic,__weak) PKTiledView * tiledView;                       //@synthesize tiledView=_tiledView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)_images;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(NSArray *)tools;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(UIButton *)dismissButton;
-(void)viewDidLayoutSubviews;
-(PKTiledView *)tiledView;
-(void)setTiledView:(PKTiledView *)arg1 ;
-(void)_dismissPane;
-(void)_populateTools;
-(void)_showInkAttributesPickerFromView:(id)arg1 frame:(CGRect)arg2 ink:(id)arg3 shouldHideArrow:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)inkAttributesPickerDidChangeSelectedInk:(id)arg1 ;
-(UICollectionView *)toolCollectionView;
-(UILabel *)doNotFileBugsLabel;
@end

