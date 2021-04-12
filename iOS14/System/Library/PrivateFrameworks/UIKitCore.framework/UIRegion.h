/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PKRegion, UIBezierPath;

@interface UIRegion : NSObject <NSCopying, NSCoding> {

	PKRegion* _region;

}

@property (nonatomic,readonly) UIBezierPath * path; 
@property (nonatomic,readonly) PKRegion * _region; 
+(id)infiniteRegion;
-(id)initWithSize:(CGSize)arg1 ;
-(void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char*)arg3 resultsStride:(long long)arg4 count:(int)arg5 ;
-(id)initWithPath:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIBezierPath *)path;
-(PKRegion *)_region;
-(id)initWithRadius:(double)arg1 ;
-(id)regionByUnionWithRegion:(id)arg1 ;
-(id)regionByDifferenceFromRegion:(id)arg1 ;
-(id)regionByIntersectionWithRegion:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)inverseRegion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
@end

