/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarEditorViewControllerDelegate.h>

@protocol AVTAvatarActionsModelDelegate;
@class AVTAvatarRecord, AVTAvatarRecordDataSource, AVTUIEnvironment, AVTViewSessionProvider, NSArray, NSString;

@interface AVTAvatarActionsModel : NSObject <AVTAvatarEditorViewControllerDelegate> {

	BOOL _allowCreate;
	BOOL _isCreatingAvatar;
	BOOL _buttonsDisabled;
	id<AVTAvatarActionsModelDelegate> _delegate;
	AVTAvatarRecord* _avatarRecord;
	AVTAvatarRecordDataSource* _dataSource;
	AVTUIEnvironment* _environment;
	AVTViewSessionProvider* _avtViewSessionProvider;
	NSArray* _currentInlineActionButtons;

}

@property (nonatomic,retain) AVTAvatarRecord * avatarRecord;                                 //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,readonly) AVTAvatarRecordDataSource * dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                               //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) AVTViewSessionProvider * avtViewSessionProvider;              //@synthesize avtViewSessionProvider=_avtViewSessionProvider - In the implementation block
@property (nonatomic,retain) NSArray * currentInlineActionButtons;                           //@synthesize currentInlineActionButtons=_currentInlineActionButtons - In the implementation block
@property (assign,nonatomic) BOOL isCreatingAvatar;                                          //@synthesize isCreatingAvatar=_isCreatingAvatar - In the implementation block
@property (assign,nonatomic) BOOL buttonsDisabled;                                           //@synthesize buttonsDisabled=_buttonsDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarActionsModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * inlineActionButtons; 
@property (nonatomic,readonly) BOOL allowCreate;                                             //@synthesize allowCreate=_allowCreate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonForActionType:(long long)arg1 withActionBlock:(/*^block*/id)arg2 ;
+(id)localizedTitleForActionType:(long long)arg1 ;
+(unsigned long long)maximumNumberOfButtons;
+(BOOL)actionIsDestructive:(long long)arg1 ;
-(id<AVTAvatarActionsModelDelegate>)delegate;
-(void)setDelegate:(id<AVTAvatarActionsModelDelegate>)arg1 ;
-(AVTUIEnvironment *)environment;
-(AVTAvatarRecordDataSource *)dataSource;
-(BOOL)canPerformActionType:(long long)arg1 ;
-(NSArray *)inlineActionButtons;
-(id)generateInlineActionButtons;
-(void)setButtonsDisabled:(BOOL)arg1 ;
-(void)didTapEdit;
-(void)didTapDuplicate;
-(void)didTapDelete;
-(NSArray *)currentInlineActionButtons;
-(void)setCurrentInlineActionButtons:(NSArray *)arg1 ;
-(BOOL)buttonsDisabled;
-(AVTAvatarRecord *)avatarRecord;
-(void)setAvatarRecord:(AVTAvatarRecord *)arg1 ;
-(void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg1 ;
-(AVTViewSessionProvider *)avtViewSessionProvider;
-(void)presentEditor:(id)arg1 forCreating:(BOOL)arg2 ;
-(void)setIsCreatingAvatar:(BOOL)arg1 ;
-(BOOL)isCreatingAvatar;
-(BOOL)allowCreate;
-(void)didTapCreateNew;
-(id)initWithAvatarRecord:(id)arg1 dataSource:(id)arg2 avtViewSessionProvider:(id)arg3 environment:(id)arg4 allowCreate:(BOOL)arg5 ;
-(void)updateForChangedContentCategorySize;
@end

