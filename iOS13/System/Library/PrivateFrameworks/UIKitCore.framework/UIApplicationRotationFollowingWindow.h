/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@interface UIApplicationRotationFollowingWindow : UIWindow {

	BOOL _limitToWindowLevel;
	long long _priorityLevel;

}

@property (assign,nonatomic) long long priorityLevel;              //@synthesize priorityLevel=_priorityLevel - In the implementation block
@property (assign,nonatomic) BOOL limitToWindowLevel;              //@synthesize limitToWindowLevel=_limitToWindowLevel - In the implementation block
+(BOOL)_isSystemWindow;
-(id)init;
-(id)initWithWindowScene:(id)arg1 ;
-(BOOL)_shouldControlAutorotation;
-(BOOL)isInterfaceAutorotationDisabled;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)applicationWindowRotated:(id)arg1 ;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2 ;
-(id)_topMostWindow;
-(void)_commonApplicationRotationFollowingWindowInit;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(void)setPriorityLevel:(long long)arg1 ;
-(void)_handleStatusBarOrientationChange:(id)arg1 ;
-(long long)priorityLevel;
-(BOOL)limitToWindowLevel;
-(void)setLimitToWindowLevel:(BOOL)arg1 ;
@end

