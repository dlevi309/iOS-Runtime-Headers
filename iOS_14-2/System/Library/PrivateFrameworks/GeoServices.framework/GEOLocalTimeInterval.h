/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocalTimeInterval : NSObject <NSSecureCoding> {

	double _startTime;
	double _endTime;

}

@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(id)initWithLocalTimeRange:(GEOPDLocalTimeRange*)arg1 ;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(double)endTime;
-(double)startTime;
@end

