/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CKAvatarPickerLayoutDelegate.h>

@class CKAvatarTitleCollectionReusableView, UICollectionView, CNGroupAvatarViewController, CKAvatarPickerLayout, CKConversation, CNContactStore, NSMapTable, NSString;

@interface CKAvatarPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, CKAvatarPickerLayoutDelegate> {

	CKAvatarTitleCollectionReusableView* _titleView;
	long long _indicatorType;
	UICollectionView* _collectionView;
	CNGroupAvatarViewController* _groupAvatarViewController;
	CKAvatarPickerLayout* _layout;
	CKConversation* _conversation;
	CNContactStore* _suggestionsEnabledContactStore;
	NSMapTable* _visibleTitleViews;
	long long _style;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CNGroupAvatarViewController * groupAvatarViewController;              //@synthesize groupAvatarViewController=_groupAvatarViewController - In the implementation block
@property (nonatomic,retain) CKAvatarPickerLayout * layout;                                        //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                        //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CNContactStore * suggestionsEnabledContactStore;                      //@synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore - In the implementation block
@property (nonatomic,retain) CKAvatarTitleCollectionReusableView * titleView;                      //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleTitleViews;                                       //@synthesize visibleTitleViews=_visibleTitleViews - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CGRect titleViewFrame; 
@property (assign,nonatomic) long long indicatorType;                                              //@synthesize indicatorType=_indicatorType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CKAvatarTitleCollectionReusableView *)titleView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)hasTitle;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)_chatPropertiesChanged:(id)arg1 ;
-(UICollectionView *)collectionView;
-(void)updateGroupAvatarView;
-(void)setConversation:(CKConversation *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setAvatarPickerActive:(BOOL)arg1 ;
-(void)setTitleView:(CKAvatarTitleCollectionReusableView *)arg1 ;
-(NSMapTable *)visibleTitleViews;
-(void)setVisibleTitleViews:(NSMapTable *)arg1 ;
-(void)_handleGroupNameChange:(id)arg1 ;
-(void)_handleConversationIsFilteredChange:(id)arg1 ;
-(unsigned long long)_preferredAvatarLayoutMode;
-(id)_titleSupplementaryViewAtIndexPath:(id)arg1 ;
-(id)_groupAvatarViewControllerRequiredContactKeys;
-(void)sendUpdatedRecentParticipantsToContacts;
-(id)avatarDisplayName;
-(id)_cutoutSupplementaryViewAtIndexPath:(id)arg1 ;
-(BOOL)chatIsReportedAsSpam;
-(int)chatWasDetectedAsSMSSpam;
-(id)_configureCollectionView:(id)arg1 bannerViewCellForItemAtIndexPath:(id)arg2 ;
-(id)_configureCollectionView:(id)arg1 groupIdentityCellForItemAtIndexPath:(id)arg2 ;
-(BOOL)avatarPickerLayoutShouldShowTitle:(id)arg1 ;
-(id)_configureCollectionView:(id)arg1 avatarViewCellForItemAtIndexPath:(id)arg2 ;
-(id)initWithConversation:(id)arg1 ;
-(CKConversation *)conversation;
-(CNGroupAvatarViewController *)groupAvatarViewController;
-(void)setGroupAvatarViewController:(CNGroupAvatarViewController *)arg1 ;
-(id)_contactNameSupplementaryViewAtIndexPath:(id)arg1 ;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)_handleConversationRecipientsDidChange:(id)arg1 ;
-(void)_handleAddressBookChange:(id)arg1 ;
-(void)setIndicatorType:(long long)arg1 ;
-(CNContactStore *)suggestionsEnabledContactStore;
-(long long)indicatorType;
-(void)setSuggestionsEnabledContactStore:(CNContactStore *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)loadView;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)_animateOutTitleView;
-(void)_animateInTitleView;
-(CGRect)titleViewFrame;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLayout:(CKAvatarPickerLayout *)arg1 ;
-(long long)style;
-(void)dealloc;
-(CKAvatarPickerLayout *)layout;
@end

