/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNContact *)contact;
-(void)performAction;
-(id)targetApplicationBundleIdentifier;
-(id)icon;
-(BOOL)isCopyActionItem;
-(id)actionURL;
-(void)action:(id)arg1 didDismissAlertController:(id)arg2 ;
-(id)label;
-(NSString *)icsString;
-(BOOL)shouldDismissAlertWhenActionIsTaken;
-(id)initWithAction:(id)arg1 ddAction:(id)arg2 ;
@end

