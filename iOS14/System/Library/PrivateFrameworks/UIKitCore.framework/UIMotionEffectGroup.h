/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@class NSArray;

@interface UIMotionEffectGroup : UIMotionEffect {

	NSArray* _motionEffects;

}

@property (nonatomic,copy) NSArray * motionEffects;              //@synthesize motionEffects=_motionEffects - In the implementation block
-(NSArray *)motionEffects;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(void)setMotionEffects:(NSArray *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

