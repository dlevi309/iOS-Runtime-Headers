/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol AVTViewLayoutInfo;
@class AVTUIEnvironment, NSString;

@interface AVTAttributeEditorToActionsTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _RTL;
	AVTUIEnvironment* _environment;
	id<AVTViewLayoutInfo> _avtViewLayoutInfo;

}

@property (nonatomic,readonly) AVTUIEnvironment * environment;                       //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTViewLayoutInfo> avtViewLayoutInfo;              //@synthesize avtViewLayoutInfo=_avtViewLayoutInfo - In the implementation block
@property (nonatomic,readonly) BOOL RTL;                                             //@synthesize RTL=_RTL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)adjustedSafeAreaInsetsForView:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)RTL;
-(double)transitionDuration:(id)arg1 ;
-(AVTUIEnvironment *)environment;
-(id<AVTViewLayoutInfo>)avtViewLayoutInfo;
-(id)initWithAVTViewLayoutInfo:(id)arg1 RTL:(BOOL)arg2 environment:(id)arg3 ;
@end

