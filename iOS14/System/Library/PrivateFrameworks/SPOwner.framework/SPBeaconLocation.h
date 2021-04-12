/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface SPBeaconLocation : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _timestamp;
	double _latitude;
	double _longitude;
	double _horizontalAccuracy;
	NSString* _source;

}

@property (nonatomic,copy) NSDate * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double latitude;                          //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                         //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSString * source;                          //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)latitude;
-(NSDate *)timestamp;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setLongitude:(double)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 source:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(double)horizontalAccuracy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)source;
@end

