/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(void)layoutSubviews;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setViewControllerProxy:(OFUIViewController *)arg1 ;
-(OFUIViewController *)viewControllerProxy;
-(void)runMagicLayout;
-(void)addLayoutStep:(id)arg1 ;
-(void)addLayoutSteps:(id)arg1 ;
-(BOOL)isMagicLayoutEnabled;
-(void)setMagicLayoutEnabled:(BOOL)arg1 ;
@end

