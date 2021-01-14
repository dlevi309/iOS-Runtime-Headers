/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIForceLevelClassifier.h>

@class _UIPreviewInteractionStateRecognizer;

@interface _UIPreviewInteractionForceLevelClassifier : _UIForceLevelClassifier {

	_UIPreviewInteractionStateRecognizer* _stateRecognizer;

}
-(void)touchForceMultiplierDidChange;
-(id)init;
-(id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2 ;
-(BOOL)wantsUnclampedForceValues;
-(void)reset;
-(void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
@end

