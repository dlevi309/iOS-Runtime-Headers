/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIToolbarDelegate.h>

@protocol WFRunWorkflowToolbarDelegate;
@class NSUndoManager, UIToolbar, UIBarButtonItem, NSString;

@interface WFRunWorkflowToolbar : UIView <UIToolbarDelegate> {

	BOOL _running;
	BOOL _editing;
	BOOL _pulsating;
	BOOL _loading;
	BOOL _playEnabled;
	BOOL _shareEnabled;
	BOOL _shareHidden;
	NSUndoManager* _workflowUndoManager;
	id<WFRunWorkflowToolbarDelegate> _delegate;
	UIToolbar* _toolbar;
	UIBarButtonItem* _undoItem;
	UIBarButtonItem* _redoItem;
	UIBarButtonItem* _addItem;
	UIBarButtonItem* _runItem;
	UIBarButtonItem* _stopItem;
	UIBarButtonItem* _shareItem;
	UIBarButtonItem* _flexibleSpaceItem;

}

@property (assign,nonatomic,__weak) UIToolbar * toolbar;                                    //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * undoItem;                                    //@synthesize undoItem=_undoItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * redoItem;                                    //@synthesize redoItem=_redoItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addItem;                                     //@synthesize addItem=_addItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * runItem;                                     //@synthesize runItem=_runItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * stopItem;                                    //@synthesize stopItem=_stopItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareItem;                                   //@synthesize shareItem=_shareItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * flexibleSpaceItem;                           //@synthesize flexibleSpaceItem=_flexibleSpaceItem - In the implementation block
@property (assign,nonatomic,__weak) NSUndoManager * workflowUndoManager;                    //@synthesize workflowUndoManager=_workflowUndoManager - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                                 //@synthesize running=_running - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                 //@synthesize editing=_editing - In the implementation block
@property (assign,getter=isPulsating,nonatomic) BOOL pulsating;                             //@synthesize pulsating=_pulsating - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                 //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL playEnabled;                                              //@synthesize playEnabled=_playEnabled - In the implementation block
@property (assign,nonatomic) BOOL shareEnabled;                                             //@synthesize shareEnabled=_shareEnabled - In the implementation block
@property (assign,nonatomic) BOOL shareHidden;                                              //@synthesize shareHidden=_shareHidden - In the implementation block
@property (assign,nonatomic,__weak) id<WFRunWorkflowToolbarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFRunWorkflowToolbarDelegate>)delegate;
-(void)setDelegate:(id<WFRunWorkflowToolbarDelegate>)arg1 ;
-(BOOL)isRunning;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(BOOL)isEditing;
-(UIToolbar *)toolbar;
-(void)setEditing:(BOOL)arg1 ;
-(UIBarButtonItem *)addItem;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
-(void)setAddItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)flexibleSpaceItem;
-(void)setFlexibleSpaceItem:(UIBarButtonItem *)arg1 ;
-(void)updatePlayButtonVisibility;
-(BOOL)isPulsating;
-(void)addTapped;
-(void)setPulsating:(BOOL)arg1 ;
-(void)playTapped;
-(void)stopTapped;
-(void)shareTapped;
-(void)updateBarButtonItems;
-(BOOL)isNotRunningAndIsEditing;
-(void)setWorkflowUndoManager:(NSUndoManager *)arg1 ;
-(void)updateShareButtonVisibility;
-(void)setPlayEnabled:(BOOL)arg1 ;
-(void)setShareEnabled:(BOOL)arg1 ;
-(void)setShareHidden:(BOOL)arg1 ;
-(void)updateUndoItems;
-(void)undoTapped;
-(void)redoTapped;
-(NSUndoManager *)workflowUndoManager;
-(BOOL)playEnabled;
-(BOOL)shareEnabled;
-(BOOL)shareHidden;
-(UIBarButtonItem *)undoItem;
-(void)setUndoItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)redoItem;
-(void)setRedoItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)runItem;
-(void)setRunItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)stopItem;
-(void)setStopItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)shareItem;
-(void)setShareItem:(UIBarButtonItem *)arg1 ;
@end

