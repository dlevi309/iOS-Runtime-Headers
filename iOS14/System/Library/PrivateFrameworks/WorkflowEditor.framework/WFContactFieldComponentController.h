/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/CKStatefulViewComponentController.h>
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
-(BOOL)isMounted;
-(void)didMount;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(id)viewControllerContainingContactField:(id)arg1 ;
-(void)willUnmount;
-(void)setMounted:(BOOL)arg1 ;
@end

