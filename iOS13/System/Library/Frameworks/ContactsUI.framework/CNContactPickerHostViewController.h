/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CNContactPickerContentViewController.h>
#import <libobjc.A.dylib/CNContactPickerHostProtocol.h>

@protocol CNContactPickerContentDelegate, NSCopying;
@class NSExtension, NSString, UINavigationController, UIBarButtonItem;

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol> {

	id<CNContactPickerContentDelegate> _delegate;
	id<NSCopying> _currentRequestIdentifier;
	NSExtension* _extension;

}

@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;                          //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                         //@synthesize extension=_extension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNContactPickerContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (nonatomic,readonly) UIBarButtonItem * addContactBarButtonItem; 
+(id)contextForIdentifier:(id)arg1 ;
+(BOOL)getViewController:(/*^block*/id)arg1 ;
+(id)contactPickerExtension;
-(void)invalidate;
-(id<CNContactPickerContentDelegate>)delegate;
-(void)setDelegate:(id<CNContactPickerContentDelegate>)arg1 ;
-(UINavigationController *)navigationController;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(void)pickerDidCancel;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(UIBarButtonItem *)addContactBarButtonItem;
-(id<NSCopying>)currentRequestIdentifier;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
@end

