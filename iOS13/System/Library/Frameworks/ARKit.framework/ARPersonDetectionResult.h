/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ARPersonDetectionResult : NSObject <NSCopying, NSSecureCoding> {

	CGRect _boundingBox;

}

@property (assign,nonatomic) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)boundingBox;
-(void)setBoundingBox:(CGRect)arg1 ;
-(id)initWithBoundingBox:(CGRect)arg1 ;
-(CGRect)rectScaledToSizeOfPixelBuffer:(CVBufferRef)arg1 ;
@end

