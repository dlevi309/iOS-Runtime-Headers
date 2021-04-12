/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFamily:(long long)arg1 curveWidth:(double)arg2 padding:(double)arg3 forDevice:(id)arg4 ;
-(void)setClockwise:(BOOL)arg1 ;
-(BOOL)clockwise;
@end

