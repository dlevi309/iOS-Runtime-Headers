/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ARPersonDetectionResult : NSObject <NSCopying> {

	CGRect _boundingBox;

}

@property (assign,nonatomic) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBoundingBox:(CGRect)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)boundingBox;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBoundingBox:(CGRect)arg1 ;
-(CGRect)rectScaledToSizeOfPixelBuffer:(CVBufferRef)arg1 ;
@end

