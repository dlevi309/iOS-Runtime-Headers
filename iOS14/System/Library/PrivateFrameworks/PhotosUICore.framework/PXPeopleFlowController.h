/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPeopleFlowController <NSObject>
@property (nonatomic,readonly) BOOL hasNextViewController; 
@property (nonatomic,readonly) UIViewController*<PXPeopleFlowViewController> nextViewController; 
@property (nonatomic,readonly) BOOL hasPreviousViewController; 
@property (nonatomic,readonly) UIViewController*<PXPeopleFlowViewController> previousViewController; 
@required
-(BOOL)hasNextViewController;
-(void)cancel:(id)arg1;
-(UIViewController*<PXPeopleFlowViewController>)nextViewController;
-(BOOL)hasPreviousViewController;
-(void)done:(id)arg1;
-(UIViewController*<PXPeopleFlowViewController>)previousViewController;

@end

