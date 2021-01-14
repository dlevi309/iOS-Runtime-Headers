/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrightnessControl.framework/BrightnessControl
*/

#import <BrightnessControl/BCBrtControl.h>

@interface BCVirtualBrtControl : BCBrtControl {

	double _nits;

}
+(id)newMonitorWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(void)failToCreateDisplaysFor:(double)arg1 ;
-(id)init;
-(BOOL)setNits:(double)arg1 error:(id*)arg2 ;
-(double)getNitsWithError:(id*)arg1 ;
@end

