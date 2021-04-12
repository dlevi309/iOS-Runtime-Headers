/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)value;
-(CGPoint)point;
-(id)initWithCGPoint:(CGPoint)arg1 value:(double)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 ;
-(BOOL)isEqualToPoint:(id)arg1 ;
@end

