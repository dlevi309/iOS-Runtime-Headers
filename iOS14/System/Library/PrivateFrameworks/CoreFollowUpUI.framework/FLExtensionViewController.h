/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(id)hostInterface;
-(void)finishProcessing;
-(void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)followUpPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)syncHostInterface;
@end

