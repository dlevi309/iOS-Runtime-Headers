/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPopoverPresentationController.h>

@interface _UISharingViewPresentationController : UIPopoverPresentationController {

	BOOL _suppressDismissalHandlerUnlessDimmingViewTapped;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,copy) id dismissalHandler;                                                 //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (assign,nonatomic) BOOL suppressDismissalHandlerUnlessDimmingViewTapped;              //@synthesize suppressDismissalHandlerUnlessDimmingViewTapped=_suppressDismissalHandlerUnlessDimmingViewTapped - In the implementation block
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)setSuppressDismissalHandlerUnlessDimmingViewTapped:(BOOL)arg1 ;
-(BOOL)suppressDismissalHandlerUnlessDimmingViewTapped;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
@end

