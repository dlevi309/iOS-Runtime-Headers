/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SKKeyframeSequence : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _count;
	NSMutableArray* _values;
	NSMutableArray* _times;
	long long _interpolationMode;
	long long _repeatMode;
	SKCKeyframeSequence* _cKeyframeSequence;

}

@property (assign,nonatomic) long long interpolationMode; 
@property (assign,nonatomic) long long repeatMode; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(long long)repeatMode;
-(Class)_valueClass;
-(void)setRepeatMode:(long long)arg1 ;
-(id)copy;
-(id)initWithCount:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(long long)interpolationMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sampleAtTime:(double)arg1 ;
-(double)getKeyframeTimeForIndex:(unsigned long long)arg1 ;
-(id)getKeyframeValueForIndex:(unsigned long long)arg1 ;
-(id)initWithKeyframeValues:(id)arg1 times:(id)arg2 ;
-(void)setInterpolationMode:(long long)arg1 ;
-(void)_dirtySKCKeyframeSequence;
-(void)setKeyframeValue:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setKeyframeTime:(double)arg1 forIndex:(unsigned long long)arg2 ;
-(SKCKeyframeSequence*)_createSKCKeyframeSequence;
-(void)addKeyframeValue:(id)arg1 time:(double)arg2 ;
-(void)removeLastKeyframe;
-(void)removeAllKeyframes;
-(void)removeKeyframeAtIndex:(unsigned long long)arg1 ;
-(void)setKeyframeValue:(id)arg1 time:(double)arg2 forIndex:(unsigned long long)arg3 ;
-(BOOL)isEqualToSequence:(id)arg1 ;
@end

