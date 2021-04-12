/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDConnectionLineAbstractLayout.h>

@interface TSDConnectionLineLayout : TSDConnectionLineAbstractLayout {

	double mStartClipT;
	double mEndClipT;

}
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)quadraticCurve:(CGPoint)arg1 ;
-(id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(CGPoint)arg3 ;
-(CGPoint)controlPointForPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 andOriginalA:(CGPoint)arg3 originalB:(CGPoint)arg4 ;
@end

