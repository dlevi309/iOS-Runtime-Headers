/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIDynamicViewControllerDelegate.h>

@protocol AMSUIDynamicViewControllerDelegate;
@class AMSUIDynamicViewController, NSString;

@interface AMSUIDynamicViewControllerDelegateProxy : NSObject <AMSUIDynamicViewControllerDelegate> {

	id<AMSUIDynamicViewControllerDelegate> _delegate;
	AMSUIDynamicViewController* _dynamicViewController;

}

@property (assign,nonatomic,__weak) AMSUIDynamicViewController * dynamicViewController;              //@synthesize dynamicViewController=_dynamicViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIDynamicViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AMSUIDynamicViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AMSUIDynamicViewControllerDelegate>)arg1 ;
-(void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3 ;
-(id)dynamicViewController:(id)arg1 contentViewControllerWithDictionary:(id)arg2 ;
-(id)dynamicViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(CGRect)arg3 ;
-(void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3 ;
-(AMSUIDynamicViewController *)dynamicViewController;
-(id)initWithDynamicViewController:(id)arg1 ;
-(void)setDynamicViewController:(AMSUIDynamicViewController *)arg1 ;
@end

