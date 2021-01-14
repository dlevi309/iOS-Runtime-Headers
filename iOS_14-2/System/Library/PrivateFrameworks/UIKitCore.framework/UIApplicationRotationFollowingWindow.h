/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)_topMostWindow;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(id)init;
-(BOOL)_shouldControlAutorotation;
-(void)applicationWindowRotated:(id)arg1 ;
-(void)setPriorityLevel:(long long)arg1 ;
-(void)_commonApplicationRotationFollowingWindowInit;
-(void)_handleStatusBarOrientationChange:(id)arg1 ;
-(BOOL)limitToWindowLevel;
-(void)setLimitToWindowLevel:(BOOL)arg1 ;
-(id)initWithWindowScene:(id)arg1 ;
-(long long)priorityLevel;
-(BOOL)isInterfaceAutorotationDisabled;
@end

