/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXActivitySharingController <NSObject>
@property (nonatomic,readonly) id<PXActivityViewController> activityViewController; 
@property (assign,nonatomic,__weak) id<PXActivitySharingControllerDelegate> delegate; 
@required
-(id<PXActivitySharingControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id<PXActivityViewController>)activityViewController;

@end
