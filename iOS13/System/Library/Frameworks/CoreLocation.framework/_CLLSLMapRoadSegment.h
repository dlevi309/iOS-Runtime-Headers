/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(NSArray *)polylines;
-(unsigned long long)roadID;
-(void)setRoadID:(unsigned long long)arg1 ;
-(void)setPolylines:(NSArray *)arg1 ;
@end

