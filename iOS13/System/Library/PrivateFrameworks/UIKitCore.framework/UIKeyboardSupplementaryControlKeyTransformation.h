/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIKeyboardKeyplaneTransformation.h>

@class NSString;

@interface UIKeyboardSupplementaryControlKeyTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationIdentifier;
+(id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(id)cachedControlKeySetsForTransformationContext:(id)arg1 ;
+(double)_totalKeyPaddingForOrientation:(long long)arg1 ;
+(double)_keyplanePaddingForOrientation:(long long)arg1 ;
+(unsigned long long)_numberOfKeysInRow:(id)arg1 firstKey:(id*)arg2 lastKey:(id*)arg3 ;
+(id)_supplementaryControlKeySetForOrientation:(long long)arg1 context:(id)arg2 ;
+(id)_supplementaryControlKeyWithName:(id)arg1 context:(id)arg2 ;
+(double)_derivedLeadingControlKeyWidthForRow:(unsigned long long)arg1 keysForRow:(id)arg2 context:(id)arg3 ;
+(double)_keyPitchForKeyplane:(id)arg1 ;
+(void)adjustHorizontalPaddingForKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(id)_supplementaryScriptSwitchKeyWithContext:(id)arg1 ;
+(id)_cachedUndoOrRedoKeyForKeyplane:(id)arg1 ;
+(id)_supplementaryShiftKeysWithContext:(id)arg1 ;
+(void)transformLastRowKeysForKeyplane:(id)arg1 row:(unsigned long long)arg2 withTransformationContext:(id)arg3 ;
+(double)_keyplanePaddingForOrientation:(long long)arg1 row:(unsigned long long)arg2 ;
+(double)_derivedTrailingControlKeyWidthForRow:(unsigned long long)arg1 orientation:(long long)arg2 ;
+(void)transformKeysForHandwritingKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(void)transformKeysForFourRowKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(void)transformKeysForFiveRowKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
@end

