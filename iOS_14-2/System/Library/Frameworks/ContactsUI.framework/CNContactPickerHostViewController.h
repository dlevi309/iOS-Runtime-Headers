/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CNContactPickerContentViewController.h>
#import <libobjc.A.dylib/CNContactPickerHostProtocol.h>

@protocol CNContactPickerContentDelegate, NSCopying;
@class NSExtension, UINavigationController, UIBarButtonItem, NSString;

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol> {

	id<CNContactPickerContentDelegate> _delegate;
	id<NSCopying> _currentRequestIdentifier;
	NSExtension* _extension;

}

@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;                          //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                         //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactPickerContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (nonatomic,readonly) UIBarButtonItem * addContactBarButtonItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactPickerExtension;
+(BOOL)getViewController:(/*^block*/id)arg1 ;
+(id)contextForIdentifier:(id)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(id<CNContactPickerContentDelegate>)delegate;
-(UIBarButtonItem *)addContactBarButtonItem;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidCancel;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(void)setDelegate:(id<CNContactPickerContentDelegate>)arg1 ;
-(NSExtension *)extension;
-(id<NSCopying>)currentRequestIdentifier;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
-(void)invalidate;
-(UINavigationController *)navigationController;
@end

