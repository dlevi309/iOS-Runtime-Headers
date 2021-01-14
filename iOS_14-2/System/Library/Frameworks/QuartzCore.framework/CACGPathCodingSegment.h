/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CACGPathCodingSegment : NSObject <NSSecureCoding> {

	int _type;
	CGPoint _points[3];

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addToCGPath:(CGPathRef)arg1 ;
-(id)initWithCGPathElement:(const CGPathElement*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

