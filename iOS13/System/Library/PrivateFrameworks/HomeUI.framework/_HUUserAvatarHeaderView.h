/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@protocol HUSplitAccountDelegate;
@class HUContactView, HUSplitAccountHeaderTableView, ACAccountStore, NSArray, NAFuture, NSAttributedString;

@interface _HUUserAvatarHeaderView : UITableViewHeaderFooterView {

	HUContactView* _contactView;
	HUSplitAccountHeaderTableView* _splitAccountHeaderView;
	ACAccountStore* _accountStore;
	NSArray* _layoutConstraints;
	id<HUSplitAccountDelegate> _splitAccountDelegate;
	NAFuture* _mediaAccountFuture;

}

@property (nonatomic,readonly) HUContactView * contactView;                                       //@synthesize contactView=_contactView - In the implementation block
@property (nonatomic,retain) HUSplitAccountHeaderTableView * splitAccountHeaderView;              //@synthesize splitAccountHeaderView=_splitAccountHeaderView - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                       //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                         //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<HUSplitAccountDelegate> splitAccountDelegate;              //@synthesize splitAccountDelegate=_splitAccountDelegate - In the implementation block
@property (nonatomic,retain) NAFuture * mediaAccountFuture;                                       //@synthesize mediaAccountFuture=_mediaAccountFuture - In the implementation block
@property (nonatomic,retain) NSAttributedString * message; 
-(void)dealloc;
-(NSAttributedString *)message;
-(void)setMessage:(NSAttributedString *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)_keyDescriptors;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(HUContactView *)contactView;
-(NAFuture *)mediaAccountFuture;
-(void)dismissSplitAccountView;
-(id)initWithUserHandle:(id)arg1 home:(id)arg2 delegate:(id)arg3 ;
-(void)setAccounts:(id)arg1 forHome:(id)arg2 ;
-(void)showSplitAccountViewIfNeeded;
-(void)setMediaAccountFuture:(NAFuture *)arg1 ;
-(id<HUSplitAccountDelegate>)splitAccountDelegate;
-(void)setSplitAccountHeaderView:(HUSplitAccountHeaderTableView *)arg1 ;
-(HUSplitAccountHeaderTableView *)splitAccountHeaderView;
-(void)setSplitAccountDelegate:(id<HUSplitAccountDelegate>)arg1 ;
@end

