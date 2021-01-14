/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface NTKUpNextCurvedMetadata : NSObject <NSSecureCoding, NSCopying> {

	double _radius;
	double _angle;
	UIImage* _maskImage;
	CGPoint _center;

}

@property (nonatomic,readonly) double radius;                    //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) double angle;                     //@synthesize angle=_angle - In the implementation block
@property (nonatomic,readonly) CGPoint center;                   //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) UIImage * maskImage;              //@synthesize maskImage=_maskImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)angle;
-(CGPoint)center;
-(void)encodeWithCoder:(id)arg1 ;
-(double)radius;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)maskImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRadius:(double)arg1 angle:(double)arg2 center:(CGPoint)arg3 maskImage:(id)arg4 ;
@end

