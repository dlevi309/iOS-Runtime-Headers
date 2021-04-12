/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign) double latitude;                 //@synthesize latitude=_latitude - In the implementation block
@property (assign) double longtitude;               //@synthesize longtitude=_longtitude - In the implementation block
@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(double)latitude;
-(void)setLatitude:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longtitude:(double)arg2 timestamp:(id)arg3 ;
-(double)longtitude;
-(void)setLongtitude:(double)arg1 ;
@end

