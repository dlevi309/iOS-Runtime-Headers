/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/EKUIManagedViewController.h>

@protocol EKEventEditViewDelegate;
@class EKEventStore, EKEvent, NSString, EKEventEditor, UIColor;

@interface EKEventEditViewController : UINavigationController <UIAdaptivePresentationControllerDelegate, EKUIManagedViewController> {

	EKEventStore* _store;
	EKEvent* _event;
	NSString* _eventId;
	BOOL _completedWithAction;
	BOOL _ignoreUnsavedChanges;
	int _transitionForModalViewPresentation;
	id<EKEventEditViewDelegate> _editViewDelegate;
	EKEventEditor* _editor;
	EKEventEditViewController* _strongSelf;
	NSString* _suggestionKey;

}

@property (nonatomic,retain) EKEventEditor * editor;                                           //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) EKEventEditViewController * strongSelf;                           //@synthesize strongSelf=_strongSelf - In the implementation block
@property (assign,nonatomic) BOOL showAttachments; 
@property (assign,nonatomic) BOOL scrollToNotes; 
@property (assign,nonatomic) BOOL canHideDoneAndCancelButtons; 
@property (nonatomic,retain) UIColor * editorBackgroundColor; 
@property (assign,nonatomic) int transitionForModalViewPresentation;                           //@synthesize transitionForModalViewPresentation=_transitionForModalViewPresentation - In the implementation block
@property (assign,nonatomic) double editorNavBarLeftContentInset; 
@property (assign,nonatomic) double editorNavBarRightContentInset; 
@property (assign,nonatomic) BOOL timeImplicitlySet; 
@property (nonatomic,retain) NSString * suggestionKey;                                         //@synthesize suggestionKey=_suggestionKey - In the implementation block
@property (nonatomic,readonly) BOOL displayingRootView; 
@property (assign,nonatomic) BOOL ignoreUnsavedChanges;                                        //@synthesize ignoreUnsavedChanges=_ignoreUnsavedChanges - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventEditViewDelegate> editViewDelegate;              //@synthesize editViewDelegate=_editViewDelegate - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore; 
@property (nonatomic,retain) EKEvent * event; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventEditViewControllerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3 ;
+(void)setDefaultDatesForEvent:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(EKEventStore *)eventStore;
-(void)_storeChanged:(id)arg1 ;
-(void)focusTitle;
-(void)setEditorBackgroundColor:(UIColor *)arg1 ;
-(void)setEditorNavBarLeftContentInset:(double)arg1 ;
-(double)editorNavBarLeftContentInset;
-(void)setEditorNavBarRightContentInset:(double)arg1 ;
-(double)editorNavBarRightContentInset;
-(id)_eventEditorForTestingOnly;
-(id<EKEventEditViewDelegate>)editViewDelegate;
-(void)setEditViewDelegate:(id<EKEventEditViewDelegate>)arg1 ;
-(void)setEditor:(EKEventEditor *)arg1 ;
-(void)setStrongSelf:(EKEventEditViewController *)arg1 ;
-(int)transitionForModalViewPresentation;
-(NSString *)suggestionKey;
-(void)setIgnoreUnsavedChanges:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(EKEventEditViewController *)strongSelf;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)wantsManagement;
-(BOOL)canManagePresentationStyle;
-(CGSize)preferredContentSize;
-(BOOL)shouldAutorotate;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(EKEvent *)event;
-(BOOL)isModalInPresentation;
-(EKEventEditor *)editor;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIColor *)editorBackgroundColor;
-(id)_leftBarButtonItem;
-(void)setTransitionForModalViewPresentation:(int)arg1 ;
-(void)editor:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(BOOL)displayingRootView;
-(void)setSuggestionKey:(NSString *)arg1 ;
-(void)refreshStartAndEndDates;
-(BOOL)saveWithSpan:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)ignoreUnsavedChanges;
-(BOOL)scrollToNotes;
-(void)cancelEditingWithDelegateNotification:(BOOL)arg1 forceCancel:(BOOL)arg2 ;
-(void)setScrollToNotes:(BOOL)arg1 ;
-(BOOL)showAttachments;
-(void)setShowAttachments:(BOOL)arg1 ;
-(BOOL)canHideDoneAndCancelButtons;
-(void)setCanHideDoneAndCancelButtons:(BOOL)arg1 ;
-(void)handleTapOutside;
-(void)completeAndSave;
-(void)completeAndSaveWithContinueBlock:(/*^block*/id)arg1 ;
-(BOOL)willPresentDialogOnSave;
-(BOOL)timeImplicitlySet;
-(void)setTimeImplicitlySet:(BOOL)arg1 ;
-(id)_confirmDismissAlertExplanationText;
-(id)confirmDismissAlertController;
-(void)cancelEditing;
-(BOOL)editor:(id)arg1 shouldCompleteWithAction:(long long)arg2 ;
-(void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2 ;
-(void)focusAndSelectTitle;
-(void)focusAndSelectStartDate;
-(void)dealloc;
-(BOOL)hasUnsavedChanges;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

