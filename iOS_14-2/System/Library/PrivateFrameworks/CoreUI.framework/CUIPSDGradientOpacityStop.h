/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {

	double opacity;

}
+(void)initialize;
+(id)opacityStopWithLocation:(double)arg1 opacity:(double)arg2 ;
-(BOOL)isOpacityStop;
-(double)opacityLocation;
-(double)opacity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLocation:(double)arg1 opacity:(double)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

