/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CLLocationMatchInfo : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) long long matchQuality; 
@property (nonatomic,readonly) CLLocationCoordinate2D matchCoordinate; 
@property (nonatomic,readonly) double matchCourse; 
@property (nonatomic,readonly) int matchFormOfWay; 
@property (nonatomic,readonly) int matchRoadClass; 
@property (getter=isMatchShifted,nonatomic,readonly) BOOL matchShifted; 
@property (nonatomic,copy,readonly) NSData * matchDataArray; 
+(BOOL)supportsSecureCoding;
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 matchDataArray:(id)arg7 ;
-(long long)matchQuality;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(CLLocationCoordinate2D)matchCoordinate;
-(double)matchCourse;
-(int)matchFormOfWay;
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 ;
-(int)matchRoadClass;
-(BOOL)isMatchShifted;
-(NSData *)matchDataArray;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

