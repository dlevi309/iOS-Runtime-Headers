/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)remove:(id)arg1 ;
-(id)init;
-(id<SBAppSwitcherModelDelegate>)delegate;
-(void)_warmUpIconsForRecentAppLayouts:(id)arg1 ;
-(void)_warmUpIconsForAppLayout:(id)arg1 ;
-(void)removeAppLayouts:(id)arg1 ;
-(void)hide:(id)arg1 ;
-(id)initWithIconController:(id)arg1 applicationController:(id)arg2 recents:(id)arg3 ;
-(void)setDelegate:(id<SBAppSwitcherModelDelegate>)arg1 ;
-(void)addToFront:(id)arg1 ;
-(void)recentAppLayouts:(id)arg1 didRemoveAppLayoutForFallingOffList:(id)arg2 ;
-(id)appLayoutsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(BOOL)arg2 ;
-(void)replaceAppLayout:(id)arg1 withAppLayout:(id)arg2 ;
-(id)recentDisplayItemsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(BOOL)arg2 ;
-(id)appLayoutsIncludingHiddenAppLayouts:(BOOL)arg1 ;
-(id)_recentAppLayoutsController;
-(void)dealloc;
@end

