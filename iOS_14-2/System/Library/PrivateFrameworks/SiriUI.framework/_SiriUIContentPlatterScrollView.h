/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol _SiriUIContentPlatterScrollViewDelegate;
@interface _SiriUIContentPlatterScrollView : UIScrollView {

	BOOL _automaticScrollingEnabled;
	BOOL _adjustContentSizeOnNextLayout;
	id<_SiriUIContentPlatterScrollViewDelegate> _platterDelegate;

}

@property (assign,nonatomic) BOOL adjustContentSizeOnNextLayout;                                              //@synthesize adjustContentSizeOnNextLayout=_adjustContentSizeOnNextLayout - In the implementation block
@property (assign,getter=isAutomaticScrollingEnabled,nonatomic) BOOL automaticScrollingEnabled;               //@synthesize automaticScrollingEnabled=_automaticScrollingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<_SiriUIContentPlatterScrollViewDelegate> platterDelegate;              //@synthesize platterDelegate=_platterDelegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)_sharedInit;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setAdjustContentSizeOnNextLayout:(BOOL)arg1 ;
-(BOOL)adjustContentSizeOnNextLayout;
-(BOOL)isAutomaticScrollingEnabled;
-(id<_SiriUIContentPlatterScrollViewDelegate>)platterDelegate;
-(void)setAutomaticScrollingEnabled:(BOOL)arg1 ;
-(void)setPlatterDelegate:(id<_SiriUIContentPlatterScrollViewDelegate>)arg1 ;
@end

