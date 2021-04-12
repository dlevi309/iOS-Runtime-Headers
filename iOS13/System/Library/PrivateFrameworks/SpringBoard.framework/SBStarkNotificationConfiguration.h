/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBStarkNotificationsConfiguring.h>
#import <libobjc.A.dylib/SBWindowLayoutStrategy.h>

@class UIWindow, FBSDisplayIdentity, BSServiceConnectionEndpoint, CRCarPlayAppPolicyEvaluator, NSMutableDictionary, NSHashTable, NSString;

@interface SBStarkNotificationConfiguration : NSObject <SBStarkNotificationsConfiguring, SBWindowLayoutStrategy> {

	UIWindow* _focusWindow;
	FBSDisplayIdentity* _displayIdentity;
	BOOL _connectedWirelessly;
	CRCarPlayAppPolicyEvaluator* _appPolicyEvaluator;
	NSMutableDictionary* _appPolicyForBundleID;
	BSServiceConnectionEndpoint* _openServiceEndpoint;
	CGRect _sceneBounds;
	NSHashTable* _layoutObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIWindow * focusWindow;                                             //@synthesize focusWindow=_focusWindow - In the implementation block
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity;                               //@synthesize displayIdentity=_displayIdentity - In the implementation block
@property (getter=isConnectedWirelessly,nonatomic,readonly) BOOL connectedWirelessly;              //@synthesize connectedWirelessly=_connectedWirelessly - In the implementation block
@property (nonatomic,readonly) BSServiceConnectionEndpoint * openServiceEndpoint;                  //@synthesize openServiceEndpoint=_openServiceEndpoint - In the implementation block
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(FBSDisplayIdentity *)displayIdentity;
-(UIWindow *)focusWindow;
-(BOOL)isConnectedWirelessly;
-(BSServiceConnectionEndpoint *)openServiceEndpoint;
-(void)setGeoSupported:(BOOL)arg1 ;
-(id)policyForApp:(id)arg1 ;
-(CGRect)frameWithInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldClipForWindow:(id)arg1 ;
@end

