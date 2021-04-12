/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSystemServiceServerAppSwitcherDelegate.h>

@class FBServiceClientAuthenticator, SBRecentAppLayouts, SBCommandTabController, NSString;

@interface SBAppSwitcherSystemService : NSObject <SBSystemServiceServerAppSwitcherDelegate> {

	FBServiceClientAuthenticator* _requestAppearanceForHiddenAppAuthenticator;
	SBRecentAppLayouts* _recentAppLayouts;
	SBCommandTabController* _commandTabController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRecentAppLayoutsController:(id)arg1 commandTabController:(id)arg2 ;
-(void)requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 forClient:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)systemServiceServer:(id)arg1 requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg2 assertionPort:(id)arg3 forClient:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
@end

