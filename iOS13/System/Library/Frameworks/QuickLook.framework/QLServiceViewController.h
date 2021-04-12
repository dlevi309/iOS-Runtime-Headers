/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController, NSUUID;

@interface QLServiceViewController : UIViewController {

	BOOL _isAccessoryView;
	UIViewController* _mainViewController;
	NSUUID* _uuid;

}

@property (readonly) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (__weak,readonly) UIViewController * mainViewController;              //@synthesize mainViewController=_mainViewController - In the implementation block
+(id)_getServiceWithUUID:(id)arg1 ;
+(id)_serviceViewControllers;
-(id)init;
-(NSUUID *)uuid;
-(UIViewController *)mainViewController;
-(void)invalidateService;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1 ;
-(void)_registerServiceViewController;
@end

