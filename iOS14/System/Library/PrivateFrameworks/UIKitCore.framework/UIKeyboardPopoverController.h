/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIKeyboardLayoutStarDelegate.h>

@class NSString, UIKeyboardLayoutStar, UIKBScreenTraits, UITextInputTraits, UIKeyboardTaskQueue, UIKBTree, NSMutableArray, UIKBViewForResponderForwarding;

@interface UIKeyboardPopoverController : UIViewController <UIKeyboardLayoutStarDelegate> {

	NSString* _inputMode;
	UIKeyboardLayoutStar* _layout;
	UIKBScreenTraits* _screenTraits;
	UITextInputTraits* _textInputTraits;
	UIKeyboardTaskQueue* _taskQueue;
	UIKBTree* _keyboard;
	NSMutableArray* _hiddenKeys;
	UIKBViewForResponderForwarding* _containerForActiveKeys;

}

@property (nonatomic,readonly) NSString * inputModeIdentifier; 
@property (nonatomic,readonly) UIKeyboardLayoutStar * layout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)overrideUserInterfaceStyle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithInputModeIdentifier:(id)arg1 textInputTraits:(id)arg2 taskQueue:(id)arg3 ;
-(BOOL)handleHardwareKeyboardEvent:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(NSString *)inputModeIdentifier;
-(id)keyboardLayout:(id)arg1 willChangeRenderConfig:(id)arg2 ;
-(void)keyboardLayout:(id)arg1 didSwitchToKeyplane:(id)arg2 ;
-(void)dealloc;
-(UIKeyboardLayoutStar *)layout;
-(id)keyboardLayout:(id)arg1 containingViewForActiveKey:(id)arg2 inKeyplaneView:(id)arg3 ;
@end

