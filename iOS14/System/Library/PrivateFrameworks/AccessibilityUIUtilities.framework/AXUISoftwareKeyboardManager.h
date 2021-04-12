/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(id<AXUISoftwareKeyboardManagerDelegate>)delegate;
-(void)setDelegate:(id<AXUISoftwareKeyboardManagerDelegate>)arg1 ;
-(void)_overrideSetHardwareKeyboardAttached:(BOOL)arg1 ;
-(void)addReasonToEnableSoftwareKeyboard:(id)arg1 ;
-(void)removeReasonToEnableSoftwareKeyboard:(id)arg1 ;
-(void)addReasonToDisableSoftwareKeyboard:(id)arg1 ;
-(void)removeReasonToDisableSoftwareKeyboard:(id)arg1 ;
-(BOOL)isHardwareKeyboardAttached;
-(void)updateKeyboardHardwareState;
-(void)_wst_setIsHardwareKeyboardAttached:(id)arg1 ;
-(void)_setIsHardwareKeyboardAttached:(BOOL)arg1 ;
-(void)_updateHardwareKeyboardState;
-(void)dealloc;
@end

