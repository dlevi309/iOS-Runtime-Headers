/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, OFUIViewController;

@interface OFViewProxy : UIView {

	NSMutableArray* _layoutSteps;
	SCD_Struct_OF6* _layoutInfo;
	OFUIViewController* _viewControllerProxy;
	BOOL _magicLayoutEnabled;

}

@property (assign,nonatomic) OFUIViewController * viewControllerProxy;                         //@synthesize viewControllerProxy=_viewControllerProxy - In the implementation block
@property (assign,getter=isMagicLayoutEnabled,nonatomic) BOOL magicLayoutEnabled;              //@synthesize magicLayoutEnabled=_magicLayoutEnabled - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)layoutSubviews;
-(void)setViewControllerProxy:(OFUIViewController *)arg1 ;
-(OFUIViewController *)viewControllerProxy;
-(void)runMagicLayout;
-(void)addLayoutStep:(id)arg1 ;
-(void)addLayoutSteps:(id)arg1 ;
-(BOOL)isMagicLayoutEnabled;
-(void)setMagicLayoutEnabled:(BOOL)arg1 ;
@end

