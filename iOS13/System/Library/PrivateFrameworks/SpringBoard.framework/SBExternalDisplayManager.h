/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBSDisplayObserving.h>

@protocol SBFAuthenticationStatusProvider;
@class SBMainWorkspace, SBMainDisplaySceneManager, FBSDisplayLayoutPublisher, NSMutableDictionary, NSString;

@interface SBExternalDisplayManager : NSObject <FBSDisplayObserving> {

	SBMainWorkspace* _mainWorkspace;
	id<SBFAuthenticationStatusProvider> _userAuthenticationProvider;
	SBMainDisplaySceneManager* _mainDisplaySceneManager;
	FBSDisplayLayoutPublisher* _layoutPublisher;
	NSMutableDictionary* _displayToControllerMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(id)initWithMainWorkspace:(id)arg1 userAuthenticationProvider:(id)arg2 mainSceneManager:(id)arg3 ;
@end

