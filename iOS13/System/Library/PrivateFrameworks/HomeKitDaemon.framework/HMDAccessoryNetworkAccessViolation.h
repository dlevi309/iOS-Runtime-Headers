/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding> {

	NSDate* _lastViolationDate;
	NSDate* _lastResetDate;

}

@property (readonly) NSDate * lastViolationDate;              //@synthesize lastViolationDate=_lastViolationDate - In the implementation block
@property (readonly) NSDate * lastResetDate;                  //@synthesize lastResetDate=_lastResetDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)noViolation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(NSDate *)lastViolationDate;
-(NSDate *)lastResetDate;
-(id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2 ;
-(id)initWithLastViolationTimeInterval:(id)arg1 lastViolationResetTimeInterval:(id)arg2 ;
@end

