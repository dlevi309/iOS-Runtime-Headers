/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSButton.h>

@class CPSNavigationAlertProgressView;

@interface CPSNavigationAlertFocusButton : CPSButton {

	CPSNavigationAlertProgressView* _altFocusProgressView;

}

@property (assign,nonatomic,__weak) CPSNavigationAlertProgressView * altFocusProgressView;              //@synthesize altFocusProgressView=_altFocusProgressView - In the implementation block
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CPSNavigationAlertProgressView *)altFocusProgressView;
-(void)setAltFocusProgressView:(CPSNavigationAlertProgressView *)arg1 ;
@end

