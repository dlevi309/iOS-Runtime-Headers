/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

