/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKRemoteSubcredentialMessageComposeViewControllerProtocol.h>

@protocol PKSubcredentialMessageComposeViewControllerDelegate;
@class NSString;

@interface PKRemoteSubcredentialMessageComposeViewController : _UIRemoteViewController <PKRemoteSubcredentialMessageComposeViewControllerProtocol> {

	BOOL _finished;
	id<PKSubcredentialMessageComposeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKSubcredentialMessageComposeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<PKSubcredentialMessageComposeViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<PKSubcredentialMessageComposeViewControllerDelegate>)arg1 ;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg1 ;
@end

