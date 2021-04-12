/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)uuid;
-(UIViewController *)mainViewController;
-(id)init;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1 ;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_registerServiceViewController;
-(void)invalidateService;
@end

