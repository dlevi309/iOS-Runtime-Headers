/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLLSLMapRoadSegment;

@interface _CLLSLHeadingSupplInfo : NSObject <NSCopying, NSSecureCoding> {

	_CLLSLMapRoadSegment* _roadSegment;

}

@property (nonatomic,copy) _CLLSLMapRoadSegment * roadSegment;              //@synthesize roadSegment=_roadSegment - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)description;
-(_CLLSLMapRoadSegment *)roadSegment;
-(void)setRoadSegment:(_CLLSLMapRoadSegment *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

