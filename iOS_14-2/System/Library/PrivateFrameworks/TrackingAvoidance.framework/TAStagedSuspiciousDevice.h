/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TASuspiciousDevice, NSDate;

@interface TAStagedSuspiciousDevice : NSObject <NSSecureCoding> {

	TASuspiciousDevice* _detection;
	NSDate* _keepInStagingUntil;

}

@property (nonatomic,readonly) TASuspiciousDevice * detection;              //@synthesize detection=_detection - In the implementation block
@property (nonatomic,readonly) NSDate * keepInStagingUntil;                 //@synthesize keepInStagingUntil=_keepInStagingUntil - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(TASuspiciousDevice *)detection;
-(NSDate *)keepInStagingUntil;
-(id)initWithDetection:(id)arg1 keepInStagingUntil:(id)arg2 ;
@end

