/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSArray;

@interface ODDFillColorList : NSObject {

	NSArray* mColors;
	int mHueDirection;
	int mMethod;

}
-(void)setColors:(id)arg1 ;
-(void)setMethod:(int)arg1 ;
-(id)colorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3 ;
-(id)cycleColorAtIndex:(unsigned long long)arg1 ;
-(id)repeatColorAtIndex:(unsigned long long)arg1 ;
-(id)spanColorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3 ;
-(void)setHueDirection:(int)arg1 ;
-(void)getComponentsForIndex:(unsigned long long)arg1 hue:(float*)arg2 saturation:(float*)arg3 brightness:(float*)arg4 state:(id)arg5 ;
@end

