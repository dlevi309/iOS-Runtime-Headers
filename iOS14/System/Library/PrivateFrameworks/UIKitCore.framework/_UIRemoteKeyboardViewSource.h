/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIRemoteKeyboardViewSource <NSObject>
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate; 
@property (nonatomic,readonly) BOOL isOnScreenRotating; 
@property (assign,nonatomic) BOOL dontDismissReachability; 
@required
-(BOOL)dontDismissReachability;
-(void)updateForKeyplaneChangeWithContext:(id)arg1;
-(void)setControllerDelegate:(id)arg1;
-(void)checkPlaceholdersForRemoteKeyboards;
-(void)setDontDismissReachability:(BOOL)arg1;
-(BOOL)isOnScreenRotating;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;

@end

