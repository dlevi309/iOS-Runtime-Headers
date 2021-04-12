/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/_UIKeyboardSuppressionPolicyDelegate.h>
#import <libobjc.A.dylib/PKTextInputSupportedElementDelegate.h>

@class NSString;

@interface PKTextInputKeyboardSuppressionPolicyDelegate : NSObject <_UIKeyboardSuppressionPolicyDelegate, PKTextInputSupportedElementDelegate> {

	BOOL _isQueryingLocaleIdentifier;
	BOOL _suppressLocaleIdentifier;
	BOOL allowFloatingPencilKeyboard;

}

@property (assign,nonatomic) BOOL _suppressLocaleIdentifier;                //@synthesize suppressLocaleIdentifier=_suppressLocaleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL allowFloatingPencilKeyboard; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)keyboardHasInputOrAssistantViewsOnScreen;
-(BOOL)_shouldSuppressAssistantBarForDelegate:(id)arg1 ;
-(id)_recognitionLocaleIdentifier;
-(BOOL)_suppressLocaleIdentifier;
-(BOOL)_shouldSuppressForDelegate:(id)arg1 ;
-(void)set_suppressLocaleIdentifier:(BOOL)arg1 ;
-(void)updateKeyboardSuppressionPolicy;
-(void)setAllowFloatingPencilKeyboard:(BOOL)arg1 ;
-(BOOL)isSupportedForTextInputTraits:(id)arg1 ;
-(BOOL)_shouldSuppressKeyboardUIForDelegate:(id)arg1 checkSource:(BOOL)arg2 ;
-(BOOL)allowFloatingPencilKeyboard;
@end

