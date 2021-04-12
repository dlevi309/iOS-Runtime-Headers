/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PIClusterPoint : NSObject <NSCopying> {

	double _value;
	CGPoint _point;

}

@property (nonatomic,readonly) CGPoint point;              //@synthesize point=_point - In the implementation block
@property (nonatomic,readonly) double value;               //@synthesize value=_value - In the implementation block
-(CGPoint)point;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCGPoint:(CGPoint)arg1 value:(double)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 ;
-(BOOL)isEqualToPoint:(id)arg1 ;
@end

