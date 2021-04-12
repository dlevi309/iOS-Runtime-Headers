/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIViewControllerPreviewing_Internal <UIViewControllerPreviewing_Private>
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewingDelegate> delegate; 
@optional
-(CGRect*)preferredSourceViewRectInCoordinateSpace:(id)arg1;

@required
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)unregister;

@end

