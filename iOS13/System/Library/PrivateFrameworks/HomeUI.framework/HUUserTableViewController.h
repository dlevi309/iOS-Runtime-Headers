/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSplitAccountDelegate.h>

@protocol HUUserItemManager;
@class HFItemManager, NSAttributedString, _HUUserAvatarHeaderView, HMHome, NAFuture, NSString;

@interface HUUserTableViewController : HUItemTableViewController <HUSplitAccountDelegate> {

	HFItemManager*<HUUserItemManager> _userItemManager;
	NSAttributedString* _headerMessage;
	_HUUserAvatarHeaderView* _userAvatarHeaderView;
	HMHome* _home;
	NAFuture* _mediaAccountFuture;

}

@property (nonatomic,readonly) HFItemManager*<HUUserItemManager> userItemManager;              //@synthesize userItemManager=_userItemManager - In the implementation block
@property (nonatomic,retain) NSAttributedString * headerMessage;                               //@synthesize headerMessage=_headerMessage - In the implementation block
@property (nonatomic,retain) _HUUserAvatarHeaderView * userAvatarHeaderView;                   //@synthesize userAvatarHeaderView=_userAvatarHeaderView - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                    //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NAFuture * mediaAccountFuture;                                    //@synthesize mediaAccountFuture=_mediaAccountFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)applicationWillEnterForeground;
-(id)userHandle;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)itemTableHeaderView;
-(id)initWithUserItemManager:(id)arg1 home:(id)arg2 ;
-(void)performRemovalAction:(id)arg1 ;
-(NAFuture *)mediaAccountFuture;
-(_HUUserAvatarHeaderView *)userAvatarHeaderView;
-(void)_refreshSplitAccountsHeaderViewIfNeeded:(BOOL)arg1 ;
-(void)setUserAvatarHeaderView:(_HUUserAvatarHeaderView *)arg1 ;
-(NSAttributedString *)headerMessage;
-(HFItemManager*<HUUserItemManager>)userItemManager;
-(id)_fetchAccountsForHome:(id)arg1 forceCloudKitFetch:(BOOL)arg2 ;
-(void)setMediaAccountFuture:(NAFuture *)arg1 ;
-(void)setAMSiTunesAccount:(id)arg1 forHome:(id)arg2 ;
-(void)setHeaderMessage:(NSAttributedString *)arg1 ;
@end

