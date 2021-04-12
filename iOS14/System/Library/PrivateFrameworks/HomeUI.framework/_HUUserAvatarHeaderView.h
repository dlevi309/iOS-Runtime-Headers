/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@protocol HUMediaAccountDelegate;
@class HUContactView, HUSplitAccountHeaderTableView, HUMultiUserTokenFixTableView, ACAccountStore, NSArray, NAFuture, NSAttributedString;

@interface _HUUserAvatarHeaderView : UITableViewHeaderFooterView {

	HUContactView* _contactView;
	HUSplitAccountHeaderTableView* _splitAccountHeaderView;
	HUMultiUserTokenFixTableView* _multiUserTokenFixHeaderView;
	ACAccountStore* _accountStore;
	NSArray* _layoutConstraints;
	id<HUMediaAccountDelegate> _mediaAccountDelegate;
	NAFuture* _mediaAccountFuture;

}

@property (nonatomic,readonly) HUContactView * contactView;                                           //@synthesize contactView=_contactView - In the implementation block
@property (nonatomic,retain) HUSplitAccountHeaderTableView * splitAccountHeaderView;                  //@synthesize splitAccountHeaderView=_splitAccountHeaderView - In the implementation block
@property (nonatomic,retain) HUMultiUserTokenFixTableView * multiUserTokenFixHeaderView;              //@synthesize multiUserTokenFixHeaderView=_multiUserTokenFixHeaderView - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                           //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                             //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<HUMediaAccountDelegate> mediaAccountDelegate;                  //@synthesize mediaAccountDelegate=_mediaAccountDelegate - In the implementation block
@property (nonatomic,retain) NAFuture * mediaAccountFuture;                                           //@synthesize mediaAccountFuture=_mediaAccountFuture - In the implementation block
@property (nonatomic,retain) NSAttributedString * message; 
-(void)setMessage:(NSAttributedString *)arg1 ;
-(NSAttributedString *)message;
-(id)_keyDescriptors;
-(ACAccountStore *)accountStore;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)dealloc;
-(HUContactView *)contactView;
-(NAFuture *)mediaAccountFuture;
-(void)dismissMultiUserTokenFixUI;
-(void)dismissSplitAccountView;
-(id)initWithUserHandle:(id)arg1 home:(id)arg2 delegate:(id)arg3 ;
-(void)presentMultiUserTokenFixUIForMediaAccount:(id)arg1 inHome:(id)arg2 ;
-(void)setAccounts:(id)arg1 forHome:(id)arg2 ;
-(void)showSplitAccountViewIfNeeded;
-(void)setMediaAccountFuture:(NAFuture *)arg1 ;
-(id<HUMediaAccountDelegate>)mediaAccountDelegate;
-(void)setMultiUserTokenFixHeaderView:(HUMultiUserTokenFixTableView *)arg1 ;
-(HUMultiUserTokenFixTableView *)multiUserTokenFixHeaderView;
-(void)setSplitAccountHeaderView:(HUSplitAccountHeaderTableView *)arg1 ;
-(HUSplitAccountHeaderTableView *)splitAccountHeaderView;
-(void)setMediaAccountDelegate:(id<HUMediaAccountDelegate>)arg1 ;
@end

