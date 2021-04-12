/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol EKEventEditViewDelegate;
@class EKEventStore, EKEvent, NSString, EKEventEditor, UIColor;

@interface EKEventEditViewController : UINavigationController <UIAdaptivePresentationControllerDelegate> {

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
+(void)setDefaultDatesForEvent:(id)arg1 ;
+(id)eventEditViewControllerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3 ;
-(void)dealloc;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(id)_leftBarButtonItem;
-(BOOL)isModalInPresentation;
-(BOOL)hasUnsavedChanges;
-(EKEventEditViewController *)strongSelf;
-(EKEventStore *)eventStore;
-(void)_storeChanged:(id)arg1 ;
-(void)setTransitionForModalViewPresentation:(int)arg1 ;
-(void)editor:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(BOOL)displayingRootView;
-(void)setSuggestionKey:(NSString *)arg1 ;
-(void)refreshStartAndEndDates;
-(BOOL)saveWithSpan:(long long)arg1 animated:(BOOL)arg2 ;
-(void)cancelEditingWithDelegateNotification:(BOOL)arg1 forceCancel:(BOOL)arg2 ;
-(BOOL)ignoreUnsavedChanges;
-(BOOL)scrollToNotes;
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
-(EKEventEditor *)editor;
-(id)_confirmDismissAlertExplanationText;
-(id)confirmDismissAlertController;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)cancelEditing;
-(BOOL)editor:(id)arg1 shouldCompleteWithAction:(long long)arg2 ;
-(void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2 ;
-(void)focusAndSelectTitle;
-(void)focusAndSelectStartDate;
-(void)focusTitle;
-(void)setEditorBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)editorBackgroundColor;
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
@end

