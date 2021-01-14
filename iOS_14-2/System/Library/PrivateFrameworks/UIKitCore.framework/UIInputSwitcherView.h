/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)activeInstance;
+(id)sharedInstance;
-(void)setInputMode:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didShow;
-(unsigned long long)numberOfItems;
-(CGSize)preferredSize;
-(void)willFade;
-(NSArray *)inputModes;
-(void)fadeWithDelay:(double)arg1 ;
-(BOOL)shouldShow;
-(id)nextInputMode;
-(id)selectedInputMode;
-(void)setShowsSwitches:(BOOL)arg1 ;
-(void)selectInputMode:(id)arg1 ;
-(id)previousInputMode;
-(void)reloadInputModes;
-(BOOL)_canAddLaunchItem;
-(id)finishSplitTransitionBlock;
-(void)setFinishSplitTransitionBlock:(id)arg1 ;
-(BOOL)_isHandBiasSwitchVisible;
-(unsigned long long)defaultSelectedIndex;
-(BOOL)shouldShowSelectionExtraViewForIndexPath:(id)arg1 ;
-(id)defaultInputMode;
-(long long)_indexOfInputSwitcherItemWithIdentifier:(id)arg1 ;
-(long long)_indexOfFastSwitchToggleModeForIdentifier:(id)arg1 ;
-(void)returnToKeyboardIfNeeded;
-(void)selectRowForInputMode:(id)arg1 ;
-(void)willFadeForSelectionAtIndex:(unsigned long long)arg1 ;
-(void)_reloadInputSwitcherItems;
-(void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2 ;
-(id)_itemWithIdentifier:(id)arg1 ;
-(void)switchAction;
-(id)subtitleForItemAtIndex:(unsigned long long)arg1 ;
-(void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(void)_segmentControlValueDidChange:(id)arg1 ;
-(void)didFinishSplitTransition;
-(void)toggleKeyboardFloatingPreference;
-(BOOL)shouldSelectItemAtIndex:(unsigned long long)arg1 ;
-(void)selectNextInputMode;
-(void)selectPreviousInputMode;
-(id)titleForItemAtIndex:(unsigned long long)arg1 ;
-(id)localizedTitleForItemAtIndex:(unsigned long long)arg1 ;
-(id)fontForItemAtIndex:(unsigned long long)arg1 ;
-(id)subtitleFontForItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1 ;
-(void)setFileReportFromSwitcher:(BOOL)arg1 ;
-(BOOL)didHitDockItemWithinTypingWindow;
-(id)buttonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 isForDictation:(BOOL)arg4 tapAction:(/*^block*/id)arg5 ;
-(BOOL)messagesWriteboardFromSwitcher;
-(void)setMessagesWriteboardFromSwitcher:(BOOL)arg1 ;
-(BOOL)fileReportFromSwitcher;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(BOOL)showsSwitches;
@end

