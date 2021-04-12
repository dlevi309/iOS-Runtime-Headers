/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ComponentKit/CKStatefulViewComponentController.h>
#import <libobjc.A.dylib/WFContactFieldDelegate.h>

@class NSString;

@interface WFContactFieldComponentController : CKStatefulViewComponentController <WFContactFieldDelegate> {

	BOOL _mounted;

}

@property (assign,getter=isMounted,nonatomic) BOOL mounted;              //@synthesize mounted=_mounted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(void)didMount;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(id)viewControllerContainingContactField:(id)arg1 ;
-(void)willUnmount;
-(BOOL)isMounted;
-(void)setMounted:(BOOL)arg1 ;
@end

