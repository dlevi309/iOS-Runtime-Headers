/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMenuView.h>
#import <UIKitCore/_UIInputSwitcherSplitMenu.h>

@class NSMutableArray, NSArray, UIInputSwitcherGestureState;

@interface UIInputSwitcherView : UIKeyboardMenuView <_UIInputSwitcherSplitMenu> {

	NSMutableArray* m_inputModes;
	NSArray* m_inputSwitcherItems;
	BOOL m_isForDictation;
	UIInputSwitcherGestureState* m_gestureState;
	BOOL _messagesWriteboardFromSwitcher;
	BOOL _fileReportFromSwitcher;
	BOOL _showsSwitches;
	/*^block*/id m_finishSplitTransitionBlock;

}

@property (nonatomic,readonly) NSArray * inputModes; 
@property (assign,nonatomic) BOOL messagesWriteboardFromSwitcher;              //@synthesize messagesWriteboardFromSwitcher=_messagesWriteboardFromSwitcher - In the implementation block
@property (assign,nonatomic) BOOL fileReportFromSwitcher;                      //@synthesize fileReportFromSwitcher=_fileReportFromSwitcher - In the implementation block
@property (assign,nonatomic) BOOL showsSwitches;                               //@synthesize showsSwitches=_showsSwitches - In the implementation block
@property (nonatomic,copy) id finishSplitTransitionBlock; 
+(id)sharedInstance;
+(id)activeInstance;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredSize;
-(unsigned long long)numberOfItems;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setInputMode:(id)arg1 ;
-(id)selectedInputMode;
-(void)fadeWithDelay:(double)arg1 ;
-(void)setShowsSwitches:(BOOL)arg1 ;
-(void)selectInputMode:(id)arg1 ;
-(NSArray *)inputModes;
-(id)nextInputMode;
-(id)previousInputMode;
-(void)reloadInputModes;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(id)finishSplitTransitionBlock;
-(void)setFinishSplitTransitionBlock:(id)arg1 ;
-(BOOL)_isHandBiasSwitchVisible;
-(unsigned long long)defaultSelectedIndex;
-(BOOL)shouldShowSelectionExtraViewForIndexPath:(id)arg1 ;
-(long long)_indexOfInputSwitcherItemWithIdentifier:(id)arg1 ;
-(void)returnToKeyboardIfNeeded;
-(void)selectRowForInputMode:(id)arg1 ;
-(void)willFadeForSelectionAtIndex:(unsigned long long)arg1 ;
-(id)defaultInputMode;
-(void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2 ;
-(void)_reloadInputSwitcherItems;
-(id)_itemWithIdentifier:(id)arg1 ;
-(id)subtitleForItemAtIndex:(unsigned long long)arg1 ;
-(void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(void)_segmentControlValueDidChange:(id)arg1 ;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)showsSwitches;
-(void)didFinishSplitTransition;
-(void)toggleKeyboardFloatingPreference;
-(BOOL)shouldSelectItemAtIndex:(unsigned long long)arg1 ;
-(void)selectNextInputMode;
-(void)selectPreviousInputMode;
-(BOOL)shouldShow;
-(void)didShow;
-(void)willFade;
-(id)titleForItemAtIndex:(unsigned long long)arg1 ;
-(id)localizedTitleForItemAtIndex:(unsigned long long)arg1 ;
-(id)fontForItemAtIndex:(unsigned long long)arg1 ;
-(id)subtitleFontForItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1 ;
-(void)switchAction;
-(BOOL)didHitDockItemWithinTypingWindow;
-(id)buttonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 isForDictation:(BOOL)arg4 tapAction:(/*^block*/id)arg5 ;
-(BOOL)messagesWriteboardFromSwitcher;
-(void)setMessagesWriteboardFromSwitcher:(BOOL)arg1 ;
-(BOOL)fileReportFromSwitcher;
-(void)setFileReportFromSwitcher:(BOOL)arg1 ;
@end

