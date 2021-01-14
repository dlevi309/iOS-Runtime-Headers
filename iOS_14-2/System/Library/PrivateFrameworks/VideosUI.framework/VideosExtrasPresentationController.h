/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;
-(UIView *)extrasMenuBarView;
-(CGRect)extrasMenuBarFrame;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 extrasMenuBarView:(id)arg3 extrasmenuBarFrame:(CGRect)arg4 ;
-(void)setExtrasMenuBarFrame:(CGRect)arg1 ;
-(void)setExtrasMenuBarView:(UIView *)arg1 ;
@end

