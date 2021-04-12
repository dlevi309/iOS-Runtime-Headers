/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSArray;

@interface ODDFillColorList : NSObject {

	NSArray* mColors;
	int mHueDirection;
	int mMethod;

}
-(void)setMethod:(int)arg1 ;
-(void)setColors:(id)arg1 ;
-(id)colorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3 ;
-(id)cycleColorAtIndex:(unsigned long long)arg1 ;
-(id)repeatColorAtIndex:(unsigned long long)arg1 ;
-(id)spanColorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3 ;
-(void)setHueDirection:(int)arg1 ;
-(void)getComponentsForIndex:(unsigned long long)arg1 hue:(float*)arg2 saturation:(float*)arg3 brightness:(float*)arg4 state:(id)arg5 ;
@end

