/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <UIKitCore/UITableViewController.h>

@protocol CACShortcutsSelectionDelegate;
@class NSArray, AXSiriShortcut, NSIndexPath, NSString;

@interface CACShortcutsSelectionTableViewController : UITableViewController {

	id<CACShortcutsSelectionDelegate> _shortcutsSelectionDelegate;
	NSArray* _cachedShortcuts;
	AXSiriShortcut* _previouslySelectedShortcut;
	NSIndexPath* _previouslySelectedIndex;
	NSString* _shortcutsToken;

}

@property (nonatomic,retain) NSArray * cachedShortcuts;                                                 //@synthesize cachedShortcuts=_cachedShortcuts - In the implementation block
@property (nonatomic,retain) AXSiriShortcut * previouslySelectedShortcut;                               //@synthesize previouslySelectedShortcut=_previouslySelectedShortcut - In the implementation block
@property (nonatomic,retain) NSIndexPath * previouslySelectedIndex;                                     //@synthesize previouslySelectedIndex=_previouslySelectedIndex - In the implementation block
@property (nonatomic,retain) NSString * shortcutsToken;                                                 //@synthesize shortcutsToken=_shortcutsToken - In the implementation block
@property (nonatomic,retain) id<CACShortcutsSelectionDelegate> shortcutsSelectionDelegate;              //@synthesize shortcutsSelectionDelegate=_shortcutsSelectionDelegate - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)cancelButtonAction;
-(void)setCachedShortcuts:(NSArray *)arg1 ;
-(void)shortcutsDidChange:(id)arg1 ;
-(NSString *)shortcutsToken;
-(id<CACShortcutsSelectionDelegate>)shortcutsSelectionDelegate;
-(NSArray *)cachedShortcuts;
-(AXSiriShortcut *)previouslySelectedShortcut;
-(void)setPreviouslySelectedIndex:(NSIndexPath *)arg1 ;
-(NSIndexPath *)previouslySelectedIndex;
-(id)initWithPreviouslySelectedShortcut:(id)arg1 ;
-(void)setShortcutsSelectionDelegate:(id<CACShortcutsSelectionDelegate>)arg1 ;
-(void)setPreviouslySelectedShortcut:(AXSiriShortcut *)arg1 ;
-(void)setShortcutsToken:(NSString *)arg1 ;
@end

