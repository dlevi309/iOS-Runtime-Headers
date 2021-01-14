/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXActionPerformerDelegate;
@class NSSet;

@interface PXActionManager : NSObject {

	id<PXActionPerformerDelegate> _performerDelegate;
	NSSet* _allowedActionTypes;

}

@property (assign,nonatomic,__weak) id<PXActionPerformerDelegate> performerDelegate;              //@synthesize performerDelegate=_performerDelegate - In the implementation block
@property (nonatomic,copy) NSSet * allowedActionTypes;                                            //@synthesize allowedActionTypes=_allowedActionTypes - In the implementation block
+(void)setEnsureUnlockedDeviceHandler:(/*^block*/id)arg1 ;
+(/*^block*/id)_unlockDeviceHandler;
-(id)barButtonItemForActionType:(id)arg1 ;
-(id)previewActionForActionType:(id)arg1 image:(id)arg2 ;
-(BOOL)canPerformActionType:(id)arg1 ;
-(BOOL)isActionTypeAllowed:(id)arg1 ;
-(id<PXActionPerformerDelegate>)performerDelegate;
-(void)setPerformerDelegate:(id<PXActionPerformerDelegate>)arg1 ;
-(NSSet *)allowedActionTypes;
-(void)setAllowedActionTypes:(NSSet *)arg1 ;
-(id)alertActionViewControllerForActionType:(id)arg1 ;
-(id)alertActionForActionType:(id)arg1 ;
-(id)activityForActionType:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(id)systemImageNameForActionType:(id)arg1 ;
-(id)actionPerformerForActionType:(id)arg1 ;
@end

