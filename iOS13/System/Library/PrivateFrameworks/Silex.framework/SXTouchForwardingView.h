/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@interface SXTouchForwardingView : UIView {

	/*^block*/id _touchedBlock;
	double _lastTouchTimestamp;

}

@property (assign,nonatomic) double lastTouchTimestamp;                  //@synthesize lastTouchTimestamp=_lastTouchTimestamp - In the implementation block
@property (setter=onTouch:,nonatomic,copy) id touchedBlock;              //@synthesize touchedBlock=_touchedBlock - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)lastTouchTimestamp;
-(id)touchedBlock;
-(void)setLastTouchTimestamp:(double)arg1 ;
-(void)onTouch:(/*^block*/id)arg1 ;
@end

