/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)caAnimationContainerView;
-(BOOL)ignoreFrameUpdates;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)c2AnimationContainerView;
-(id)initWithModuleIdentifier:(id)arg1 options:(unsigned long long)arg2 ;
-(NSString *)moduleIdentifier;
-(void)layoutSubviews;
-(void)setIgnoreFrameUpdates:(BOOL)arg1 ;
-(UIView *)containerView;
@end

