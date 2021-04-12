/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>
#import <libobjc.A.dylib/HUDetailsPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HUContainedMediaAccessoriesGridViewControllerDelegate;
@class HFMediaAccessoryItem, NSString;

@interface HUContainedMediaAccessoriesGridViewController : HUServiceGridViewController <HUPresentationDelegate, HUServiceGridItemManagerDelegate, HUDetailsPresentationDelegateHost> {

	BOOL _requiresPresentingViewControllerDismissal;
	BOOL _presentedModally;
	id<HUPresentationDelegate> _presentationDelegate;
	HFMediaAccessoryItem* _mediaAccessoryItem;
	id<HUContainedMediaAccessoriesGridViewControllerDelegate> _mediaAccessoryGridDelegate;

}

@property (assign,getter=isPresentedModally,nonatomic) BOOL presentedModally;                                                          //@synthesize presentedModally=_presentedModally - In the implementation block
@property (nonatomic,copy,readonly) HFMediaAccessoryItem * mediaAccessoryItem;                                                         //@synthesize mediaAccessoryItem=_mediaAccessoryItem - In the implementation block
@property (assign,nonatomic,__weak) id<HUContainedMediaAccessoriesGridViewControllerDelegate> mediaAccessoryGridDelegate;              //@synthesize mediaAccessoryGridDelegate=_mediaAccessoryGridDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                                                   //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)viewDidLoad;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(BOOL)isPresentedModally;
-(void)setPresentedModally:(BOOL)arg1 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)_done:(id)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(void)_edit:(id)arg1 ;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(void)_updateRightBarButtons;
-(BOOL)requiresPresentingViewControllerDismissal;
-(void)setRequiresPresentingViewControllerDismissal:(BOOL)arg1 ;
-(id)initWithAccessoryContainerItem:(id)arg1 ;
-(void)setMediaAccessoryGridDelegate:(id<HUContainedMediaAccessoriesGridViewControllerDelegate>)arg1 ;
-(id)initWithMediaAccessoryContainerItem:(id)arg1 isPresentedModally:(BOOL)arg2 valueSource:(id)arg3 ;
-(HFMediaAccessoryItem *)mediaAccessoryItem;
-(id<HUContainedMediaAccessoriesGridViewControllerDelegate>)mediaAccessoryGridDelegate;
@end

