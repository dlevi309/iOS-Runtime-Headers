/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 matchDataArray:(id)arg7 ;
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 ;
-(long long)matchQuality;
-(CLLocationCoordinate2D)matchCoordinate;
-(double)matchCourse;
-(int)matchFormOfWay;
-(int)matchRoadClass;
-(BOOL)isMatchShifted;
-(NSData *)matchDataArray;
@end

