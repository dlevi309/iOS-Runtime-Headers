/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarServiceItemView : UIStatusBarItemView {

	NSString* _serviceString;
	NSString* _crossfadeString;
	unsigned long long _crossfadeStep;
	double _maxWidth;
	double _serviceWidth;
	double _crossfadeWidth;
	int _contentType;
	BOOL _loopingNecessaryForString;
	BOOL _loopNowIfNecessary;
	BOOL _loopingNow;
	double _letterSpacing;

}
-(BOOL)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(double)arg4 actions:(int)arg5 ;
-(id)_contentsImageFromString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3 ;
-(BOOL)_loopingNecessary;
-(void)_crossfadeStepAnimation;
-(id)_crossfadeContentsImage;
-(id)_serviceContentsImage;
-(void)_loopAnimationDidStopInDirection:(BOOL)arg1 ;
-(double)standardPadding;
-(long long)legibilityStyle;
-(BOOL)_crossfaded;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)updateContentsAndWidth;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(BOOL)animatesDataChange;
-(void)performPendedActions;
-(id)accessibilityHUDRepresentation;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
@end

