/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIScreenEdgePanGestureRecognizer.h>

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer {

	double _grabberActiveZoneWidth;

}

@property (assign,nonatomic) double grabberActiveZoneWidth;                                      //@synthesize grabberActiveZoneWidth=_grabberActiveZoneWidth - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemGestureRecognizerDelegate> delegate; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)sb_commonInitScreenEdgePanGestureRecognizer;
-(BOOL)isLocationWithinGrabberActiveZone;
-(long long)_touchInterfaceOrientation;
-(double)grabberActiveZoneWidth;
-(void)setGrabberActiveZoneWidth:(double)arg1 ;
@end

