/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ComponentKit/CKComponentController.h>
#import <libobjc.A.dylib/WFAppSearchViewControllerDelegate.h>

@class NSString;

@interface WFAppPickerParameterComponentController : CKComponentController <WFAppSearchViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped:(id)arg1 ;
-(void)parameterLayoutTapped:(id)arg1 ;
-(void)appSearchViewController:(id)arg1 didFinishWithApp:(id)arg2 ;
-(void)appSearchViewControllerDidCancel:(id)arg1 ;
@end

