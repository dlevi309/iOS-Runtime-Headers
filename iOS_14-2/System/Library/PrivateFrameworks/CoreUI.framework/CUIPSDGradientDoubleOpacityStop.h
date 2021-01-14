/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientOpacityStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {

	double leadOutOpacity;

}
+(void)initialize;
+(id)doubleOpacityStopWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3 ;
-(double)leadOutOpacity;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isDoubleStop;
-(id)initWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3 ;
-(double)leadInOpacity;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

