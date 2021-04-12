/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


@protocol AXUISoftwareKeyboardManagerDelegate;
@class NSMutableSet;

@interface AXUISoftwareKeyboardManager : NSObject {

	NSMutableSet* _reasonsToDisableSoftwareKeyboard;
	NSMutableSet* _reasonsToEnableSoftwareKeyboard;
	id<AXUISoftwareKeyboardManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXUISoftwareKeyboardManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<AXUISoftwareKeyboardManagerDelegate>)delegate;
-(void)setDelegate:(id<AXUISoftwareKeyboardManagerDelegate>)arg1 ;
-(void)updateKeyboardHardwareState;
-(void)_wst_setIsHardwareKeyboardAttached:(id)arg1 ;
-(void)_setIsHardwareKeyboardAttached:(BOOL)arg1 ;
-(void)_updateHardwareKeyboardState;
-(BOOL)isHardwareKeyboardAttached;
-(void)_overrideSetHardwareKeyboardAttached:(BOOL)arg1 ;
-(void)addReasonToEnableSoftwareKeyboard:(id)arg1 ;
-(void)removeReasonToEnableSoftwareKeyboard:(id)arg1 ;
-(void)addReasonToDisableSoftwareKeyboard:(id)arg1 ;
-(void)removeReasonToDisableSoftwareKeyboard:(id)arg1 ;
@end

