/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NPLocation : NSObject <NSSecureCoding> {

	double _latitude;
	double _longtitude;
	NSDate* _timestamp;

}

@property (readonly) BOOL isValid; 
@property (assign) double latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (assign) double longtitude;                         //@synthesize longtitude=_longtitude - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)latitude;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLongtitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longtitude:(double)arg2 timestamp:(id)arg3 ;
-(id)description;
-(BOOL)isValid;
-(double)longtitude;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

