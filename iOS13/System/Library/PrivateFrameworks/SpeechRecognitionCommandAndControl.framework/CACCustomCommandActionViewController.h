/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/AXGestureRecorderMainViewControllerDelegate.h>
#import <libobjc.A.dylib/CACShortcutsSelectionDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol CACCustomCommandActionViewControllerDelegate;
@class CACSpokenCommandItem, AXSiriShortcut, NSString;

@interface CACCustomCommandActionViewController : UITableViewController <AXGestureRecorderMainViewControllerDelegate, CACShortcutsSelectionDelegate, UITextViewDelegate> {

	BOOL _isPresentingGestureRecorder;
	id<CACCustomCommandActionViewControllerDelegate> _delegate;
	CACSpokenCommandItem* _commandItem;
	AXSiriShortcut* _selectedShortcutForCommand;

}

@property (assign,nonatomic) BOOL isPresentingGestureRecorder;                                              //@synthesize isPresentingGestureRecorder=_isPresentingGestureRecorder - In the implementation block
@property (nonatomic,retain) AXSiriShortcut * selectedShortcutForCommand;                                   //@synthesize selectedShortcutForCommand=_selectedShortcutForCommand - In the implementation block
@property (assign,nonatomic,__weak) id<CACCustomCommandActionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CACSpokenCommandItem * commandItem;                                            //@synthesize commandItem=_commandItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CACCustomCommandActionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CACCustomCommandActionViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)isModalInPresentation;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)gestureRecorder:(id)arg1 saveReplayableGesture:(id)arg2 ;
-(CACSpokenCommandItem *)commandItem;
-(void)setCommandItem:(CACSpokenCommandItem *)arg1 ;
-(void)didSelectShortcut:(id)arg1 ;
-(void)setIsPresentingGestureRecorder:(BOOL)arg1 ;
-(BOOL)isPresentingGestureRecorder;
-(BOOL)_shouldDisallowSelectingRowAtIndexPath:(id)arg1 ;
-(void)_updateForAction:(long long)arg1 ;
-(BOOL)_useDetailCell;
-(id)_stringFromPasteboardDataArray:(id)arg1 ;
-(AXSiriShortcut *)selectedShortcutForCommand;
-(void)setSelectedShortcutForCommand:(AXSiriShortcut *)arg1 ;
@end

