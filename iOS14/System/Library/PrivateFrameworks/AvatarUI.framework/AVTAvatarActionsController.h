/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class AVTAvatarActionsProvider, AVTAvatarRecordDataSource;


@protocol AVTAvatarActionsController <NSObject>
@property (nonatomic,readonly) AVTAvatarActionsProvider * actionsModel; 
@property (nonatomic,readonly) AVTAvatarRecordDataSource * dataSource; 
@property (assign,nonatomic,__weak) id<AVTAvatarActionsControllerDelegate> delegate; 
@required
-(id<AVTAvatarActionsControllerDelegate>)delegate;
-(AVTAvatarRecordDataSource *)dataSource;
-(void)setDelegate:(id)arg1;
-(AVTAvatarActionsProvider *)actionsModel;
-(void)updateWithActionsModel:(id)arg1;
-(void)updateForChangedContentCategorySize;

@end

