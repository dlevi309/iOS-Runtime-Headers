/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>

@class TPFavoritesController, UIView, NSArray, CNContactFormatter, NSIndexSet;

@interface TPFavoritesViewController : UICollectionViewController {

	BOOL _contentUnavailable;
	TPFavoritesController* _favoritesController;
	UIView* _contentUnavailableView;
	NSArray* _favoritesEntries;
	CNContactFormatter* _contactFormatter;
	NSIndexSet* _sections;

}

@property (nonatomic,retain) CNContactFormatter * contactFormatter;                      //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) NSIndexSet * sections;                                      //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL contentUnavailable;                                    //@synthesize contentUnavailable=_contentUnavailable - In the implementation block
@property (nonatomic,retain) UIView * contentUnavailableView;                            //@synthesize contentUnavailableView=_contentUnavailableView - In the implementation block
@property (nonatomic,readonly) TPFavoritesController * favoritesController;              //@synthesize favoritesController=_favoritesController - In the implementation block
@property (nonatomic,copy) NSArray * favoritesEntries;                                   //@synthesize favoritesEntries=_favoritesEntries - In the implementation block
+(id)avatarViewControllerSettings;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(NSIndexSet *)sections;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)setSections:(NSIndexSet *)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)setFavoritesEntries:(NSArray *)arg1 ;
-(NSArray *)favoritesEntries;
-(void)handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)handleFavoritesControllerFavoritesEntriesDidChangeNotification:(id)arg1 ;
-(void)setContentUnavailable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)contentUnavailableView;
-(TPFavoritesController *)favoritesController;
-(void)setFavoritesEntries:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setContentUnavailable:(BOOL)arg1 ;
-(void)relayoutCollectionView;
-(void)refreshView;
-(void)postCNContactsClientDidDisplayFavoritesNotification;
-(id)favoritesEntryAtIndex:(long long)arg1 ;
-(BOOL)useAccessibileLayout;
-(CGSize)accessibleCellSizeFor:(id)arg1 layout:(id)arg2 ;
-(CGSize)cellSizeFor:(id)arg1 layout:(id)arg2 ;
-(id)cellHeightToFitWidgetContainedCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)refreshViewAnimated:(BOOL)arg1 ;
-(void)setFavoritesController:(TPFavoritesController *)arg1 ;
-(BOOL)contentUnavailable;
-(void)setContentUnavailableView:(UIView *)arg1 ;
@end

