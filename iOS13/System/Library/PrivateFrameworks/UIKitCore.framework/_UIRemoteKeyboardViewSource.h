/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIRemoteKeyboardViewSource <NSObject>
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate; 
@property (nonatomic,readonly) BOOL isOnScreenRotating; 
@property (assign,nonatomic) BOOL dontDismissReachability; 
@required
-(void)checkPlaceholdersForRemoteKeyboards;
-(void)updateForKeyplaneChangeWithContext:(id)arg1;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id)arg1;
-(BOOL)isOnScreenRotating;
-(BOOL)dontDismissReachability;
-(void)setDontDismissReachability:(BOOL)arg1;

@end

