/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIView;

@interface CCUIContentModuleContainerView : UIView {

	NSArray* _views;
	BOOL _ignoreFrameUpdates;
	NSString* _moduleIdentifier;
	UIView* _c2AnimationContainerView;
	UIView* _caAnimationContainerView;

}

@property (nonatomic,copy,readonly) NSString * moduleIdentifier;               //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,readonly) UIView * c2AnimationContainerView;              //@synthesize c2AnimationContainerView=_c2AnimationContainerView - In the implementation block
@property (nonatomic,readonly) UIView * caAnimationContainerView;              //@synthesize caAnimationContainerView=_caAnimationContainerView - In the implementation block
@property (nonatomic,readonly) UIView * containerView; 
@property (assign,nonatomic) BOOL ignoreFrameUpdates;                          //@synthesize ignoreFrameUpdates=_ignoreFrameUpdates - In the implementation block
-(UIView *)containerView;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSString *)moduleIdentifier;
-(void)setIgnoreFrameUpdates:(BOOL)arg1 ;
-(id)initWithModuleIdentifier:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)ignoreFrameUpdates;
-(UIView *)c2AnimationContainerView;
-(UIView *)caAnimationContainerView;
@end

