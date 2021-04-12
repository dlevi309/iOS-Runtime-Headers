/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ARCameraParameters : NSObject <NSSecureCoding> {

	CGSize _imageResolution;
	CGPoint _focalLength;
	CGPoint _principalPoint;

}

@property (nonatomic,readonly) CGSize imageResolution;              //@synthesize imageResolution=_imageResolution - In the implementation block
@property (nonatomic,readonly) CGPoint focalLength;                 //@synthesize focalLength=_focalLength - In the implementation block
@property (nonatomic,readonly) CGPoint principalPoint;              //@synthesize principalPoint=_principalPoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)focalLength;
-(CGSize)imageResolution;
-(CGPoint)principalPoint;
-(id)initWithFocalLength:(CGPoint)arg1 imageResolution:(CGSize)arg2 principalPoint:(CGPoint)arg3 ;
@end

