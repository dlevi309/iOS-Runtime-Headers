/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)_interfaceOrientation;
-(void)_applyTransientOverlayViewController:(id)arg1 toPageContentView:(id)arg2 ;
-(id)init;
-(id<SBFluidSwitcherPageContentViewProviderDelegate>)delegate;
-(id)_snapshotViewForAppLayout:(id)arg1 setActive:(BOOL)arg2 ;
-(id)_viewForService:(id)arg1 appLayout:(id)arg2 ;
-(id)_containerViewController;
-(void)relinquishTransientOverlayViewController:(id)arg1 ;
-(void)_relinquishTransientOverlayViewController:(id)arg1 forPageContentView:(id)arg2 ;
-(void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2 ;
-(void)setDelegate:(id<SBFluidSwitcherPageContentViewProviderDelegate>)arg1 ;
-(id)_snapshotViewDelegate;
-(BOOL)isSuitableForRecycledItemContainer:(id)arg1 ;
-(id)pageContentViewForAppLayout:(id)arg1 setActive:(BOOL)arg2 ;
-(id)existingTransientOverlayViewControllerForAppLayout:(id)arg1 ;
-(CGSize)_pageViewSizeForAppLayout:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 snapshotCache:(id)arg2 lockoutViewProvider:(id)arg3 ;
-(long long)_preferredContentInterfaceOrientationForViewController:(id)arg1 preferredInterfaceOrientation:(long long)arg2 ;
-(void)purgePageContentViewForAppLayout:(id)arg1 ;
-(void)appSwitcherTransientOverlayPageContentViewDidChangeContainerOrientation:(id)arg1 ;
-(void)appSwitcherTransientOverlayPageContentViewDidChangeActive:(id)arg1 ;
@end

