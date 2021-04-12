/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKRegion : NSObject <NSCopying, NSSecureCoding> {

	int _shape;
	BOOL _isExclusive;
	vec4 _halfExtent;
	shared_ptr<PKCPathHolder>* _path;
	int _regionOp;
	int _shape2;
	vec4 _halfExtent2;
	shared_ptr<PKCPathHolder>* _path2;

}

@property (nonatomic,readonly) CGPathRef path; 
+(BOOL)supportsSecureCoding;
+(id)infiniteRegion;
-(id)initWithSize:(CGSize)arg1 ;
-(void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char*)arg3 resultsStride:(long long)arg4 count:(int)arg5 ;
-(id)initWithPath:(CGPathRef)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPathRef)path;
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

