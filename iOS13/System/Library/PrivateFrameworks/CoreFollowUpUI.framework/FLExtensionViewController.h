/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/FLExtensionRemoteContextInterface.h>

@class NSExtensionContext, NSString;

@interface FLExtensionViewController : UIViewController <NSExtensionRequestHandling, FLExtensionRemoteContextInterface> {

	NSExtensionContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)finishProcessing;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)hostInterface;
-(void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)followUpPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
@end

