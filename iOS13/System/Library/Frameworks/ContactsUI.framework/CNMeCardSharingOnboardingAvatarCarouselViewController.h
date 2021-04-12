/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate, AVTAvatarRecord;
@class PRMonogramColor, NSArray, UICollectionView, CNMeCardSharingOnboardingAvatarCarouselLayout, CNContact, CNMeCardSharingOnboardingAvatarCarouselItem, CNSharingProfileLogger, NSString;

@interface CNMeCardSharingOnboardingAvatarCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	id<CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> _delegate;
	PRMonogramColor* _monogramColor;
	NSArray* _items;
	UICollectionView* _collectionView;
	CNMeCardSharingOnboardingAvatarCarouselLayout* _layout;
	id<AVTAvatarRecord> _avatarRecord;
	CNContact* _contact;
	CNMeCardSharingOnboardingAvatarCarouselItem* _photoPickerItem;
	CNMeCardSharingOnboardingAvatarCarouselItem* _animojiItem;
	CNMeCardSharingOnboardingAvatarCarouselItem* _photoItem;
	CNMeCardSharingOnboardingAvatarCarouselItem* _monogramItem;
	CNSharingProfileLogger* _logger;

}

@property (nonatomic,retain) NSArray * items;                                                                                //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CNMeCardSharingOnboardingAvatarCarouselLayout * layout;                                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                                               //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNMeCardSharingOnboardingAvatarCarouselItem * photoPickerItem;                                  //@synthesize photoPickerItem=_photoPickerItem - In the implementation block
@property (nonatomic,retain) CNMeCardSharingOnboardingAvatarCarouselItem * animojiItem;                                      //@synthesize animojiItem=_animojiItem - In the implementation block
@property (nonatomic,retain) CNMeCardSharingOnboardingAvatarCarouselItem * photoItem;                                        //@synthesize photoItem=_photoItem - In the implementation block
@property (nonatomic,retain) CNMeCardSharingOnboardingAvatarCarouselItem * monogramItem;                                     //@synthesize monogramItem=_monogramItem - In the implementation block
@property (nonatomic,readonly) CNSharingProfileLogger * logger;                                                              //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) id<CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNMeCardSharingOnboardingAvatarCarouselItem * selectedItem; 
@property (nonatomic,retain) PRMonogramColor * monogramColor;                                                                //@synthesize monogramColor=_monogramColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate>)arg1 ;
-(CNSharingProfileLogger *)logger;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(CNMeCardSharingOnboardingAvatarCarouselLayout *)layout;
-(void)setLayout:(CNMeCardSharingOnboardingAvatarCarouselLayout *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CNMeCardSharingOnboardingAvatarCarouselItem *)selectedItem;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)buildItems;
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(PRMonogramColor *)monogramColor;
-(id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3 ;
-(id)itemsForNoAnimojiAndNoPhoto;
-(id)standardItems;
-(void)reloadForUpdatedContactPhoto;
-(void)reloadForUpdatedMonogram;
-(id)contactImageItemWithContact:(id)arg1 ;
-(id)monogramImageItemWithContact:(id)arg1 ;
-(id)animojiItemWithRecord:(id)arg1 ;
-(void)notifyDelegateOfUpdateToCenterMostItem;
-(void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CNMeCardSharingOnboardingAvatarCarouselItem *)photoPickerItem;
-(void)setPhotoPickerItem:(CNMeCardSharingOnboardingAvatarCarouselItem *)arg1 ;
-(CNMeCardSharingOnboardingAvatarCarouselItem *)animojiItem;
-(void)setAnimojiItem:(CNMeCardSharingOnboardingAvatarCarouselItem *)arg1 ;
-(CNMeCardSharingOnboardingAvatarCarouselItem *)photoItem;
-(void)setPhotoItem:(CNMeCardSharingOnboardingAvatarCarouselItem *)arg1 ;
-(CNMeCardSharingOnboardingAvatarCarouselItem *)monogramItem;
-(void)setMonogramItem:(CNMeCardSharingOnboardingAvatarCarouselItem *)arg1 ;
@end

