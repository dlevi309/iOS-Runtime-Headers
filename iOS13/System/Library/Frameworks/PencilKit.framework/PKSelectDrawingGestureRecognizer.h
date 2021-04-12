/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@interface PKSelectDrawingGestureRecognizer : UILongPressGestureRecognizer {

	double _lastFailureTime;

}

@property (assign,nonatomic) double lastFailureTime;              //@synthesize lastFailureTime=_lastFailureTime - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)lastFailureTime;
-(void)setLastFailureTime:(double)arg1 ;
@end

