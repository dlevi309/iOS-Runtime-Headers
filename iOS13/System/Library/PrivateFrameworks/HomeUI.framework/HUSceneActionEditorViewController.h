/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUSceneServicePickerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUNameAndIconEditorCellDelegate.h>
#import <libobjc.A.dylib/HUIconPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUServiceGridViewControllerDelegate.h>
#import <libobjc.A.dylib/HUMediaSelectionViewControllerDelegate.h>
#import <libobjc.A.dylib/HUDetailsPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HUSceneEditorDelegate;
@class HUQuickControlSummaryNavigationBarTitleView, NSString, NSMutableDictionary, HUSceneActionEditorItemManager, NSSet;

@interface HUSceneActionEditorViewController : HUItemTableViewController <HUSwitchCellDelegate, HUSceneServicePickerViewControllerDelegate, HUNameAndIconEditorCellDelegate, HUIconPickerViewControllerDelegate, HUServiceGridViewControllerDelegate, HUMediaSelectionViewControllerDelegate, HUDetailsPresentationDelegateHost> {

	BOOL _requiresPresentingViewControllerDismissal;
	BOOL _showCancelButton;
	BOOL _hasViewEverAppeared;
	id<HUPresentationDelegate> _presentationDelegate;
	unsigned long long _mode;
	id<HUSceneEditorDelegate> _sceneEditorDelegate;
	HUQuickControlSummaryNavigationBarTitleView* _navigationBarTitleView;
	NSString* _editingName;
	NSMutableDictionary* _actionGridViewControllersByEditorType;

}

@property (nonatomic,readonly) HUSceneActionEditorItemManager * itemManager; 
@property (assign,nonatomic) unsigned long long mode;                                                           //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) HUQuickControlSummaryNavigationBarTitleView * navigationBarTitleView;              //@synthesize navigationBarTitleView=_navigationBarTitleView - In the implementation block
@property (nonatomic,copy) NSString * editingName;                                                              //@synthesize editingName=_editingName - In the implementation block
@property (nonatomic,readonly) NSString * savedName; 
@property (nonatomic,readonly) NSMutableDictionary * actionGridViewControllersByEditorType;                     //@synthesize actionGridViewControllersByEditorType=_actionGridViewControllersByEditorType - In the implementation block
@property (assign,nonatomic) BOOL hasViewEverAppeared;                                                          //@synthesize hasViewEverAppeared=_hasViewEverAppeared - In the implementation block
@property (assign,nonatomic) BOOL showCancelButton;                                                             //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (assign,nonatomic,__weak) id<HUSceneEditorDelegate> sceneEditorDelegate;                              //@synthesize sceneEditorDelegate=_sceneEditorDelegate - In the implementation block
@property (nonatomic,copy) NSSet * prioritizedServices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                            //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,nonatomic) BOOL requiresPresentingViewControllerDismissal;                                    //@synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal - In the implementation block
+(BOOL)adoptsDefaultGridLayoutMargins;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id)commitChanges;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(BOOL)showCancelButton;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)setEditingName:(NSString *)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(HUQuickControlSummaryNavigationBarTitleView *)navigationBarTitleView;
-(void)setNavigationBarTitleView:(HUQuickControlSummaryNavigationBarTitleView *)arg1 ;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)serviceGridViewController:(id)arg1 didTapItem:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)nameAndIconEditorCellDidTapIcon:(id)arg1 ;
-(void)iconPickerDidCancel:(id)arg1 ;
-(void)iconPicker:(id)arg1 didPickIconDescriptor:(id)arg2 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)arg1 ;
-(id)mediaSelectionViewController:(id)arg1 messageForMediaPickerUnavailableReason:(long long)arg2 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)requiresPresentingViewControllerDismissal;
-(void)setRequiresPresentingViewControllerDismissal:(BOOL)arg1 ;
-(void)_validateDoneButton;
-(BOOL)hasViewEverAppeared;
-(void)setHasViewEverAppeared:(BOOL)arg1 ;
-(NSString *)editingName;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(NSString *)savedName;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)childViewControllersToPreload;
-(id)initWithActionSetBuilder:(id)arg1 mode:(unsigned long long)arg2 ;
-(id<HUSceneEditorDelegate>)sceneEditorDelegate;
-(void)setSceneEditorDelegate:(id<HUSceneEditorDelegate>)arg1 ;
-(void)sceneServicePickerDidFinish:(id)arg1 ;
-(void)_presentMediaSelection;
-(void)setPrioritizedServices:(NSSet *)arg1 ;
-(NSSet *)prioritizedServices;
-(BOOL)_allowEditingNameAndIcon;
-(NSMutableDictionary *)actionGridViewControllersByEditorType;
-(void)_updateActionSetBuilderName;
-(id)_actionGridViewControllerForEditorType:(unsigned long long)arg1 ;
-(void)_changeServices:(id)arg1 ;
-(void)_testScene:(id)arg1 ;
-(void)_deleteScene:(id)arg1 indexPath:(id)arg2 ;
@end

