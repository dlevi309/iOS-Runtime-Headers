/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SFPasswordRemoteViewControllerProtocol.h>

@protocol SFPasswordRemoteViewControllerDelegate;
@class NSString;

@interface SFPasswordRemoteViewController : _UIRemoteViewController <SFPasswordRemoteViewControllerProtocol> {

	id<SFPasswordRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFPasswordRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)passwordServiceViewControllerName;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<SFPasswordRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SFPasswordRemoteViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)willDismissServiceViewController;
@end

