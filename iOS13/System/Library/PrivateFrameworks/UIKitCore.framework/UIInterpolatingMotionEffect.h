/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@class NSString;

@interface UIInterpolatingMotionEffect : UIMotionEffect {

	double _horizontalAccelerationBoostFactor;
	double _verticalAccelerationBoostFactor;
	NSString* _keyPath;
	long long _type;
	id _minimumRelativeValue;
	id _maximumRelativeValue;

}

@property (nonatomic,readonly) NSString * keyPath;                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id minimumRelativeValue;              //@synthesize minimumRelativeValue=_minimumRelativeValue - In the implementation block
@property (nonatomic,retain) id maximumRelativeValue;              //@synthesize maximumRelativeValue=_maximumRelativeValue - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(id)initWithKeyPath:(id)arg1 type:(long long)arg2 ;
-(void)setMinimumRelativeValue:(id)arg1 ;
-(void)setMaximumRelativeValue:(id)arg1 ;
-(void)_setType:(long long)arg1 ;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(double)_horizontalAccelerationBoostFactor;
-(void)_setHorizontalAccelerationBoostFactor:(double)arg1 ;
-(double)_verticalAccelerationBoostFactor;
-(void)_setVerticalAccelerationBoostFactor:(double)arg1 ;
-(void)_setKeyPath:(id)arg1 ;
-(id)minimumRelativeValue;
-(id)maximumRelativeValue;
@end

