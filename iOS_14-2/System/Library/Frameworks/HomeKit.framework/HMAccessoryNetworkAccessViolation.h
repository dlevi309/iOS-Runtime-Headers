/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface HMAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding> {

	NSDate* _lastViolationDate;
	NSDate* _lastResetDate;

}

@property (getter=hasCurrentViolation,readonly) BOOL currentViolation; 
@property (readonly) NSDate * lastViolationDate;                                    //@synthesize lastViolationDate=_lastViolationDate - In the implementation block
@property (readonly) NSDate * lastResetDate;                                        //@synthesize lastResetDate=_lastResetDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastViolationDate;
-(NSDate *)lastResetDate;
-(id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2 ;
-(BOOL)hasCurrentViolation;
-(BOOL)isEqual:(id)arg1 ;
@end

