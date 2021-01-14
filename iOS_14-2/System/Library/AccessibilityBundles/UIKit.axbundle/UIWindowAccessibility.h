/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIWindowAccessibility_super.h>
#import <libobjc.A.dylib/AXRemoteElementChildrenDelegate.h>

@class NSString;

@interface UIWindowAccessibility : __UIWindowAccessibility_super <AXRemoteElementChildrenDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGPoint)warpPoint:(CGPoint)arg1 ;
-(unsigned)_accessibilityContextId;
-(id)_iosAccessibilityAttributeValue:(long long)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsGroupedParent;
-(BOOL)accessibilityElementsHidden;
-(BOOL)accessibilityIsWindow;
-(id)_targetWindowForPathIndex:(long long)arg1 atPoint:(CGPoint)arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 ;
-(unsigned long long)accessibilityTraits;
-(id)_accessibilityUserTestingParent;
-(id)_accessibilityWindowSections;
-(int)_accessibilityRemotePid;
-(void)_setBoundContext:(id)arg1 ;
-(void)_orderFrontWithoutMakingKey;
-(id)accessibilityContainer;
-(long long)_accessibilityInterfaceOrientationForScreenCoordinates;
-(BOOL)_accessibilityShouldIncludeKeyboardInRemoteSubstituteChildren;
-(id)initWithWindowScene:(id)arg1 ;
-(void)_setFirstResponder:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(unsigned long long)_accessibilityAutomationType;
-(void)dealloc;
-(id)accessibilityRemoteSubstituteChildren:(id)arg1 ;
-(id)_accessibilityMLRemoteElement;
-(void)_axListenForRemoteElement;
-(BOOL)_accessibilityShouldUseRemoteElement;
-(id)_accessibilityAllRemoteElements;
-(id)_accessibilityRemoteElement;
-(void)_axUpdateForRemoteElement:(id)arg1 ;
-(void)_accessibilitySetAllRemoteElements:(id)arg1 ;
-(void)_axCheckForExistingRemoteElements;
-(void)_axRemoteElementRegistered:(id)arg1 ;
-(void)_accessibilityRegisterRemoteElement:(BOOL)arg1 ;
-(id)_accessibilityFirstResponderCoalesceTimer;
-(void)_accessibilitySetFirstResponderCoalesceTimer:(id)arg1 ;
-(id)_accessibilityGetRemoteElement;
-(void)_accessibilitySetRemoteElement:(id)arg1 ;
-(id)_accessibilityIOSMacRotors;
-(void)_accessibilitySetIOSMacRotors:(id)arg1 ;
@end

