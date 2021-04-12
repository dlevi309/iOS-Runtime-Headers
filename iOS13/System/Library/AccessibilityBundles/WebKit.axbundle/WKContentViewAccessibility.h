/*
* Generated on Monday, March 1, 2021 at 2:35:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/WebKit.axbundle/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/__WKContentViewAccessibility_super.h>

@interface WKContentViewAccessibility : __WKContentViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(CGPoint)accessibilityActivationPoint;
-(BOOL)isAccessibilityElement;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityElements;
-(long long)accessibilityContainerType;
-(BOOL)canBecomeFocused;
-(BOOL)_isEligibleForFocusInteraction;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_viewToAddFocusLayer;
-(void)_processDidExit;
-(void)_didRelaunchProcess;
-(void)_setAccessibilityWebProcessToken:(id)arg1 ;
-(void)_accessibilityRegisterUIProcessTokens;
-(void)_zoomToRevealFocusedElement;
-(void)_hideKeyboard;
-(id)_accessibilityResponderElement;
-(id)_accessibilityHandwritingElement;
-(void)_accessibilityIncreaseSelection:(id)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsScrollAncestor;
-(BOOL)accessibilityParentDiscardsChildrenContainerGroupingBehavior;
-(BOOL)_accessibilityHandlesRemoteFocusMovement;
-(int)_accessibilityRemotePid;
-(id)_accessibilityResponderElementForFocus;
-(BOOL)_accessibilityServesAsFirstResponder;
-(BOOL)_accessibilityBeginUndoableTextInsertion;
-(BOOL)_accessibilityEndUndoableTextInsertion;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_registerForNotificationsIfNecessary;
-(void)_signalAccessibilityPageLoadCompleteForCatalyst;
-(void)_pasteboardChanged:(id)arg1 ;
-(void)_axClearRemoteElements;
-(void)_axCleanupAfterTermination;
@end

