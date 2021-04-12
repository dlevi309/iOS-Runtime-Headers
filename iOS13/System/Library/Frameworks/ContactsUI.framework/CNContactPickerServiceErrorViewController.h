/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNErrorViewController.h>
#import <libobjc.A.dylib/CNContactPickerContentViewController.h>

@protocol CNContactPickerContentDelegate;
@class UINavigationController, UIBarButtonItem, NSString;

@interface CNContactPickerServiceErrorViewController : CNErrorViewController <CNContactPickerContentViewController> {

	id<CNContactPickerContentDelegate> delegate;
	UINavigationController* navigationController;
	UIBarButtonItem* addContactBarButtonItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNContactPickerContentDelegate> delegate; 
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (nonatomic,readonly) UIBarButtonItem * addContactBarButtonItem; 
-(void)invalidate;
-(id<CNContactPickerContentDelegate>)delegate;
-(void)setDelegate:(id<CNContactPickerContentDelegate>)arg1 ;
-(UINavigationController *)navigationController;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(UIBarButtonItem *)addContactBarButtonItem;
@end

