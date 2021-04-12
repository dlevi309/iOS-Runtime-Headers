/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@protocol MKVariableDelayTapRecognizerDelegate;
@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer {

	double originalMaximumIntervalBetweenSuccessiveTaps;
	id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;

}

@property (assign,nonatomic,__weak) id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setTapDelayDelegate:(id<MKVariableDelayTapRecognizerDelegate>)arg1 ;
-(id<MKVariableDelayTapRecognizerDelegate>)tapDelayDelegate;
@end

