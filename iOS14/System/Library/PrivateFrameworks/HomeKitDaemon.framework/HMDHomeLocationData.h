/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSDate;

@interface HMDHomeLocationData : HMFObject <NSSecureCoding> {

	CLLocation* _location;
	NSDate* _locationUpdateTimestamp;

}

@property (nonatomic,readonly) CLLocation * location;                         //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * locationUpdateTimestamp;              //@synthesize locationUpdateTimestamp=_locationUpdateTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)locationUpdateTimestamp;
-(id)initWithLocation:(id)arg1 locationUpdateTimestamp:(id)arg2 ;
@end

