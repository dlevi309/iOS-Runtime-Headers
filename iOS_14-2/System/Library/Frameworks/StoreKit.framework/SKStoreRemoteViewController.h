/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<SKStoreRemoteViewControllerDelegate>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNeedsTabSelection;
-(void)presentRequestedViewControllerWithIdentifier:(id)arg1 ;
@end

