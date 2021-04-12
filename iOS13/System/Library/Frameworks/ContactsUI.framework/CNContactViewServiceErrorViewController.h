/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNErrorViewController.h>
#import <libobjc.A.dylib/CNContactContentViewController.h>

@protocol CNContactViewControllerPPTDelegate, CNContactViewHostProtocol;
@class NSString;

@interface CNContactViewServiceErrorViewController : CNErrorViewController <CNContactContentViewController> {

	id<CNContactViewControllerPPTDelegate> pptDelegate;
	id<CNContactViewHostProtocol> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNContactViewHostProtocol> delegate; 
@property (assign,nonatomic,__weak) id<CNContactViewControllerPPTDelegate> pptDelegate; 
-(id<CNContactViewHostProtocol>)delegate;
-(void)setDelegate:(id<CNContactViewHostProtocol>)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToEditMode:(BOOL)arg1 ;
-(void)editCancel;
-(void)toggleEditing;
-(id<CNContactViewControllerPPTDelegate>)pptDelegate;
-(void)setPptDelegate:(id<CNContactViewControllerPPTDelegate>)arg1 ;
@end

