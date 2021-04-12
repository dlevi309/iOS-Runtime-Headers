/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>

@protocol NSCopying;
@class NSExtension, NSString;

@interface NCNotificationExtensionHostViewController : _UIRemoteViewController {

	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;
	NSString* _notificationRequestIdentifier;

}

@property (assign,nonatomic,__weak) NSExtension * extension;                      //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> extensionRequestIdentifier;              //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * notificationRequestIdentifier;              //@synthesize notificationRequestIdentifier=_notificationRequestIdentifier - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(BOOL)_canShowWhileLocked;
-(NSExtension *)extension;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)extensionRequestIdentifier;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)notificationRequestIdentifier;
-(void)setNotificationRequestIdentifier:(NSString *)arg1 ;
@end

