/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@protocol EKIdentityProtocol;
@class CNContactViewController, CNContactStore;

@interface EKIdentityViewController : UIViewController <EKEditItemViewControllerProtocol> {

	id<EKIdentityProtocol> _identity;
	CNContactViewController* _personViewController;
	CNContactStore* _store;

}

@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(id)initWithIdentity:(id)arg1 ;
-(void)setIdentity:(id)arg1 ;
-(void)loadView;
-(Class)_CNContactStoreClass;
-(Class)_CNContactClass;
-(Class)_CNContactViewControllerClass;
-(id)contactForIdentity:(id)arg1 ;
-(void)updateControllerWithContact:(id)arg1 isNew:(BOOL)arg2 ;
-(id)CNContactPhoneNumbersKey;
-(id)CNContactEmailAddressesKey;
-(Class)_CNMutableContactClass;
-(Class)_CNLabeledValueClass;
-(id)CNLabelWork;
@end

