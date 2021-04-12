/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusUpdateRequesting.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIFocusEnvironment;
@class UIFocusSystem, _UIFocusInputDeviceInfo, UIFocusAnimationCoordinator, NSString;

@interface _UIFocusUpdateRequest : NSObject <_UIFocusUpdateRequesting, NSCopying> {

	BOOL _allowsDeferral;
	BOOL _isFocusRemovalRequest;
	BOOL _shouldPlayFocusSound;
	BOOL _allowsFocusingCurrentItem;
	UIFocusAnimationCoordinator* _animationCoordinator;
	UIFocusSystem* _focusSystem;
	id<UIFocusEnvironment> _environment;

}

@property (nonatomic,readonly) BOOL isFocusRemovalRequest;                                    //@synthesize isFocusRemovalRequest=_isFocusRemovalRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayFocusSound;                                       //@synthesize shouldPlayFocusSound=_shouldPlayFocusSound - In the implementation block
@property (assign,nonatomic) BOOL allowsFocusingCurrentItem;                                  //@synthesize allowsFocusingCurrentItem=_allowsFocusingCurrentItem - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * animationCoordinator;              //@synthesize animationCoordinator=_animationCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> environment;                     //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) BOOL allowsDeferral;                                             //@synthesize allowsDeferral=_allowsDeferral - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                            //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL allowsFocusRestoration; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
+(id)requestForRemovingFocusInFocusSystem:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UIFocusEnvironment>)environment;
-(UIFocusSystem *)focusSystem;
-(id)initWithEnvironment:(id)arg1 ;
-(void)setAllowsFocusingCurrentItem:(BOOL)arg1 ;
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(void)setAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(void)setAllowsDeferral:(BOOL)arg1 ;
-(BOOL)allowsFocusRestoration;
-(id)initWithFocusSystem:(id)arg1 environment:(id)arg2 ;
-(BOOL)isFocusRemovalRequest;
-(void)cacheCurrentFocusSystem;
-(BOOL)isValidInFocusSystem:(id)arg1 ;
-(BOOL)canMergeWithRequest:(id)arg1 ;
-(id)requestByMergingWithRequest:(id)arg1 ;
-(id)requestByRedirectingRequestToEnvironment:(id)arg1 ;
-(BOOL)allowsDeferral;
-(BOOL)shouldPlayFocusSound;
-(BOOL)shouldPerformHapticFeedback;
-(BOOL)requiresNextFocusedItem;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(void)setShouldPlayFocusSound:(BOOL)arg1 ;
-(BOOL)allowsFocusingCurrentItem;
-(BOOL)requiresEnvironmentValidation;
@end

