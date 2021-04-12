/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _CLLSLMapRoadSegment : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _roadID;
	NSArray* _polylines;

}

@property (assign,nonatomic) unsigned long long roadID;              //@synthesize roadID=_roadID - In the implementation block
@property (nonatomic,copy) NSArray * polylines;                      //@synthesize polylines=_polylines - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)roadID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)description;
-(NSArray *)polylines;
-(void)setRoadID:(unsigned long long)arg1 ;
-(void)setPolylines:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

