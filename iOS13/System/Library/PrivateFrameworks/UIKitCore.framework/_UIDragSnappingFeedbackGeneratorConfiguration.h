/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDragFeedbackGeneratorConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIDragSnappingFeedbackGeneratorConfiguration : _UIDragFeedbackGeneratorConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _objectSnappedFeedback;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> objectSnappedFeedback;              //@synthesize objectSnappedFeedback=_objectSnappedFeedback - In the implementation block
+(id)defaultConfiguration;
-(id)feedbackKeyPaths;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)objectSnappedFeedback;
-(void)setObjectSnappedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
@end

