/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBAppSwitcherTransientOverlayPageContentViewDelegate.h>

@protocol SBFluidSwitcherPageContentViewProviderDelegate;
@class SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface SBFluidSwitcherPageContentViewProvider : NSObject <SBAppSwitcherTransientOverlayPageContentViewDelegate> {

	id<SBFluidSwitcherPageContentViewProviderDelegate> _delegate;
	SBAppSwitcherSnapshotImageCache* _snapshotCache;
	SBAppSwitcherSnapshotLockoutViewControllerProvider* _lockoutVCProvider;
	NSMapTable* _pageContentViewToTransientOverlayViewController;
	NSMutableArray* _transientOverlayPageContentViews;
	NSMutableDictionary* _switcherServiceViewControllerMap;

}

@property (assign,nonatomic,__weak) id<SBFluidSwitcherPageContentViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SBFluidSwitcherPageContentViewProviderDelegate>)delegate;
-(void)setDelegate:(id<SBFluidSwitcherPageContentViewProviderDelegate>)arg1 ;
-(long long)_interfaceOrientation;
-(id)_containerViewController;
-(id)initWithDelegate:(id)arg1 snapshotCache:(id)arg2 lockoutViewProvider:(id)arg3 ;
-(void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2 ;
-(void)relinquishTransientOverlayViewController:(id)arg1 ;
-(void)purgePageContentViewForAppLayout:(id)arg1 ;
-(BOOL)isSuitableForRecycledItemContainer:(id)arg1 ;
-(id)pageContentViewForAppLayout:(id)arg1 setActive:(BOOL)arg2 ;
-(id)existingTransientOverlayViewControllerForAppLayout:(id)arg1 ;
-(void)_applyTransientOverlayViewController:(id)arg1 toPageContentView:(id)arg2 ;
-(id)_viewForService:(id)arg1 appLayout:(id)arg2 ;
-(CGSize)_pageViewSizeForAppLayout:(id)arg1 ;
-(id)_snapshotViewForAppLayout:(id)arg1 setActive:(BOOL)arg2 ;
-(void)_relinquishTransientOverlayViewController:(id)arg1 forPageContentView:(id)arg2 ;
-(long long)_preferredContentInterfaceOrientationForViewController:(id)arg1 preferredInterfaceOrientation:(long long)arg2 ;
-(id)_snapshotViewDelegate;
-(void)appSwitcherTransientOverlayPageContentViewDidChangeActive:(id)arg1 ;
-(void)appSwitcherTransientOverlayPageContentViewDidChangeContainerOrientation:(id)arg1 ;
@end

