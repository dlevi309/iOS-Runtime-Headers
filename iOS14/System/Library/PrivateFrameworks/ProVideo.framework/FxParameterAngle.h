/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxPinParameter.h>

@interface FxParameterAngle : FxPinParameter {

	FxParameterAnglePriv* _anglePriv;

}
-(double)stepValue;
-(void)setStepValue:(double)arg1 ;
-(id)init;
-(void)setStartValue:(double)arg1 ;
-(double)startValue;
-(void)dealloc;
-(BOOL)isClockwise;
-(void)setIsClockwise:(BOOL)arg1 ;
@end

