/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBAppLayout *)appLayout;
-(long long)contentOrientation;
-(void)setContentOrientation:(long long)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id<SBAppSwitcherTransientOverlayPageContentViewDelegate>)delegate;
-(BOOL)contentRequiresGroupOpacity;
-(BOOL)isActive;
-(void)setVisible:(BOOL)arg1 ;
-(double)cornerRadius;
-(void)setDelegate:(id<SBAppSwitcherTransientOverlayPageContentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)isVisible;
-(void)setContentView:(UIView *)arg1 ;
-(long long)orientation;
-(void)invalidate;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 appLayout:(id)arg2 ;
@end

