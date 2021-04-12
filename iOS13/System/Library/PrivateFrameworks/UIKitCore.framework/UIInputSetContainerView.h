/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputSetHostView.h>
#import <UIKitCore/_UIViewHost.h>

@class UIScreen, UIKBRenderConfig, NSMutableDictionary, NSString;

@interface UIInputSetContainerView : UIInputSetHostView <_UIViewHost> {

	UIKBRenderConfig* _renderConfig;
	NSMutableDictionary* _hostedViews;
	BOOL _disableGeometryObserverNotifications;
	CGPoint _offsetOrigin;

}

@property (assign,nonatomic) CGPoint offsetOrigin;                  //@synthesize offsetOrigin=_offsetOrigin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) UIScreen * hostingScreen; 
+(BOOL)_shouldHitTestInputViewFirst;
+(BOOL)_notifyOnExplicitLayout;
-(void)dealloc;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(id)_inheritedRenderConfig;
-(void)_didRemoveSubview:(id)arg1 ;
-(BOOL)_isTransparentFocusRegion;
-(CGRect)_accessoryViewFrame;
-(void)_setAccessoryViewFrame:(CGRect)arg1 ;
-(id)_inputWindowController;
-(void)addHostedView:(id)arg1 withViewRemovalHandler:(/*^block*/id)arg2 ;
-(BOOL)hasHostedViews;
-(UIScreen *)hostingScreen;
-(void)performWithoutGeometryObserverNotifications:(/*^block*/id)arg1 ;
-(BOOL)_disableGeometryObserverNotification;
-(void)setOffsetOrigin:(CGPoint)arg1 ;
-(CGPoint)offsetOrigin;
@end

