/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/CKComponentController.h>
#import <libobjc.A.dylib/WFLocationPickerViewControllerDelegate.h>

@class NSString;

@interface WFLocationParameterComponentController : CKComponentController <WFLocationPickerViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped:(id)arg1 ;
-(void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2 ;
-(void)locationPickerDidCancel:(id)arg1 ;
@end

