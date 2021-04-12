/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUMediaAccountDelegate.h>
#import <libobjc.A.dylib/HFUserObserver.h>

@protocol HUUserItemManager;
@class HFItemManager, NSAttributedString, _HUUserAvatarHeaderView, HMHome, NAFuture, AMSUIUpdateMultiUserTokenTask, NSString;

@interface HUUserTableViewController : HUItemTableViewController <HUMediaAccountDelegate, HFUserObserver> {

	HFItemManager*<HUUserItemManager> _userItemManager;
	NSAttributedString* _headerMessage;
	_HUUserAvatarHeaderView* _userAvatarHeaderView;
	HMHome* _home;
	NAFuture* _mediaAccountFuture;
	AMSUIUpdateMultiUserTokenTask* _multiUserTokenFixTask;

}

@property (nonatomic,readonly) HFItemManager*<HUUserItemManager> userItemManager;                //@synthesize userItemManager=_userItemManager - In the implementation block
@property (nonatomic,retain) NSAttributedString * headerMessage;                                 //@synthesize headerMessage=_headerMessage - In the implementation block
@property (nonatomic,retain) _HUUserAvatarHeaderView * userAvatarHeaderView;                     //@synthesize userAvatarHeaderView=_userAvatarHeaderView - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NAFuture * mediaAccountFuture;                                      //@synthesize mediaAccountFuture=_mediaAccountFuture - In the implementation block
@property (nonatomic,retain) AMSUIUpdateMultiUserTokenTask * multiUserTokenFixTask;              //@synthesize multiUserTokenFixTask=_multiUserTokenFixTask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(void)user:(id)arg1 didUpdateNeedsiTunesMultiUserRepair:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)userHandle;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)setMultiUserTokenFixTask:(AMSUIUpdateMultiUserTokenTask *)arg1 ;
-(AMSUIUpdateMultiUserTokenTask *)multiUserTokenFixTask;
-(void)dealloc;
-(HMHome *)home;
-(id)itemTableHeaderView;
-(id)initWithUserItemManager:(id)arg1 home:(id)arg2 ;
-(void)performRemovalAction:(id)arg1 ;
-(NAFuture *)mediaAccountFuture;
-(void)_presentMediaAccountErrorsIfNeeded:(BOOL)arg1 ;
-(_HUUserAvatarHeaderView *)userAvatarHeaderView;
-(void)setUserAvatarHeaderView:(_HUUserAvatarHeaderView *)arg1 ;
-(NSAttributedString *)headerMessage;
-(HFItemManager*<HUUserItemManager>)userItemManager;
-(id)_fetchAccountsForHome:(id)arg1 forceCloudKitFetch:(BOOL)arg2 ;
-(void)_presentMultiUserTokenFixUIForAccount:(id)arg1 ;
-(void)_refreshSplitAccountsHeaderViewIfNeeded:(BOOL)arg1 ;
-(void)setMediaAccountFuture:(NAFuture *)arg1 ;
-(void)setAMSiTunesAccount:(id)arg1 forHome:(id)arg2 ;
-(void)signIniTunesAccount:(id)arg1 forHome:(id)arg2 ;
-(void)setHeaderMessage:(NSAttributedString *)arg1 ;
@end

