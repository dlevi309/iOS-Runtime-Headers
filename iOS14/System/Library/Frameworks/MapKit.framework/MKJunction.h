/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MKJunction : NSObject <NSSecureCoding> {

	GEOJunctionElement* _elements;
	unsigned long long _count;
	int _type;
	int _maneuver;
	int _drivingSide;
	GEOJunctionElement* _snapped[8];

}

@property (nonatomic,readonly) int type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithType:(int)arg1 maneuver:(int)arg2 drivingSide:(int)arg3 elements:(GEOJunctionElement*)arg4 count:(unsigned long long)arg5 ;
-(void)getArrowPath:(id*)arg1 arrowStrokePath:(id*)arg2 intersectionBackgroundPath:(id*)arg3 strokePath:(id*)arg4 withSize:(CGSize)arg5 metrics:(SCD_Struct_MK63)arg6 drivingSide:(int)arg7 visualCenter:(CGPoint*)arg8 ;
-(int)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithJunction:(id)arg1 ;
-(void)getRoundaboutArrowPath:(id*)arg1 intersectionBackgroundPath:(id*)arg2 strokePath:(id*)arg3 withSize:(CGSize)arg4 metrics:(SCD_Struct_MK63)arg5 drivingSide:(int)arg6 visualCenter:(CGPoint*)arg7 ;
-(void)getArrowPath:(id*)arg1 arrowStrokePath:(id*)arg2 pivot:(CGPoint*)arg3 withSize:(CGSize)arg4 metrics:(SCD_Struct_MK63)arg5 visualCenter:(CGPoint*)arg6 ;
-(id)roundaboutArrowWithSize:(CGSize)arg1 metrics:(SCD_Struct_MK63)arg2 outerRadius:(double)arg3 endAngle:(double)arg4 pivot:(CGPoint*)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

