/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationExtensionViewHostProtocol.h>

@protocol PKExtensionRemoteViewControllerDelegate;
@class NSString;

@interface PKExtensionRemoteViewController : _UIRemoteViewController <PKPaymentAuthorizationExtensionViewHostProtocol> {

	id<PKExtensionRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKExtensionRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<PKExtensionRemoteViewControllerDelegate>)delegate;
-(id)exportedInterface;
-(id)serviceViewControllerInterface;
-(void)setDelegate:(id<PKExtensionRemoteViewControllerDelegate>)arg1 ;
@end

