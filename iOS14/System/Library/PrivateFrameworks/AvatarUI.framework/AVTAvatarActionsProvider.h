/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarActionsModelDelegate;
@class AVTAvatarRecord, UIAction, AVTAvatarRecordDataSource;

@interface AVTAvatarActionsProvider : NSObject {

	BOOL _allowCreate;
	id<AVTAvatarActionsModelDelegate> _delegate;
	AVTAvatarRecord* _avatarRecord;
	UIAction* _createAction;
	UIAction* _editAction;
	UIAction* _duplicateAction;
	UIAction* _deleteAction;
	AVTAvatarRecordDataSource* _dataSource;

}

@property (nonatomic,retain) AVTAvatarRecord * avatarRecord;                                 //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,readonly) AVTAvatarRecordDataSource * dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIAction * createAction;                                        //@synthesize createAction=_createAction - In the implementation block
@property (nonatomic,retain) UIAction * editAction;                                          //@synthesize editAction=_editAction - In the implementation block
@property (nonatomic,retain) UIAction * duplicateAction;                                     //@synthesize duplicateAction=_duplicateAction - In the implementation block
@property (nonatomic,retain) UIAction * deleteAction;                                        //@synthesize deleteAction=_deleteAction - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarActionsModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL allowCreate;                                             //@synthesize allowCreate=_allowCreate - In the implementation block
+(unsigned long long)maximumNumberOfActions;
+(id)localizedTitleForActionType:(long long)arg1 ;
-(id<AVTAvatarActionsModelDelegate>)delegate;
-(BOOL)canPerformActionType:(long long)arg1 ;
-(UIAction *)editAction;
-(void)generateActions;
-(void)didTapCreateNew;
-(void)setCreateAction:(UIAction *)arg1 ;
-(void)setDuplicateAction:(UIAction *)arg1 ;
-(void)didTapDelete:(id)arg1 ;
-(void)setEditAction:(UIAction *)arg1 ;
-(AVTAvatarRecordDataSource *)dataSource;
-(void)setDelegate:(id<AVTAvatarActionsModelDelegate>)arg1 ;
-(AVTAvatarRecord *)avatarRecord;
-(void)didTapDuplicate;
-(void)setAvatarRecord:(AVTAvatarRecord *)arg1 ;
-(UIAction *)deleteAction;
-(UIAction *)createAction;
-(UIAction *)duplicateAction;
-(BOOL)allowCreate;
-(id)initWithAvatarRecord:(id)arg1 dataSource:(id)arg2 allowCreate:(BOOL)arg3 ;
-(void)setDeleteAction:(UIAction *)arg1 ;
-(void)didTapEdit;
@end

