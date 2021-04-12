/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIWindow, FBSDisplayIdentity, BSServiceConnectionEndpoint;


@protocol SBStarkNotificationsConfiguring <NSObject>
@property (nonatomic,readonly) UIWindow * focusWindow; 
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity; 
@property (getter=isConnectedWirelessly,nonatomic,readonly) BOOL connectedWirelessly; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * openServiceEndpoint; 
@required
-(FBSDisplayIdentity *)displayIdentity;
-(UIWindow *)focusWindow;
-(BOOL)isConnectedWirelessly;
-(BSServiceConnectionEndpoint *)openServiceEndpoint;
-(id)policyForApp:(id)arg1;

@end

