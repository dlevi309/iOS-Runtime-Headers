/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/CNContactPickerServiceProtocol.h>
#import <libobjc.A.dylib/CNContactPickerHostProtocol.h>

@class CNContactPickerHostViewController, NSString;

@interface CNContactPickerExtensionHostContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol> {

	CNContactPickerHostViewController* _viewController;

}

@property (assign,nonatomic,__weak) CNContactPickerHostViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setViewController:(CNContactPickerHostViewController *)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidCancel;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(CNContactPickerHostViewController *)viewController;
@end

