/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)center;
-(double)radius;
-(double)angle;
-(UIImage *)maskImage;
-(id)initWithRadius:(double)arg1 angle:(double)arg2 center:(CGPoint)arg3 maskImage:(id)arg4 ;
@end

