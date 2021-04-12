/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationProgressView.h>

@class NTKRichComplicationRingView;

@interface NTKRichComplicationRingProgressView : NTKRichComplicationProgressView {

	double _curveWidth;
	NTKRichComplicationRingView* _backgroundView;
	NTKRichComplicationRingView* _foregroundView;
	BOOL _clockwise;

}

@property (assign,nonatomic) BOOL clockwise;              //@synthesize clockwise=_clockwise - In the implementation block
-(BOOL)clockwise;
-(id)initWithCurveWidth:(double)arg1 padding:(double)arg2 forDevice:(id)arg3 ;
-(void)setClockwise:(BOOL)arg1 ;
@end

