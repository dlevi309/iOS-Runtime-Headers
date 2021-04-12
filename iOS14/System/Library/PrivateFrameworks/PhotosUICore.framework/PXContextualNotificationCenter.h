/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableSet, _PXContextualNotificationCenterUpdatingView, UITapGestureRecognizer, UIPanGestureRecognizer, PXContextualNotification, UIWindow, NSString;

@interface PXContextualNotificationCenter : NSObject <UIGestureRecognizerDelegate> {

	NSMutableSet* _contextualNotifications;
	NSMutableSet* _contextualNotificationsNeedingUpdate;
	_PXContextualNotificationCenterUpdatingView* _containerView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	PXContextualNotification* _pannedContextualNotification;
	UIWindow* _window;

}

@property (nonatomic,readonly) NSMutableSet * contextualNotifications;                                 //@synthesize contextualNotifications=_contextualNotifications - In the implementation block
@property (nonatomic,readonly) NSMutableSet * contextualNotificationsNeedingUpdate;                    //@synthesize contextualNotificationsNeedingUpdate=_contextualNotificationsNeedingUpdate - In the implementation block
@property (nonatomic,retain) _PXContextualNotificationCenterUpdatingView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                            //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                            //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) PXContextualNotification * pannedContextualNotification;                  //@synthesize pannedContextualNotification=_pannedContextualNotification - In the implementation block
@property (nonatomic,__weak,readonly) UIWindow * window;                                               //@synthesize window=_window - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCenter;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setContainerView:(_PXContextualNotificationCenterUpdatingView *)arg1 ;
-(id)init;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(_PXContextualNotificationCenterUpdatingView *)containerView;
-(UIWindow *)window;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)_handlePanGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_updateContainerView;
-(void)invalidateContextualNotification:(id)arg1 ;
-(void)updateContextualNotificationsIfNeeded;
-(void)_updateAppearanceStateForContextualNotification:(id)arg1 ;
-(id)_contextualNotificationAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 isInsideDismissArea:(BOOL*)arg3 isInsidePassthroughArea:(BOOL*)arg4 ;
-(NSMutableSet *)contextualNotifications;
-(NSMutableSet *)contextualNotificationsNeedingUpdate;
-(PXContextualNotification *)pannedContextualNotification;
-(void)setPannedContextualNotification:(PXContextualNotification *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
@end

