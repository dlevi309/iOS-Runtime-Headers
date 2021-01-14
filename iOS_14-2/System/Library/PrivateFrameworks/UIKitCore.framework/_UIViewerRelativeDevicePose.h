/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {

	_UIMotionEffectAcceleratedOutputRange* _acceleratedOutputRange;
	double _planarRotationAngle;
	UIOffset _viewerOffset;

}

@property (assign,nonatomic) UIOffset viewerOffset;                   //@synthesize viewerOffset=_viewerOffset - In the implementation block
@property (assign,nonatomic) double planarRotationAngle;              //@synthesize planarRotationAngle=_planarRotationAngle - In the implementation block
-(UIOffset)_acceleratedOutputForViewerOffset:(UIOffset)arg1 accelerationBoostFactor:(CGPoint)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIOffset)viewerOffset;
-(void)setViewerOffset:(UIOffset)arg1 ;
-(double)planarRotationAngle;
-(id)description;
-(void)_setAcceleration:(CGPoint)arg1 fixingOutputForViewerOffset:(UIOffset)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlanarRotationAngle:(double)arg1 ;
-(void)_reset;
-(id)_acceleratedOutputRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

