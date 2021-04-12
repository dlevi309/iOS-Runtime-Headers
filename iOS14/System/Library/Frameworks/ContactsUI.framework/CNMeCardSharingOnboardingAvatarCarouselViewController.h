/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(id<CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(PRMonogramColor *)monogramColor;
-(NSArray *)items;
-(void)setDelegate:(id<CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate>)arg1 ;
-(CNMeCardSharingOnboardingAvatarCarouselItem *)photoItem;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAnimojiItem:(CNMeCardSharingOnboardingAvatarCarouselItem *)arg1 ;
-(CNMeCardSharingOnboardingAvatarCarouselItem *)monogramItem;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)viewDidLoad;
-(id)standardItems;
-(CNMeCardSharingOnboardingAvatarCarouselItem *)animojiItem;
-(id)animojiItemWithRecord:(id)arg1 ;
-(id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3 ;
-(id)itemsForNoAnimojiAndNoPhoto;
-(CNMeCardSharingOnboardingAvatarCarouselItem *)photoPickerItem;
-(void)reloadForUpdatedContactPhoto;
-(void)reloadForUpdatedMonogram;
-(id)contactImageItemWithContact:(id)arg1 ;
-(id)monogramImageItemWithContact:(id)arg1 ;
-(void)notifyDelegateOfUpdateToCenterMostItem;
-(void)setPhotoItem:(CNMeCardSharingOnboardingAvatarCarouselItem *)arg1 ;
-(CNSharingProfileLogger *)logger;
-(void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setPhotoPickerItem:(CNMeCardSharingOnboardingAvatarCarouselItem *)arg1 ;
-(void)setMonogramItem:(CNMeCardSharingOnboardingAvatarCarouselItem *)arg1 ;
-(CNMeCardSharingOnboardingAvatarCarouselItem *)selectedItem;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setLayout:(CNMeCardSharingOnboardingAvatarCarouselLayout *)arg1 ;
-(void)buildItems;
-(CNMeCardSharingOnboardingAvatarCarouselLayout *)layout;
@end

