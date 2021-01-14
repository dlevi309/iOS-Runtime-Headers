/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPointerInteraction.h>
#import <UIKitCore/_UIViewSubtreeMonitor.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class UIView, UIWindow, NSMutableDictionary, NSString;

@interface _UIPointerInteractionAssistant : UIPointerInteraction <_UIViewSubtreeMonitor, UIPointerInteractionDelegate> {

	UIView* _previewContainer;
	UIWindow* _monitoredWindow;
	NSMutableDictionary* _assistants;

}

@property (nonatomic,readonly) UIView * previewContainer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)createRegionFromRect:(CGRect)arg1 inView:(id)arg2 withIdentifier:(id)arg3 ;
-(CGPoint)request:(id)arg1 locationInView:(id)arg2 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_updatePointerInteractionForSubtree:(id)arg1 suppressInteractions:(BOOL)arg2 ;
-(id)_assistantForView:(id)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(UIView *)previewContainer;
-(void)setAssistedView:(id)arg1 identifier:(id)arg2 ;
-(id)createStyleForButton:(id)arg1 shapeProvider:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)createPreviewTargetForView:(id)arg1 center:(CGPoint)arg2 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(BOOL)_monitorsView:(id)arg1 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
@end

