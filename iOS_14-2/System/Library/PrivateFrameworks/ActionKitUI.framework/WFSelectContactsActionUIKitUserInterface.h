/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFSelectContactsActionUserInterface.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class NSArray, NSString;

@interface WFSelectContactsActionUIKitUserInterface : WFActionUserInterface <WFSelectContactsActionUserInterface, CNContactPickerDelegate, UIAdaptivePresentationControllerDelegate> {

	BOOL _selectMultiple;
	/*^block*/id _completionHandler;
	NSArray* _contactProperties;

}

@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL selectMultiple;                    //@synthesize selectMultiple=_selectMultiple - In the implementation block
@property (nonatomic,copy) NSArray * contactProperties;              //@synthesize contactProperties=_contactProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)contactPicker:(id)arg1 didSelectContactProperties:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContacts:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(NSArray *)contactProperties;
-(void)setContactProperties:(NSArray *)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithProperties:(id)arg1 selectMultiple:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)selectMultiple;
-(void)finishWithContacts:(id)arg1 error:(id)arg2 ;
-(void)setSelectMultiple:(BOOL)arg1 ;
@end

