/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationExtensionViewHostProtocol.h>

@protocol PKExtensionRemoteViewControllerDelegate;
@class NSString;

@interface PKExtensionRemoteViewController : _UIRemoteViewController <PKPaymentAuthorizationExtensionViewHostProtocol> {

	id<PKExtensionRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKExtensionRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<PKExtensionRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKExtensionRemoteViewControllerDelegate>)arg1 ;
-(id)exportedInterface;
-(id)serviceViewControllerInterface;
@end

