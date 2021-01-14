/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/CNContactViewHostAsyncProtocol.h>
#import <libobjc.A.dylib/CNContactViewServiceProtocol.h>
#import <libobjc.A.dylib/CNContactViewHostProtocol.h>

@class CNContactViewHostViewController, NSString;

@interface CNContactViewExtensionHostContext : NSExtensionContext <CNContactViewHostAsyncProtocol, CNContactViewServiceProtocol, CNContactViewHostProtocol> {

	CNContactViewHostViewController* _viewController;

}

@property (assign,nonatomic,__weak) CNContactViewHostViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setViewController:(CNContactViewHostViewController *)arg1 ;
-(void)didCompleteWithContact:(id)arg1 ;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(void)didDeleteContact:(id)arg1 ;
-(void)toggleEditing;
-(void)isPresentingFullscreen:(BOOL)arg1 ;
-(void)isPresentingEditingController:(BOOL)arg1 ;
-(void)didChangeToEditMode:(BOOL)arg1 ;
-(void)didChangePreferredContentSize:(CGSize)arg1 ;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)presentCancelConfirmationAlert;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToShowTitle:(BOOL)arg1 ;
-(void)performConfirmedCancel;
-(void)viewDidAppear;
-(void)asyncShouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(CNContactViewHostViewController *)viewController;
-(id)protocolService;
-(void)editCancel;
@end

