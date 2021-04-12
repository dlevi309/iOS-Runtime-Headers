/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPeopleFlowViewController <NSObject>
@property (nonatomic,retain) id context; 
@property (nonatomic,readonly) CGSize preferredSize; 
@property (assign,nonatomic,__weak) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate; 
@optional
-(id<PXPeopleFlowViewControllerActionDelegate>)actionDelegate;
-(CGSize)preferredSize;
-(void)willTransitionToNextInFlow;
-(void)willTransitionToPreviousInFlow;
-(void)setActionDelegate:(id)arg1;

@required
-(id)context;
-(void)setContext:(id)arg1;

@end

