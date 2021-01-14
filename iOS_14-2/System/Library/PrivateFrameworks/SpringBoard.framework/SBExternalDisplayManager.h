/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBSDisplayObserving.h>

@protocol SBFAuthenticationStatusProvider;
@class FBSDisplayMonitor, SBMainWorkspace, SBMainDisplaySceneManager, FBSDisplayLayoutPublisher, NSMutableDictionary, NSMutableSet, NSString;

@interface SBExternalDisplayManager : NSObject <FBSDisplayObserving> {

	FBSDisplayMonitor* _displayMonitor;
	SBMainWorkspace* _mainWorkspace;
	id<SBFAuthenticationStatusProvider> _userAuthenticationProvider;
	SBMainDisplaySceneManager* _mainDisplaySceneManager;
	FBSDisplayLayoutPublisher* _layoutPublisher;
	NSMutableDictionary* _displayToControllerMap;
	NSMutableSet* _disconnectingDisplays;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithDisplayMonitor:(id)arg1 mainWorkspace:(id)arg2 userAuthenticationProvider:(id)arg3 mainSceneManager:(id)arg4 ;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
@end

