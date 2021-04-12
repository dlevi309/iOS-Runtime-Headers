/*
* Generated on Monday, March 1, 2021 at 2:35:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
*/

@class NSArray;


@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@optional
-(BOOL)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1;
-(void)_setNeedsNonDeferredFocusUpdate;
-(BOOL)_reversesLinearFocusWrapping;
-(id)_focusGroupDescriptor;
-(BOOL)areChildrenFocused;
-(void)setAreChildrenFocused:(BOOL)arg1;
-(BOOL)_isEligibleForFocusInteraction;
-(long long)_preferredFocusMovementStyle;
-(id)_linearFocusMovementSequences;

@end

