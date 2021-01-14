/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (retain,readonly) UIScreen * hostingScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_notifyOnExplicitLayout;
+(BOOL)_shouldHitTestInputViewFirst;
-(void)_setRenderConfig:(id)arg1 ;
-(id)_inputWindowController;
-(BOOL)_isTransparentFocusRegion;
-(void)_didRemoveSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIScreen *)hostingScreen;
-(id)_inheritedRenderConfig;
-(void)addHostedView:(id)arg1 withViewRemovalHandler:(/*^block*/id)arg2 ;
-(BOOL)_disableGeometryObserverNotification;
-(BOOL)hasHostedViews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)setOffsetOrigin:(CGPoint)arg1 ;
-(void)_setAccessoryViewFrame:(CGRect)arg1 ;
-(void)performWithoutGeometryObserverNotifications:(/*^block*/id)arg1 ;
-(CGRect)_accessoryViewFrame;
-(CGPoint)offsetOrigin;
-(void)dealloc;
@end

