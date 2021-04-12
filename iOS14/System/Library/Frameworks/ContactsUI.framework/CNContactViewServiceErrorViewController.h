/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) id<CNContactViewHostProtocol> delegate; 
@property (assign,nonatomic,__weak) id<CNContactViewControllerPPTDelegate> pptDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPptDelegate:(id<CNContactViewControllerPPTDelegate>)arg1 ;
-(void)toggleEditing;
-(void)didChangeToEditMode:(BOOL)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToShowTitle:(BOOL)arg1 ;
-(void)performConfirmedCancel;
-(id<CNContactViewHostProtocol>)delegate;
-(void)setDelegate:(id<CNContactViewHostProtocol>)arg1 ;
-(void)editCancel;
-(id<CNContactViewControllerPPTDelegate>)pptDelegate;
@end

