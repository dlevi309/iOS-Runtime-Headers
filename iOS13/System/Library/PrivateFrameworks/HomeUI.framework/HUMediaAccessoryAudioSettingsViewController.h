/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUHomePodStereoSwapperCellDelegate.h>
#import <libobjc.A.dylib/HUHomePodDetailViewDelegate.h>
#import <libobjc.A.dylib/HUDetailsPresentationDelegateHost.h>

@protocol HUPresentationDelegate;
@class HFMediaSystemBuilder, NAFuture, HUMediaAccessoryAudioSettingsItemManager, NSString;

@interface HUMediaAccessoryAudioSettingsViewController : HUItemTableViewController <HUHomePodStereoSwapperCellDelegate, HUHomePodDetailViewDelegate, HUDetailsPresentationDelegateHost> {

	BOOL _requiresPresentingViewControllerDismissal;
	id<HUPresentationDelegate> _presentationDelegate;
	HFMediaSystemBuilder* _mediaSystemBuilder;
	NAFuture* _accessoryIdentifyFuture;

}

@property (nonatomic,readonly) HFMediaSystemBuilder * mediaSystemBuilder;                           //@synthesize mediaSystemBuilder=_mediaSystemBuilder - In the implementation block
@property (nonatomic,readonly) HUMediaAccessoryAudioSettingsItemManager * itemManager; 
@property (nonatomic,retain) NAFuture * accessoryIdentifyFuture;                                    //@synthesize accessoryIdentifyFuture=_accessoryIdentifyFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,nonatomic) BOOL requiresPresentingViewControllerDismissal;                        //@synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal - In the implementation block
-(id)item;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)requiresPresentingViewControllerDismissal;
-(void)setRequiresPresentingViewControllerDismissal:(BOOL)arg1 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(void)_updateSwapperCell:(id)arg1 ;
-(NAFuture *)accessoryIdentifyFuture;
-(HFMediaSystemBuilder *)mediaSystemBuilder;
-(void)setAccessoryIdentifyFuture:(NAFuture *)arg1 ;
-(id)_homePodStereoSwapperCell;
-(void)didPressSwapButton:(id)arg1 ;
-(void)didTapSpeaker:(id)arg1 ;
-(id)initWithMediaSystemBuilder:(id)arg1 mediaAccessoryItem:(id)arg2 ;
@end

