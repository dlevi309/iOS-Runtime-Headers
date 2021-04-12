/*
* Generated on Thursday, January 14, 2021 at 2:29:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/WebKit.axbundle/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/__WKContentViewAccessibility_super.h>

@interface WKContentViewAccessibility : __WKContentViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)copy:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)toggleUnderline:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)_setAccessibilityWebProcessToken:(id)arg1 ;
-(void)_hideKeyboard;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_systemDefaultFocusGroupDescriptor;
-(id)accessibilityElements;
-(id)_viewToAddFocusLayer;
-(id)accessibilityDragSourceDescriptors;
-(BOOL)_accessibilityIsScrollAncestor;
-(unsigned long long)accessibilityTraits;
-(void)_didRelaunchProcess;
-(void)_zoomToRevealFocusedElement;
-(id)_accessibilityHandwritingElement;
-(BOOL)accessibilityParentDiscardsChildrenContainerGroupingBehavior;
-(CGRect)accessibilityFrame;
-(int)_accessibilityRemotePid;
-(BOOL)_accessibilityHandlesRemoteFocusMovement;
-(void)_processDidExit;
-(void)toggleBoldface:(id)arg1 ;
-(void)_accessibilityRegisterUIProcessTokens;
-(CGPoint)accessibilityActivationPoint;
-(long long)accessibilityContainerType;
-(id)_accessibilityResponderElementForFocus;
-(void)increaseSizeForWebView:(id)arg1 ;
-(BOOL)_accessibilityServesAsFirstResponder;
-(id)_accessibilityResponderElement;
-(void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_accessibilityBeginUndoableTextInsertion;
-(BOOL)_accessibilityEndUndoableTextInsertion;
-(void)_accessibilityLoadAccessibilityInformation;
-(unsigned long long)_accessibilityAutomationType;
-(void)_accessibilityIncreaseSelection:(id)arg1 ;
-(void)dealloc;
-(void)decreaseSizeForWebView:(id)arg1 ;
-(void)_registerForNotificationsIfNecessary;
-(void)_signalAccessibilityPageLoadCompleteForCatalyst;
-(void)_pasteboardChanged:(id)arg1 ;
-(void)_axClearRemoteElements;
-(void)_axCleanupAfterTermination;
@end

