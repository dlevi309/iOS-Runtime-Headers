/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusUpdateRequesting.h>

@class UIFocusSystem, _UIFocusInputDeviceInfo, UIWindow, _UIFocusItemInfo, _UIFocusMovementInfo, _UIFocusSearchInfo, UIFocusAnimationCoordinator, NSString;

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
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                              //@synthesize focusSystem=_focusSystem - In the implementation block
@property (getter=isMovementRequest,nonatomic,readonly) BOOL movementRequest; 
@property (nonatomic,readonly) BOOL shouldPlayFocusSound; 
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL allowsFocusingCurrentItem; 
@property (nonatomic,readonly) BOOL allowsDeferral; 
@property (nonatomic,readonly) BOOL allowsFocusRestoration; 
@property (nonatomic,readonly) UIFocusAnimationCoordinator * animationCoordinator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIFocusSystem *)focusSystem;
-(BOOL)shouldPlayFocusSound;
-(BOOL)isMovementRequest;
-(BOOL)allowsDeferral;
-(BOOL)shouldPerformHapticFeedback;
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(BOOL)requiresEnvironmentValidation;
-(BOOL)allowsFocusingCurrentItem;
-(BOOL)allowsFocusRestoration;
-(id)init;
-(_UIFocusSearchInfo *)searchInfo;
-(void)setMovementInfo:(_UIFocusMovementInfo *)arg1 ;
-(void)setFocusedItemInfo:(_UIFocusItemInfo *)arg1 ;
-(BOOL)requiresNextFocusedItem;
-(id)initWithFocusSystem:(id)arg1 window:(id)arg2 ;
-(UIWindow *)window;
-(_UIFocusMovementRequest *)fallbackRequest;
-(_UIFocusMovementInfo *)movementInfo;
-(id)_requestByRedirectingRequestToFocusSystem:(id)arg1 ;
-(_UIFocusItemInfo *)focusedItemInfo;
-(void)setInputDeviceInfo:(_UIFocusInputDeviceInfo *)arg1 ;
-(void)setShouldPerformHapticFeedback:(BOOL)arg1 ;
-(void)setSearchInfo:(_UIFocusSearchInfo *)arg1 ;
@end

