/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUNameAndIconEditorCellDelegate.h>
#import <libobjc.A.dylib/HUServiceGroupEditorGridViewControllerDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HUServiceGroupEditorViewControllerDelegate;
@class HUServiceGroupEditorGridViewController, NSString, HUServiceGroupEditorItemManager;

@interface HUServiceGroupEditorViewController : HUItemTableViewController <HUNameAndIconEditorCellDelegate, HUServiceGroupEditorGridViewControllerDelegate, HUPresentationDelegateHost> {

	BOOL _hasViewEverAppeared;
	id<HUPresentationDelegate> _presentationDelegate;
	HUServiceGroupEditorGridViewController* _serviceGridViewController;
	id<HUServiceGroupEditorViewControllerDelegate> _serviceGroupEditorDelegate;
	NSString* _editingName;

}

@property (nonatomic,retain) HUServiceGroupEditorItemManager * itemManager; 
@property (nonatomic,readonly) HUServiceGroupEditorGridViewController * serviceGridViewController;                          //@synthesize serviceGridViewController=_serviceGridViewController - In the implementation block
@property (nonatomic,copy) NSString * editingName;                                                                          //@synthesize editingName=_editingName - In the implementation block
@property (nonatomic,readonly) NSString * savedName; 
@property (assign,nonatomic) BOOL hasViewEverAppeared;                                                                      //@synthesize hasViewEverAppeared=_hasViewEverAppeared - In the implementation block
@property (assign,nonatomic,__weak) id<HUServiceGroupEditorViewControllerDelegate> serviceGroupEditorDelegate;              //@synthesize serviceGroupEditorDelegate=_serviceGroupEditorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                                        //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
+(BOOL)adoptsDefaultGridLayoutMargins;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)setEditingName:(NSString *)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(HUServiceGroupEditorGridViewController *)serviceGridViewController;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)initForEditingExistingServiceGroupBuilder:(id)arg1 ;
-(void)_validateDoneButton;
-(BOOL)hasViewEverAppeared;
-(void)setHasViewEverAppeared:(BOOL)arg1 ;
-(NSString *)editingName;
-(void)_updateServiceGroupBuilderName;
-(id<HUServiceGroupEditorViewControllerDelegate>)serviceGroupEditorDelegate;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(NSString *)savedName;
-(void)serviceGroupEditorGrid:(id)arg1 didUpdateServiceGroupBuilder:(id)arg2 ;
-(id)initForCreatingNewServiceGroupFromServices:(id)arg1 home:(id)arg2 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2 ;
-(id)childViewControllersToPreload;
-(void)setServiceGroupEditorDelegate:(id<HUServiceGroupEditorViewControllerDelegate>)arg1 ;
@end

