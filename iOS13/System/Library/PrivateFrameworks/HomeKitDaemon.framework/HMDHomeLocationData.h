/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocation *)location;
-(NSDate *)locationUpdateTimestamp;
-(id)initWithLocation:(id)arg1 locationUpdateTimestamp:(id)arg2 ;
@end

