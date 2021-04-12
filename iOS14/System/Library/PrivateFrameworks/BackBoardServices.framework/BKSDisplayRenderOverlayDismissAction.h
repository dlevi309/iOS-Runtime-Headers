/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

@class BKSDisplayRenderOverlayDescriptor;


@protocol BKSDisplayRenderOverlayDismissAction <NSObject>
@property (nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * overlayDescriptor; 
@required
-(void)dismissWithAnimation:(id)arg1;
-(BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;
-(void)dismiss;

@end

