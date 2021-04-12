/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)focalLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)imageResolution;
-(CGPoint)principalPoint;
-(id)initWithFocalLength:(CGPoint)arg1 imageResolution:(CGSize)arg2 principalPoint:(CGPoint)arg3 ;
@end

