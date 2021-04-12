/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIStatesFeedbackGenerator;

@interface _UITapticEngine : NSObject {

	BOOL _feedbackActivated;
	_UIStatesFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL feedbackActivated;                                      //@synthesize feedbackActivated=_feedbackActivated - In the implementation block
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(id)init;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)actuateFeedback:(long long)arg1 ;
-(void)endUsingFeedback:(long long)arg1 ;
-(void)prepareUsingFeedback:(long long)arg1 ;
-(id)_stateForFeedback:(long long)arg1 ;
-(BOOL)feedbackActivated;
-(void)setFeedbackActivated:(BOOL)arg1 ;
@end

