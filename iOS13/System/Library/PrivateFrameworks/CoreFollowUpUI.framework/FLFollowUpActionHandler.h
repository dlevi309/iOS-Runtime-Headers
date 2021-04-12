/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/

#import <CoreFollowUp/FLHeadlessActionHandler.h>
#import <libobjc.A.dylib/FLExtensionHostContextInterface.h>

@class FLViewExtensionLoader, UIViewController, NSString;

@interface FLFollowUpActionHandler : FLHeadlessActionHandler <FLExtensionHostContextInterface> {

	FLViewExtensionLoader* _extensionLoader;
	UIViewController* _remoteViewController;
	/*^block*/id _completionHandler;
	/*^block*/id _extensionRequestedViewControllerPresentation;

}

@property (nonatomic,copy) id extensionRequestedViewControllerPresentation;              //@synthesize extensionRequestedViewControllerPresentation=_extensionRequestedViewControllerPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)_extensionLoader;
-(void)handleExtensionBasedAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)extensionDidFinish;
-(void)extensionDidFinishWithError:(id)arg1 ;
-(id)extensionRequestedViewControllerPresentation;
-(void)setExtensionRequestedViewControllerPresentation:(id)arg1 ;
@end

