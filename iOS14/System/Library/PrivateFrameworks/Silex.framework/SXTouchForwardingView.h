/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)onTouch:(/*^block*/id)arg1 ;
-(id)touchedBlock;
-(void)setLastTouchTimestamp:(double)arg1 ;
@end

