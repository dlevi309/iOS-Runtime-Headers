/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) id<CNContactPickerContentDelegate> delegate; 
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (nonatomic,readonly) UIBarButtonItem * addContactBarButtonItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(id<CNContactPickerContentDelegate>)delegate;
-(UIBarButtonItem *)addContactBarButtonItem;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(void)setDelegate:(id<CNContactPickerContentDelegate>)arg1 ;
-(void)invalidate;
-(UINavigationController *)navigationController;
@end

