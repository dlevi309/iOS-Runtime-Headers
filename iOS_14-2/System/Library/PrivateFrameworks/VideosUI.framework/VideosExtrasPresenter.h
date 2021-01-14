/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class VideosExtrasContext, NSString;

@interface VideosExtrasPresenter : NSObject <UIViewControllerTransitioningDelegate> {

	VideosExtrasContext* _extrasContext;
	CGRect _extrasMenuBarFrame;

}

@property (nonatomic,retain) VideosExtrasContext * extrasContext;              //@synthesize extrasContext=_extrasContext - In the implementation block
@property (assign,nonatomic) CGRect extrasMenuBarFrame;                        //@synthesize extrasMenuBarFrame=_extrasMenuBarFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(VideosExtrasContext *)extrasContext;
-(CGRect)extrasMenuBarFrame;
-(id)initWithExtrasContext:(id)arg1 extrasMenuBarFrame:(CGRect)arg2 ;
-(void)presentExtrasWith:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissExtrasAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExtrasContext:(VideosExtrasContext *)arg1 ;
-(void)setExtrasMenuBarFrame:(CGRect)arg1 ;
@end

