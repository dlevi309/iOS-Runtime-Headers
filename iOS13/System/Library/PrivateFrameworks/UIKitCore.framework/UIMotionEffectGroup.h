/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@class NSArray;

@interface UIMotionEffectGroup : UIMotionEffect {

	NSArray* _motionEffects;

}

@property (nonatomic,copy) NSArray * motionEffects;              //@synthesize motionEffects=_motionEffects - In the implementation block
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)motionEffects;
-(void)setMotionEffects:(NSArray *)arg1 ;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
@end

