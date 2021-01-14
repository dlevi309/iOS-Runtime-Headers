/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)containsChildOfHostEnvironment:(id)arg1 ;
-(BOOL)_requiresFocusedItemToHaveContainingView;
-(id)_focusSoundGenerator;
-(BOOL)_postsFocusUpdateNotifications;
-(void)_setDelegate:(id)arg1 ;
-(void)_setFocusSoundGenerator:(id)arg1 ;
-(id)_hostFocusSystem;
-(id)_initWithHostEnvironment:(id)arg1 ;
-(id<UIFocusEnvironment>)hostEnvironment;
@end

