/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <BarcodeSupport/BCSActionPickerItem.h>
#import <libobjc.A.dylib/DDDetectionControllerInteractionDelegate.h>

@class DDAction, CNContact, NSString;

@interface BCSDataDetectionActionPickerItem : BCSActionPickerItem <DDDetectionControllerInteractionDelegate> {

	DDAction* _ddAction;

}

@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) NSString * icsString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)label;
-(CNContact *)contact;
-(void)performAction;
-(void)action:(id)arg1 didDismissAlertController:(id)arg2 ;
-(id)actionURL;
-(BOOL)isCopyActionItem;
-(NSString *)icsString;
-(BOOL)shouldDismissAlertWhenActionIsTaken;
-(id)targetApplicationBundleIdentifier;
-(id)initWithAction:(id)arg1 ddAction:(id)arg2 ;
@end

