/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKRegion;

@interface SKRegion : NSObject <NSCopying, NSSecureCoding> {

	PKRegion* _region;

}

@property (nonatomic,readonly) const CGPathRef path; 
+(BOOL)supportsSecureCoding;
+(id)infiniteRegion;
-(id)initWithSize:(CGSize)arg1 ;
-(void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char*)arg3 resultsStride:(long long)arg4 count:(int)arg5 ;
-(id)initWithPath:(CGPathRef)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(const CGPathRef)path;
-(id)initWithRadius:(float)arg1 ;
-(id)regionByUnionWithRegion:(id)arg1 ;
-(id)regionByDifferenceFromRegion:(id)arg1 ;
-(id)regionByIntersectionWithRegion:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)inverseRegion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(BOOL)isEqualToRegion:(id)arg1 ;
-(BOOL)isInfinite;
@end

