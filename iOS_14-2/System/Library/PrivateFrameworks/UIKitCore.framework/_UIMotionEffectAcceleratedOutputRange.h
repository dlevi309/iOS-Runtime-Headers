/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {

	UIOffset _referenceOffset;
	CGPoint _referenceAcceleration;
	CGPoint _acceleration;

}

@property (nonatomic,readonly) CGPoint acceleration;              //@synthesize acceleration=_acceleration - In the implementation block
-(id)init;
-(UIOffset)acceleratedOutputForViewerOffset:(UIOffset)arg1 accelerationBoostFactor:(CGPoint)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CGPoint)acceleration;
-(unsigned long long)hash;
-(void)reset;
-(void)setAcceleration:(CGPoint)arg1 fixingOutputForViewerOffset:(UIOffset)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

