/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBAppSwitcherPageContentView.h>

@protocol SBAppSwitcherTransientOverlayPageContentViewDelegate;
@class SBOrientationTransformWrapperView, SBAppLayout, UIView, NSString;

@interface SBAppSwitcherTransientOverlayPageContentView : UIView <SBAppSwitcherPageContentView> {

	SBOrientationTransformWrapperView* _contentWrapperView;
	long long _orientation;
	BOOL _active;
	BOOL _visible;
	SBAppLayout* _appLayout;
	UIView* _contentView;
	id<SBAppSwitcherTransientOverlayPageContentViewDelegate> _delegate;

}

@property (nonatomic,copy,readonly) SBAppLayout * appLayout;                                                        //@synthesize appLayout=_appLayout - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                           //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                         //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) long long contentOrientation; 
@property (nonatomic,retain) UIView * contentView;                                                                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<SBAppSwitcherTransientOverlayPageContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
-(void)invalidate;
-(id<SBAppSwitcherTransientOverlayPageContentViewDelegate>)delegate;
-(void)setDelegate:(id<SBAppSwitcherTransientOverlayPageContentViewDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(double)cornerRadius;
-(void)setContentOrientation:(long long)arg1 ;
-(long long)contentOrientation;
-(BOOL)contentRequiresGroupOpacity;
-(SBAppLayout *)appLayout;
-(id)initWithFrame:(CGRect)arg1 appLayout:(id)arg2 ;
@end

