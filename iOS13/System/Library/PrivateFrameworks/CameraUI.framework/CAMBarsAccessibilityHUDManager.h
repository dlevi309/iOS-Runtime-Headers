/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CAMBarsAccessibilityHUDManagerGestureProviderCAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerDelegate;
@class UIView, UILongPressGestureRecognizer, NSString;

@interface CAMBarsAccessibilityHUDManager : NSObject <UIGestureRecognizerDelegate> {

	UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider> _view;
	id<CAMBarsAccessibilityHUDManagerDelegate> _delegate;
	UILongPressGestureRecognizer* __accessibilityLongPressGestureRecognizer;

}

@property (assign,nonatomic,__weak) id<CAMBarsAccessibilityHUDManagerDelegate> delegate;                                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider> view;                                     //@synthesize view=_view - In the implementation block
@property (setter=_setAccessibilityLongPressGestureRecognizer:,nonatomic,retain) UILongPressGestureRecognizer * _accessibilityLongPressGestureRecognizer;              //@synthesize _accessibilityLongPressGestureRecognizer=__accessibilityLongPressGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CAMBarsAccessibilityHUDManagerDelegate>)delegate;
-(void)setDelegate:(id<CAMBarsAccessibilityHUDManagerDelegate>)arg1 ;
-(UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider>)view;
-(void)setView:(UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UILongPressGestureRecognizer *)_accessibilityLongPressGestureRecognizer;
-(void)_setAccessibilityLongPressGestureRecognizer:(id)arg1 ;
-(CGPoint)locationOfAccessibilityGestureInView:(id)arg1 ;
-(id)initWithView:(id)arg1 delegate:(id)arg2 cancelsTouchesInView:(BOOL)arg3 ;
-(void)_handleAccessibilityLongPressGesture:(id)arg1 ;
-(void)preferredContentSizeChanged;
@end

