/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class PLClickPresentationInteractionManager, UIView;


@protocol PLClickPresentationInteractionPresenting <NSObject>
@property (nonatomic,readonly) PLClickPresentationInteractionManager * clickPresentationInteractionManager; 
@property (nonatomic,readonly) UIView * viewForPreview; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) CGRect initialPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalDismissedFrameOfViewForPreview; 
@optional
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1;
-(CGRect)initialPresentedFrameOfViewForPreview;
-(CGRect)finalPresentedFrameOfViewForPreview;
-(CGRect)finalDismissedFrameOfViewForPreview;

@required
-(UIView *)viewForPreview;
-(PLClickPresentationInteractionManager *)clickPresentationInteractionManager;

@end

