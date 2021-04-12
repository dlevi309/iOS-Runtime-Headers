/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _feedback;
	/*^block*/id _feedbackUpdateBlock;
	double _minimumInterval;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy) id feedbackUpdateBlock;                                            //@synthesize feedbackUpdateBlock=_feedbackUpdateBlock - In the implementation block
@property (assign,nonatomic) double minimumInterval;                                          //@synthesize minimumInterval=_minimumInterval - In the implementation block
+(id)defaultConfiguration;
+(id)lightConfiguration;
+(id)strongConfiguration;
+(id)softConfiguration;
+(id)rigidConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)feedback;
-(double)minimumInterval;
-(void)setFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setMinimumInterval:(double)arg1 ;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(void)setFeedbackUpdateBlock:(id)arg1 ;
-(id)feedbackUpdateBlock;
@end

