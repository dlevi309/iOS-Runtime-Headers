/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(double)horizontalAccuracy;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 source:(id)arg5 ;
@end

