/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMapTable;

@interface UIAccessibilityHUDPositionManager : NSObject {

	NSMapTable* _managedHUDs;
	CGRect _keyboardAvoidanceArea;

}
+(id)sharedInstance;
-(void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 keyboardFrame:(CGRect)arg3 ;
-(id)init;
-(void)updateFramesForManagedHUDsUsingKeyboardFrame:(CGRect)arg1 ;
-(void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 ;
-(void)beginManagingPositionOfHUD:(id)arg1 withReferenceView:(id)arg2 ;
-(void)stopManagingPositionOfHUD:(id)arg1 ;
-(void)keyboardFrameDidChange:(id)arg1 ;
-(void)dealloc;
@end

