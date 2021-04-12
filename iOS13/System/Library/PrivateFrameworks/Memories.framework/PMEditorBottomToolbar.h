/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIToolbar.h>
#import <libobjc.A.dylib/PMEditorAutoEditCompletionActionDelegate.h>

@protocol PMPlayerControlling, PMEditorToolbarDelegate;
@class UIBarButtonItem, NSString;

@interface PMEditorBottomToolbar : UIToolbar <PMEditorAutoEditCompletionActionDelegate> {

	BOOL _showDoneCancelButtons;
	BOOL _fromTitle;
	BOOL _fromMusic;
	BOOL _fromDuration;
	BOOL _autoEditingIsInProgress;
	id<PMPlayerControlling> _playerController;
	id<PMEditorToolbarDelegate> _toolbarDelegate;
	unsigned long long _spinnerState;
	UIBarButtonItem* _doneButtonItem;

}

@property (assign,nonatomic) unsigned long long spinnerState;                                 //@synthesize spinnerState=_spinnerState - In the implementation block
@property (assign,nonatomic) BOOL autoEditingIsInProgress;                                    //@synthesize autoEditingIsInProgress=_autoEditingIsInProgress - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id<PMPlayerControlling> playerController;                 //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditorToolbarDelegate> toolbarDelegate;              //@synthesize toolbarDelegate=_toolbarDelegate - In the implementation block
@property (assign,nonatomic) BOOL showDoneCancelButtons;                                      //@synthesize showDoneCancelButtons=_showDoneCancelButtons - In the implementation block
@property (assign,nonatomic) BOOL fromTitle;                                                  //@synthesize fromTitle=_fromTitle - In the implementation block
@property (assign,nonatomic) BOOL fromMusic;                                                  //@synthesize fromMusic=_fromMusic - In the implementation block
@property (assign,nonatomic) BOOL fromDuration;                                               //@synthesize fromDuration=_fromDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setItems:(id)arg1 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateItems;
-(void)_applicationWillResignActive:(id)arg1 ;
-(id)_flexibleSpaceItem;
-(void)pause:(id)arg1 ;
-(id<PMPlayerControlling>)playerController;
-(void)setPlayerController:(id<PMPlayerControlling>)arg1 ;
-(void)_done:(id)arg1 ;
-(id)_cancelButtonItem;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
-(unsigned long long)spinnerState;
-(void)setSpinnerState:(unsigned long long)arg1 ;
-(void)setToolbarDelegate:(id<PMEditorToolbarDelegate>)arg1 ;
-(id<PMEditorToolbarDelegate>)toolbarDelegate;
-(void)setShowDoneCancelButtons:(BOOL)arg1 ;
-(void)setFromTitle:(BOOL)arg1 ;
-(void)setFromDuration:(BOOL)arg1 ;
-(void)setFromMusic:(BOOL)arg1 ;
-(void)autoEditingDidEnd;
-(void)_updateItemsAnimated:(BOOL)arg1 ;
-(void)setAutoEditingIsInProgress:(BOOL)arg1 ;
-(void)_handlePlayerDidBeginPlayingNotification:(id)arg1 ;
-(void)_handlePlayerDidDidPlayToEndTimeNotification:(id)arg1 ;
-(id)_doneActivityButtonRow;
-(id)_playActivityButtonRow;
-(id)_playButtonRow;
-(void)_play:(id)arg1 ;
-(BOOL)autoEditingIsInProgress;
-(id)_pauseButtonRow;
-(void)_postAggDPlayerStatus:(BOOL)arg1 ;
-(BOOL)showDoneCancelButtons;
-(id)_playButtonItem;
-(id)_pauseButtonItem;
-(id)_fixedSpaceItem;
-(id)_activityItem;
-(BOOL)fromMusic;
-(BOOL)fromTitle;
-(BOOL)fromDuration;
-(void)startAutoEditWaitingBehavior;
-(void)cancelAutoEditWaitingBehavior;
-(void)performAutoEditDidCompleteAction;
-(void)autoEditingWillBegin;
@end

