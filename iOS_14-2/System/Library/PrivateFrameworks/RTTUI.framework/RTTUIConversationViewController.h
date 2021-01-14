/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <RTTUI/RTTUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <RTTUI/RTTUIUtteranceCellDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <RTTUI/RTTUIServiceCellDelegate.h>

@protocol BSInvalidatable;
@class RTTUITextView, CAShapeLayer, UIButton, AXDispatchTimer, NSMutableCharacterSet, NSDictionary, NSMutableString, NSMutableArray, RTTConversation, DDParsecCollectionViewController, UITableView, RTTUtterance, TUCall, NSString;

@interface RTTUIConversationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, RTTUIUtteranceCellDelegate, UITextViewDelegate, RTTUIServiceCellDelegate> {

	RTTUITextView* _textView;
	CAShapeLayer* _bubbleLayer;
	UIButton* _gaButton;
	AXDispatchTimer* _ttyPredictionsTimer;
	AXDispatchTimer* _realTimeTimeout;
	AXDispatchTimer* _muteStatusTimeout;
	NSMutableCharacterSet* _unsupportedCharacterSet;
	NSDictionary* _asciiSubstitutions;
	AXDispatchTimer* _voAnnouncementTimer;
	NSMutableString* _voAnnouncementBuffer;
	NSMutableArray* _serviceUpdates;
	id<BSInvalidatable> _sleepTimerDisabledAssertion;
	AXDispatchTimer* _arouetQuickCoalescer;
	RTTConversation* _conversation;
	/*^block*/id _rttConversationAvailabilityCallback;
	DDParsecCollectionViewController* _lookupController;
	UITableView* _tableView;
	RTTUtterance* _currentUtterance;
	TUCall* _call;

}

@property (nonatomic,retain) DDParsecCollectionViewController * lookupController;              //@synthesize lookupController=_lookupController - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) RTTConversation * conversation;                                   //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) RTTUtterance * currentUtterance;                                  //@synthesize currentUtterance=_currentUtterance - In the implementation block
@property (nonatomic,retain) TUCall * call;                                                    //@synthesize call=_call - In the implementation block
@property (nonatomic,copy) id rttConversationAvailabilityCallback;                             //@synthesize rttConversationAvailabilityCallback=_rttConversationAvailabilityCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerForCall:(id)arg1 ;
+(id)viewControllerForConversation:(id)arg1 ;
+(BOOL)_validRectangle:(CGRect)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(TUCall *)call;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(UITableView *)tableView;
-(void)setupTableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_define:(id)arg1 ;
-(void)setConversation:(RTTConversation *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)updateMuteButton;
-(RTTConversation *)conversation;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)textViewDidChange:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)cannedResponses;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setCall:(TUCall *)arg1 ;
-(void)callDidConnect:(id)arg1 ;
-(void)dealloc;
-(id)addUtterance:(id)arg1 ;
-(void)updateCallActiveStatus:(BOOL)arg1 ;
-(id)currentContactPath;
-(id)utteranceCellAtIndexPath:(id)arg1 ;
-(void)deviceDidReceiveString:(id)arg1 forUtterance:(id)arg2 ;
-(void)addServiceCellWithUpdate:(id)arg1 options:(id)arg2 ;
-(void)removeServiceCellWithUpdate:(id)arg1 ;
-(id)textViewUtterance;
-(void)updateCallHold:(id)arg1 ;
-(void)updateGAButton;
-(void)setTextViewUtterance:(id)arg1 ;
-(id)rttConversationAvailabilityCallback;
-(void)setLookupController:(DDParsecCollectionViewController *)arg1 ;
-(id)contactDisplayString;
-(void)updateInputEnabled;
-(BOOL)currentCallIsDowngraded;
-(void)toggleMute:(id)arg1 ;
-(void)updateCallDowngradeStatus;
-(void)updateTableViewSizeAnimated:(BOOL)arg1 ;
-(BOOL)currentCallIsOnHold;
-(void)showCallEnded;
-(void)shareCallInfo:(id)arg1 ;
-(void)_updateMuteButtonState;
-(void)replaceServiceCellWithOldUpdate:(id)arg1 withNewUpdate:(id)arg2 options:(id)arg3 ;
-(void)_addServiceCellWithUpdate:(id)arg1 options:(id)arg2 ;
-(void)_removeServiceCellWithUpdate:(id)arg1 ;
-(void)_replaceServiceCellWithOldUpdate:(id)arg1 withNewUpdate:(id)arg2 options:(id)arg3 ;
-(void)_scrollToIndexPathIfNecessary:(id)arg1 animated:(BOOL)arg2 ;
-(void)utteranceCellDidUpdateContent:(id)arg1 ;
-(void)updateVoiceOverAnnouncement:(id)arg1 ;
-(id)lastCellRowPathForUtterance:(id)arg1 ;
-(void)setCurrentUtterance:(RTTUtterance *)arg1 ;
-(RTTUtterance *)currentUtterance;
-(id)lastConversationRowPathForUtterance:(id)arg1 ;
-(void)_processRealtimeTimeout;
-(void)gaButtonPressed:(id)arg1 ;
-(void)updateViewForKeyboard:(id)arg1 ;
-(void)realtimeTextDidChange;
-(BOOL)utteranceIsSelected;
-(DDParsecCollectionViewController *)lookupController;
-(id)currentCall;
-(id)inputTextView;
-(void)updateUtterance:(id)arg1 forIndexPath:(id)arg2 ;
-(id)serviceUpdateCellAtIndexPath:(id)arg1 ;
-(void)replyCell:(id)arg1 didActivateWithReplyButtonType:(unsigned long long)arg2 ;
-(void)setRttConversationAvailabilityCallback:(id)arg1 ;
@end

