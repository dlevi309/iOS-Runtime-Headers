/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUIDynamicViewController.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>
#import <libobjc.A.dylib/AMSUIDynamicViewControllerDelegate.h>

@class AMSUIWebClientContext, NSString;

@interface AMSUIWebDynamicViewController : AMSUIDynamicViewController <AMSUIWebPagePresenter, AMSUIDynamicViewControllerDelegate> {

	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(id)initWithContext:(id)arg1 URL:(id)arg2 ;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3 ;
-(void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3 ;
-(void)willPresentPageModel:(id)arg1 appearance:(id)arg2 ;
@end

