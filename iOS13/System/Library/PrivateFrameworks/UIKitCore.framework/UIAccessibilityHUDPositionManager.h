/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMapTable;

@interface UIAccessibilityHUDPositionManager : NSObject {

	NSMapTable* _managedHUDs;
	CGRect _keyboardAvoidanceArea;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)keyboardFrameDidChange:(id)arg1 ;
-(void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 keyboardFrame:(CGRect)arg3 ;
-(void)updateFramesForManagedHUDsUsingKeyboardFrame:(CGRect)arg1 ;
-(void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 ;
-(void)beginManagingPositionOfHUD:(id)arg1 withReferenceView:(id)arg2 ;
-(void)stopManagingPositionOfHUD:(id)arg1 ;
@end

