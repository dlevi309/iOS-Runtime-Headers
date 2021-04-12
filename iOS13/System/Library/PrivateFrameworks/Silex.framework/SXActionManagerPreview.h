/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXAction, SXActionPreviewActivity;
@class UIViewController;

@interface SXActionManagerPreview : NSObject {

	id<SXAction> _action;
	id<SXActionPreviewActivity> _previewActivity;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) id<SXAction> action;                                      //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id<SXActionPreviewActivity> previewActivity;              //@synthesize previewActivity=_previewActivity - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                 //@synthesize viewController=_viewController - In the implementation block
-(id<SXAction>)action;
-(UIViewController *)viewController;
-(id)initWithAction:(id)arg1 viewController:(id)arg2 previewActivity:(id)arg3 ;
-(id<SXActionPreviewActivity>)previewActivity;
@end

