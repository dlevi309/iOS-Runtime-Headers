/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol NCNotificationListCoalescingControlsHandler;
@class NCNotificationListCell, NCNotificationListSectionHeaderView, NCTouchEaterGestureRecognizer, NSString;

@interface NCNotificationListTouchEaterManager : NSObject <UIGestureRecognizerDelegate> {

	BOOL _enabled;
	NCNotificationListCell* _cellWithRevealedActions;
	NCNotificationListSectionHeaderView* _headerViewInClearState;
	id<NCNotificationListCoalescingControlsHandler> _coalescingControlsHandlerInClearState;
	NCTouchEaterGestureRecognizer* _touchEater;

}

@property (nonatomic,retain) NCTouchEaterGestureRecognizer * touchEater;                                                                //@synthesize touchEater=_touchEater - In the implementation block
@property (assign,nonatomic,__weak) NCNotificationListCell * cellWithRevealedActions;                                                   //@synthesize cellWithRevealedActions=_cellWithRevealedActions - In the implementation block
@property (assign,nonatomic,__weak) NCNotificationListSectionHeaderView * headerViewInClearState;                                       //@synthesize headerViewInClearState=_headerViewInClearState - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListCoalescingControlsHandler> coalescingControlsHandlerInClearState;              //@synthesize coalescingControlsHandlerInClearState=_coalescingControlsHandlerInClearState - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                             //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handleEatenTouch:(id)arg1 ;
-(NCNotificationListSectionHeaderView *)headerViewInClearState;
-(void)setTouchEaterEnabled:(BOOL)arg1 ;
-(id<NCNotificationListCoalescingControlsHandler>)coalescingControlsHandlerInClearState;
-(NCNotificationListCell *)cellWithRevealedActions;
-(NCTouchEaterGestureRecognizer *)touchEater;
-(BOOL)_shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(void)_handleEatenTouchBeginStateForGestureRecognizer:(id)arg1 ;
-(void)_handleEatenTouchEndStateForGestureRecognizer:(id)arg1 ;
-(BOOL)_isPointInWindowSpace:(CGPoint)arg1 insideCell:(id)arg2 ;
-(void)setCellWithRevealedActions:(NCNotificationListCell *)arg1 ;
-(void)setHeaderViewInClearState:(NCNotificationListSectionHeaderView *)arg1 ;
-(void)setCoalescingControlsHandlerInClearState:(id<NCNotificationListCoalescingControlsHandler>)arg1 ;
-(id)initForView:(id)arg1 ;
-(void)removeTouchGestureRecognizer;
-(void)setTouchEater:(NCTouchEaterGestureRecognizer *)arg1 ;
@end

