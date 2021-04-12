/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNContactViewHostProtocol> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactViewControllerPPTDelegate> pptDelegate;              //@synthesize pptDelegate=_pptDelegate - In the implementation block
+(id)contextForIdentifier:(id)arg1 ;
+(id)contactViewExtension;
+(BOOL)getViewController:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id<CNContactViewHostProtocol>)delegate;
-(void)setDelegate:(id<CNContactViewHostProtocol>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(void)didCompleteWithContact:(id)arg1 ;
-(void)didDeleteContact:(id)arg1 ;
-(void)isPresentingFullscreen:(BOOL)arg1 ;
-(void)isPresentingEditingController:(BOOL)arg1 ;
-(void)didChangePreferredContentSize:(CGSize)arg1 ;
-(void)viewDidAppear;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)presentCancelConfirmationAlert;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToEditMode:(BOOL)arg1 ;
-(void)editCancel;
-(void)toggleEditing;
-(void)performConfirmedCancel;
-(id<CNContactViewControllerPPTDelegate>)pptDelegate;
-(void)setPptDelegate:(id<CNContactViewControllerPPTDelegate>)arg1 ;
-(id)protocolContext;
-(id<NSCopying>)currentRequestIdentifier;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
@end

