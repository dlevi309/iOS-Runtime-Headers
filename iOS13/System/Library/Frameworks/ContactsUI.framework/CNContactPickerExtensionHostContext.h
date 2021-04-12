/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(void)setViewController:(CNContactPickerHostViewController *)arg1 ;
-(CNContactPickerHostViewController *)viewController;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(void)pickerDidCancel;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
@end

