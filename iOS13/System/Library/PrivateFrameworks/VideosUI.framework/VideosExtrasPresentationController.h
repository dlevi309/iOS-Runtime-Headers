/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@class UIView;

@interface VideosExtrasPresentationController : UIPresentationController {

	UIView* _extrasMenuBarView;
	CGRect _extrasMenuBarFrame;

}

@property (nonatomic,retain) UIView * extrasMenuBarView;              //@synthesize extrasMenuBarView=_extrasMenuBarView - In the implementation block
@property (assign,nonatomic) CGRect extrasMenuBarFrame;               //@synthesize extrasMenuBarFrame=_extrasMenuBarFrame - In the implementation block
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(UIView *)extrasMenuBarView;
-(CGRect)extrasMenuBarFrame;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 extrasMenuBarView:(id)arg3 extrasmenuBarFrame:(CGRect)arg4 ;
-(void)setExtrasMenuBarFrame:(CGRect)arg1 ;
-(void)setExtrasMenuBarView:(UIView *)arg1 ;
@end

