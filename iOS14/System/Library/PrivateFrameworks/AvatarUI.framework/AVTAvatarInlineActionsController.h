/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarActionsModelDelegate.h>
#import <libobjc.A.dylib/AVTAvatarEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarActionsController.h>

@protocol AVTAvatarActionsControllerDelegate;
@class AVTAvatarActionsProvider, AVTAvatarRecordDataSource, NSArray, AVTAvatarEditorViewController, AVTViewSessionProvider, AVTUIEnvironment, NSString;

@interface AVTAvatarInlineActionsController : NSObject <AVTAvatarActionsModelDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsController> {

	BOOL _buttonsDisabled;
	BOOL _isCreatingAvatar;
	AVTAvatarActionsProvider* _actionsModel;
	AVTAvatarRecordDataSource* _dataSource;
	id<AVTAvatarActionsControllerDelegate> _delegate;
	NSArray* _inlineActionButtons;
	AVTAvatarEditorViewController* _editorViewController;
	AVTViewSessionProvider* _avtViewSessionProvider;
	AVTUIEnvironment* _environment;

}

@property (nonatomic,retain) NSArray * inlineActionButtons;                                       //@synthesize inlineActionButtons=_inlineActionButtons - In the implementation block
@property (assign,nonatomic) BOOL buttonsDisabled;                                                //@synthesize buttonsDisabled=_buttonsDisabled - In the implementation block
@property (nonatomic,retain) AVTAvatarRecordDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) AVTAvatarActionsProvider * actionsModel;                             //@synthesize actionsModel=_actionsModel - In the implementation block
@property (nonatomic,retain) AVTAvatarEditorViewController * editorViewController;                //@synthesize editorViewController=_editorViewController - In the implementation block
@property (nonatomic,readonly) AVTViewSessionProvider * avtViewSessionProvider;                   //@synthesize avtViewSessionProvider=_avtViewSessionProvider - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                    //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) BOOL isCreatingAvatar;                                               //@synthesize isCreatingAvatar=_isCreatingAvatar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTAvatarActionsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)buttonForAction:(id)arg1 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg1 ;
-(void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2 ;
-(id<AVTAvatarActionsControllerDelegate>)delegate;
-(AVTAvatarRecordDataSource *)dataSource;
-(void)setDelegate:(id<AVTAvatarActionsControllerDelegate>)arg1 ;
-(void)setDataSource:(AVTAvatarRecordDataSource *)arg1 ;
-(NSArray *)inlineActionButtons;
-(void)setButtonsDisabled:(BOOL)arg1 ;
-(BOOL)buttonsDisabled;
-(void)setActionsModel:(AVTAvatarActionsProvider *)arg1 ;
-(AVTAvatarActionsProvider *)actionsModel;
-(AVTViewSessionProvider *)avtViewSessionProvider;
-(void)performEdit;
-(void)presentEditor:(id)arg1 forCreating:(BOOL)arg2 ;
-(void)updateWithActionsModel:(id)arg1 ;
-(void)confirmShouldDeleteRecord:(id)arg1 sender:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)setIsCreatingAvatar:(BOOL)arg1 ;
-(BOOL)isCreatingAvatar;
-(void)setEditorViewController:(AVTAvatarEditorViewController *)arg1 ;
-(void)performCreateForActionsModel:(id)arg1 ;
-(void)performEditForActionsModel:(id)arg1 ;
-(void)performDuplicateForActionsModel:(id)arg1 ;
-(void)performDeleteForActionsModel:(id)arg1 ;
-(void)updateForChangedContentCategorySize;
-(id)initWithDataSource:(id)arg1 avtViewProvider:(id)arg2 environment:(id)arg3 ;
-(void)setInlineActionButtons:(NSArray *)arg1 ;
-(AVTAvatarEditorViewController *)editorViewController;
-(AVTUIEnvironment *)environment;
@end

