/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIStatesFeedbackGenerator;

@interface _UITapticEngine : NSObject {

	BOOL _feedbackActivated;
	_UIStatesFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL feedbackActivated;                                      //@synthesize feedbackActivated=_feedbackActivated - In the implementation block
-(id)init;
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)actuateFeedback:(long long)arg1 ;
-(void)prepareUsingFeedback:(long long)arg1 ;
-(void)endUsingFeedback:(long long)arg1 ;
-(id)_stateForFeedback:(long long)arg1 ;
-(BOOL)feedbackActivated;
-(void)setFeedbackActivated:(BOOL)arg1 ;
@end

