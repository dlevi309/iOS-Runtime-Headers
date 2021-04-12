/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class CAContext;

@interface SBSTARScreenFadeController : NSObject {

	double _lastBrightnessValue;
	CAContext* _context;

}
-(void)dealloc;
-(id)initWithBrightness:(double)arg1 ;
-(void)animateToBrightness:(double)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

