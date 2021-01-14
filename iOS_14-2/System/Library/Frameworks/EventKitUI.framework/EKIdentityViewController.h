/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)loadView;
@end

