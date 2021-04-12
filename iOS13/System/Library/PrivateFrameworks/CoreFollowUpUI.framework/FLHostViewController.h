/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>
#import <libobjc.A.dylib/FLExtensionHostInterface.h>

@class _UIRemoteViewController, NSString;

@interface FLHostViewController : _UIRemoteViewController <_UIRemoteViewControllerContaining, FLExtensionHostInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)exportedInterface;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(id)serviceViewControllerInterface;
@end

