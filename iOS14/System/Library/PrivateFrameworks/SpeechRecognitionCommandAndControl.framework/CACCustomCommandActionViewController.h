/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)gestureRecorder:(id)arg1 saveReplayableGesture:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<CACCustomCommandActionViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<CACCustomCommandActionViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
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

