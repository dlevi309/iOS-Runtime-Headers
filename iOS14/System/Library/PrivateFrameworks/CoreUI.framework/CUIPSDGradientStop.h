/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {

	double location;

}
+(void)initialize;
-(BOOL)isColorStop;
-(BOOL)isOpacityStop;
-(double)location;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isDoubleStop;
-(id)initWithLocation:(double)arg1 ;
-(void)setLocation:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

