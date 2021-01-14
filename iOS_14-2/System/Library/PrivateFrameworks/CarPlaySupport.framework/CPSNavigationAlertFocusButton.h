/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSButton.h>

@class CPSNavigationAlertProgressView;

@interface CPSNavigationAlertFocusButton : CPSButton {

	CPSNavigationAlertProgressView* _altFocusProgressView;

}

@property (assign,nonatomic,__weak) CPSNavigationAlertProgressView * altFocusProgressView;              //@synthesize altFocusProgressView=_altFocusProgressView - In the implementation block
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CPSNavigationAlertProgressView *)altFocusProgressView;
-(void)setAltFocusProgressView:(CPSNavigationAlertProgressView *)arg1 ;
@end

