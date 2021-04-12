/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFocusSystem.h>

@protocol UIFocusEnvironment;
@interface _UIHostedFocusSystem : UIFocusSystem {

	BOOL _didSetFocusSoundGenerator;
	id<UIFocusEnvironment> _hostEnvironment;

}

@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> hostEnvironment;                                                     //@synthesize hostEnvironment=_hostEnvironment - In the implementation block
@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<_UIHostedFocusSystemDelegate> delegate; 
-(id)_delegate;
-(void)_setDelegate:(id)arg1 ;
-(BOOL)_isEligibleForFocusInteraction;
-(id)_initWithHostEnvironment:(id)arg1 ;
-(BOOL)containsChildOfHostEnvironment:(id)arg1 ;
-(id)_hostFocusSystem;
-(BOOL)_requiresFocusedItemToHaveContainingView;
-(id)_focusSoundGenerator;
-(BOOL)_postsFocusUpdateNotifications;
-(void)_setFocusSoundGenerator:(id)arg1 ;
-(id<UIFocusEnvironment>)hostEnvironment;
@end

