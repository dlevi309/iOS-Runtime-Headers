/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
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
-(BOOL)_isEligibleForFocusInteraction;
-(id)_linearFocusMovementSequences;
-(BOOL)_reversesLinearFocusWrapping;
-(long long)_preferredFocusMovementStyle;
-(id)_focusGroupDescriptor;
-(void)setAreChildrenFocused:(BOOL)arg1;
-(BOOL)areChildrenFocused;

@end

