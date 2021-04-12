/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBRecentAppLayoutsDelegate.h>

@protocol SBAppSwitcherModelDelegate;
@class SBIconController, SBRecentAppLayouts, NSString;

@interface SBAppSwitcherModel : NSObject <SBRecentAppLayoutsDelegate> {

	SBIconController* _iconController;
	SBRecentAppLayouts* _recents;
	id _recentsChangedNotificationObserver;
	id<SBAppSwitcherModelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBAppSwitcherModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appSwitcherHeaderIconImageDescriptorName;
-(id)init;
-(void)dealloc;
-(void)remove:(id)arg1 ;
-(id<SBAppSwitcherModelDelegate>)delegate;
-(void)setDelegate:(id<SBAppSwitcherModelDelegate>)arg1 ;
-(void)hide:(id)arg1 ;
-(id)_recentAppLayoutsController;
-(id)recentDisplayItemsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(BOOL)arg2 ;
-(void)_warmUpIconsForRecentAppLayouts:(id)arg1 ;
-(void)_warmUpIconsForAppLayout:(id)arg1 ;
-(id)initWithIconController:(id)arg1 applicationController:(id)arg2 ;
-(void)addToFront:(id)arg1 ;
-(void)removeAppLayouts:(id)arg1 ;
-(void)replaceAppLayout:(id)arg1 withAppLayout:(id)arg2 ;
-(void)recentAppLayouts:(id)arg1 didRemoveAppLayoutForFallingOffList:(id)arg2 ;
-(id)appLayoutsIncludingHiddenAppLayouts:(BOOL)arg1 ;
-(id)appLayoutsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(BOOL)arg2 ;
@end

