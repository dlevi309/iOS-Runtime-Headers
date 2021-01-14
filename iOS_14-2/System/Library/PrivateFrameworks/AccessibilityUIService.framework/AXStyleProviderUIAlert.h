/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/

#import <AccessibilityUIService/AccessibilityUIService-Structs.h>
#import <AccessibilityUIService/AXUIAlert.h>

@protocol AXUIAlertStyleProvider;
@interface AXStyleProviderUIAlert : AXUIAlert {

	double _dismissalGestureYOffset;
	CGPoint _backgroundViewDismissalOrigin;
	unsigned long long _alertType;
	id<AXUIAlertStyleProvider> _styleProvider;

}

@property (assign,nonatomic) unsigned long long alertType;                          //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,retain) id<AXUIAlertStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(unsigned long long)alertType;
-(void)setAlertType:(unsigned long long)arg1 ;
-(void)_handlePanGestureRecognizer:(id)arg1 ;
-(id<AXUIAlertStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<AXUIAlertStyleProvider>)arg1 ;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5 userInfo:(id)arg6 ;
-(void)addToContainerView:(id)arg1 ;
-(void)_appendParagraphWithText:(id)arg1 withTextColor:(id)arg2 font:(id)arg3 textAlignment:(long long)arg4 lineSpacing:(double)arg5 paragraphSpacingBefore:(double)arg6 toAttributedString:(id)arg7 ;
-(void)_updateDismissalWithPanGesture:(id)arg1 ;
-(void)_endDismissalWithPanGesture:(id)arg1 ;
-(void)_cancelDismissalWithPanGesture:(id)arg1 ;
-(void)_updateViewForDismissalPercentage:(double)arg1 ;
@end

