/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(void)addToCGPath:(CGPathRef)arg1 ;
-(id)initWithCGPathElement:(const CGPathElement*)arg1 ;
@end

