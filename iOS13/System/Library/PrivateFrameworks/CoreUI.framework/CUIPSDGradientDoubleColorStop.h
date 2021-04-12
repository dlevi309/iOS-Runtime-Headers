/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientColorStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding> {

	psdGradientColor leadOutColor;

}
+(void)initialize;
+(id)doubleColorStopWithLocation:(double)arg1 leadInColor:(psdGradientColor)arg2 leadOutColor:(psdGradientColor)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(psdGradientColor)leadOutColor;
-(BOOL)isDoubleStop;
-(id)initWithLocation:(double)arg1 leadInColor:(psdGradientColor)arg2 leadOutColor:(psdGradientColor)arg3 ;
-(psdGradientColor)leadInColor;
@end

