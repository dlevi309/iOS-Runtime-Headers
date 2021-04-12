/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIScreenEdgePanGestureRecognizer.h>

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer {

	double _grabberActiveZoneWidth;

}

@property (assign,nonatomic) double grabberActiveZoneWidth;                                      //@synthesize grabberActiveZoneWidth=_grabberActiveZoneWidth - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemGestureRecognizerDelegate> delegate; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(long long)_touchInterfaceOrientation;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)sb_commonInitScreenEdgePanGestureRecognizer;
-(double)grabberActiveZoneWidth;
-(BOOL)isLocationWithinGrabberActiveZone;
-(void)setGrabberActiveZoneWidth:(double)arg1 ;
@end

