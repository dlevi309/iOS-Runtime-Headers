/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKStoreExtensionClientInterface.h>

@protocol SKStoreRemoteViewControllerDelegate;
@class NSString;

@interface SKStoreRemoteViewController : _UIRemoteViewController <SKStoreExtensionClientInterface> {

	id<SKStoreRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKStoreRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<SKStoreRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKStoreRemoteViewControllerDelegate>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setNeedsTabSelection;
-(void)presentRequestedViewControllerWithIdentifier:(id)arg1 ;
@end

