/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CKAvatarPickerLayoutDelegate.h>

@class CKAvatarTitleCollectionReusableView, UICollectionView, CKAvatarPickerLayout, CKConversation, CNContactStore, NSMapTable, NSString;

@interface CKAvatarPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, CKAvatarPickerLayoutDelegate> {

	CKAvatarTitleCollectionReusableView* _titleView;
	long long _indicatorType;
	UICollectionView* _collectionView;
	CKAvatarPickerLayout* _layout;
	CKConversation* _conversation;
	CNContactStore* _suggestionsEnabledContactStore;
	NSMapTable* _visibleTitleViews;
	long long _style;

}

@property (nonatomic,retain) UICollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CKAvatarPickerLayout * layout;                                //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CNContactStore * suggestionsEnabledContactStore;              //@synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore - In the implementation block
@property (nonatomic,retain) CKAvatarTitleCollectionReusableView * titleView;              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleTitleViews;                               //@synthesize visibleTitleViews=_visibleTitleViews - In the implementation block
@property (assign,nonatomic) long long style;                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CGRect titleViewFrame; 
@property (assign,nonatomic) long long indicatorType;                                      //@synthesize indicatorType=_indicatorType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(CKAvatarPickerLayout *)layout;
-(void)setLayout:(CKAvatarPickerLayout *)arg1 ;
-(void)loadView;
-(UICollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)hasTitle;
-(CKAvatarTitleCollectionReusableView *)titleView;
-(void)setTitleView:(CKAvatarTitleCollectionReusableView *)arg1 ;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)_animateOutTitleView;
-(void)_animateInTitleView;
-(CGRect)titleViewFrame;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)_chatPropertiesChanged:(id)arg1 ;
-(void)setAvatarPickerActive:(BOOL)arg1 ;
-(id)_contactNameSupplementaryViewAtIndexPath:(id)arg1 ;
-(void)_handleAddressBookChange:(id)arg1 ;
-(void)setIndicatorType:(long long)arg1 ;
-(CNContactStore *)suggestionsEnabledContactStore;
-(long long)indicatorType;
-(void)setSuggestionsEnabledContactStore:(CNContactStore *)arg1 ;
-(void)setVisibleTitleViews:(NSMapTable *)arg1 ;
-(void)_handleConversationRecipientsDidChange:(id)arg1 ;
-(void)_handleGroupNameChange:(id)arg1 ;
-(void)_handleConversationIsFilteredChange:(id)arg1 ;
-(BOOL)_shouldUseBanner;
-(NSMapTable *)visibleTitleViews;
-(id)avatarDisplayName;
-(id)_titleSupplementaryViewAtIndexPath:(id)arg1 ;
-(id)_cutoutSupplementaryViewAtIndexPath:(id)arg1 ;
-(BOOL)chatIsReportedAsSpam;
-(int)chatWasDetectedAsSMSSpam;
-(BOOL)avatarPickerLayoutShouldShowTitle:(id)arg1 ;
@end

