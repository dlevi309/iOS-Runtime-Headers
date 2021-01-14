/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionManager.h>

@class PXPhotosViewModel, NSDictionary, NSMapTable;

@interface PXPhotosGridActionManager : PXActionManager {

	PXPhotosViewModel* _viewModel;
	NSDictionary* _actionPerformersByType;
	NSMapTable* _actionTypeByBarButtonItem;

}

@property (nonatomic,__weak,readonly) PXPhotosViewModel * viewModel;                //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionPerformersByType;               //@synthesize actionPerformersByType=_actionPerformersByType - In the implementation block
@property (nonatomic,readonly) NSMapTable * actionTypeByBarButtonItem;              //@synthesize actionTypeByBarButtonItem=_actionTypeByBarButtonItem - In the implementation block
+(id)actionsWithActionPerformers;
-(id)initWithViewModel:(id)arg1 ;
-(id)barButtonItemForActionType:(id)arg1 ;
-(id)init;
-(BOOL)canPerformActionType:(id)arg1 ;
-(PXPhotosViewModel *)viewModel;
-(NSDictionary *)actionPerformersByType;
-(void)_handleBarButtonItem:(id)arg1 ;
-(id)alertActionForActionType:(id)arg1 ;
-(id)activityForActionType:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(id)actionPerformerForActionType:(id)arg1 ;
-(NSMapTable *)actionTypeByBarButtonItem;
@end

