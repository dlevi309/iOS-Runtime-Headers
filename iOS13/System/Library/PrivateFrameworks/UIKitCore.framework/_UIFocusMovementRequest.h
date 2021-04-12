/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusUpdateRequesting.h>

@class UIFocusSystem, _UIFocusInputDeviceInfo, UIWindow, _UIFocusItemInfo, _UIFocusMovementInfo, _UIFocusSearchInfo, NSString, UIFocusAnimationCoordinator;

@interface _UIFocusMovementRequest : NSObject <_UIFocusUpdateRequesting> {

	BOOL _shouldPerformHapticFeedback;
	UIFocusSystem* _focusSystem;
	_UIFocusInputDeviceInfo* _inputDeviceInfo;
	UIWindow* _window;
	_UIFocusItemInfo* _focusedItemInfo;
	_UIFocusMovementInfo* _movementInfo;
	_UIFocusSearchInfo* _searchInfo;

}

@property (nonatomic,__weak,readonly) UIWindow * window;                                        //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) _UIFocusItemInfo * focusedItemInfo;                                //@synthesize focusedItemInfo=_focusedItemInfo - In the implementation block
@property (nonatomic,retain) _UIFocusMovementInfo * movementInfo;                               //@synthesize movementInfo=_movementInfo - In the implementation block
@property (nonatomic,retain) _UIFocusSearchInfo * searchInfo;                                   //@synthesize searchInfo=_searchInfo - In the implementation block
@property (nonatomic,retain) _UIFocusInputDeviceInfo * inputDeviceInfo;                         //@synthesize inputDeviceInfo=_inputDeviceInfo - In the implementation block
@property (nonatomic,readonly) _UIFocusMovementRequest * fallbackRequest; 
@property (assign,nonatomic) BOOL shouldPerformHapticFeedback;                                  //@synthesize shouldPerformHapticFeedback=_shouldPerformHapticFeedback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                              //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,readonly) BOOL shouldPlayFocusSound; 
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL allowsFocusingCurrentItem; 
@property (nonatomic,readonly) BOOL allowsDeferral; 
@property (nonatomic,readonly) BOOL allowsFocusRestoration; 
@property (nonatomic,readonly) UIFocusAnimationCoordinator * animationCoordinator; 
-(id)init;
-(UIWindow *)window;
-(UIFocusSystem *)focusSystem;
-(_UIFocusSearchInfo *)searchInfo;
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(id)initWithFocusSystem:(id)arg1 window:(id)arg2 ;
-(void)setMovementInfo:(_UIFocusMovementInfo *)arg1 ;
-(BOOL)allowsFocusRestoration;
-(void)setSearchInfo:(_UIFocusSearchInfo *)arg1 ;
-(_UIFocusItemInfo *)focusedItemInfo;
-(void)setInputDeviceInfo:(_UIFocusInputDeviceInfo *)arg1 ;
-(void)setShouldPerformHapticFeedback:(BOOL)arg1 ;
-(_UIFocusMovementInfo *)movementInfo;
-(void)setFocusedItemInfo:(_UIFocusItemInfo *)arg1 ;
-(BOOL)allowsDeferral;
-(BOOL)shouldPlayFocusSound;
-(BOOL)shouldPerformHapticFeedback;
-(BOOL)requiresNextFocusedItem;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(_UIFocusMovementRequest *)fallbackRequest;
-(BOOL)allowsFocusingCurrentItem;
-(BOOL)requiresEnvironmentValidation;
-(id)_requestByRedirectingRequestToFocusSystem:(id)arg1 ;
@end

