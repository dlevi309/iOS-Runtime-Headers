/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MSViewServiceHostProtocol.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>

@class _UIRemoteViewController, _MSRemoteViewController, NSExtension, MSServiceAccount, NSString;

@interface MSSetupViewController : UIViewController <MSViewServiceHostProtocol, _UIRemoteViewControllerContaining> {

	_MSRemoteViewController* _childViewController;
	NSExtension* _extension;
	id _extensionRequest;
	MSServiceAccount* _serviceAccount;
	unsigned long long _testFlags;

}

@property (nonatomic,copy,readonly) MSServiceAccount * serviceAccount;                                //@synthesize serviceAccount=_serviceAccount - In the implementation block
@property (nonatomic,readonly) unsigned long long testFlags;                                          //@synthesize testFlags=_testFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
-(void)requestDismiss;
-(void)_setChildViewController:(id)arg1 ;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)dealloc;
-(unsigned long long)testFlags;
-(id)initWithServiceAccount:(id)arg1 testFlags:(unsigned long long)arg2 ;
-(id)initWithServiceAccount:(id)arg1 ;
-(id)createExtension;
-(id)createExtensionItemWithServiceAccount:(id)arg1 ;
-(void)extensionHandleConnection:(id)arg1 viewController:(id)arg2 error:(id)arg3 ;
-(MSServiceAccount *)serviceAccount;
@end

