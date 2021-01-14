/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)strongConfiguration;
+(id)rigidConfiguration;
+(id)softConfiguration;
+(id)lightConfiguration;
-(id)feedbackKeyPaths;
-(void)setFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)feedback;
-(double)minimumInterval;
-(void)setFeedbackUpdateBlock:(id)arg1 ;
-(id)feedbackUpdateBlock;
-(void)setMinimumInterval:(double)arg1 ;
-(long long)requiredSupportLevel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

