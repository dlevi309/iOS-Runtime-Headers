/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPopoverPresentationController.h>

@interface _UISharingViewPresentationController : UIPopoverPresentationController {

	BOOL _suppressDismissalHandlerUnlessDimmingViewTapped;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,copy) id dismissalHandler;                                                 //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (assign,nonatomic) BOOL suppressDismissalHandlerUnlessDimmingViewTapped;              //@synthesize suppressDismissalHandlerUnlessDimmingViewTapped=_suppressDismissalHandlerUnlessDimmingViewTapped - In the implementation block
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)setSuppressDismissalHandlerUnlessDimmingViewTapped:(BOOL)arg1 ;
-(BOOL)suppressDismissalHandlerUnlessDimmingViewTapped;
@end

