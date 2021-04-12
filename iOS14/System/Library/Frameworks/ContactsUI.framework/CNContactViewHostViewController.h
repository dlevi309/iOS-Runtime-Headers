/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CNContactContentViewController.h>
#import <libobjc.A.dylib/CNContactViewHostProtocol.h>

@protocol CNContactViewHostProtocol, CNContactViewControllerPPTDelegate, NSCopying;
@class NSExtension, NSString;

@interface CNContactViewHostViewController : _UIRemoteViewController <CNContactContentViewController, CNContactViewHostProtocol> {

	id<CNContactViewHostProtocol> _delegate;
	id<CNContactViewControllerPPTDelegate> _pptDelegate;
	id<NSCopying> _currentRequestIdentifier;
	NSExtension* _extension;

}

@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;                                 //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactViewHostProtocol> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactViewControllerPPTDelegate> pptDelegate;              //@synthesize pptDelegate=_pptDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactViewExtension;
+(BOOL)getViewController:(/*^block*/id)arg1 ;
+(id)contextForIdentifier:(id)arg1 ;
-(void)setPptDelegate:(id<CNContactViewControllerPPTDelegate>)arg1 ;
-(void)didCompleteWithContact:(id)arg1 ;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(void)didDeleteContact:(id)arg1 ;
-(void)toggleEditing;
-(void)isPresentingFullscreen:(BOOL)arg1 ;
-(void)isPresentingEditingController:(BOOL)arg1 ;
-(void)didChangeToEditMode:(BOOL)arg1 ;
-(void)didChangePreferredContentSize:(CGSize)arg1 ;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)presentCancelConfirmationAlert;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToShowTitle:(BOOL)arg1 ;
-(void)performConfirmedCancel;
-(void)viewDidAppear;
-(id<CNContactViewHostProtocol>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setDelegate:(id<CNContactViewHostProtocol>)arg1 ;
-(id)protocolContext;
-(NSExtension *)extension;
-(id<NSCopying>)currentRequestIdentifier;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
-(void)invalidate;
-(void)editCancel;
-(id<CNContactViewControllerPPTDelegate>)pptDelegate;
@end

