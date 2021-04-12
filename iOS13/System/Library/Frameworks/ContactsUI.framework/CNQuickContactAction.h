/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNQuickAction.h>
#import <libobjc.A.dylib/CNContactActionDelegate.h>

@protocol CNQuickContactActionDelegate;
@class CNContactAction, NSString;

@interface CNQuickContactAction : CNQuickAction <CNContactActionDelegate> {

	CNContactAction* _contactAction;
	id<CNQuickContactActionDelegate> _delegate;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) CNContactAction * contactAction;                               //@synthesize contactAction=_contactAction - In the implementation block
@property (nonatomic,copy) id completionBlock;                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) id<CNQuickContactActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNQuickContactActionDelegate>)delegate;
-(void)setDelegate:(id<CNQuickContactActionDelegate>)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)actionDidFinish:(id)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(CNContactAction *)contactAction;
-(id)initWithContactAction:(id)arg1 ;
-(void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3 ;
-(void)actionDidUpdate:(id)arg1 ;
-(void)actionWasCanceled:(id)arg1 ;
-(id)contactViewCache;
-(void)setContactAction:(CNContactAction *)arg1 ;
@end

