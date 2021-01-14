/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDNaturalLightingCurve, NSTimeZone, NSString;

@interface HMDNaturalLightingContext : HMFObject <HMFLogging, NSSecureCoding, NSCopying> {

	HMDNaturalLightingCurve* _curve;
	NSTimeZone* _timeZone;

}

@property (copy,readonly) HMDNaturalLightingCurve * curve;              //@synthesize curve=_curve - In the implementation block
@property (copy,readonly) NSTimeZone * timeZone;                        //@synthesize timeZone=_timeZone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(HMDNaturalLightingCurve *)curve;
-(NSTimeZone *)timeZone;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCurve:(id)arg1 timeZone:(id)arg2 ;
@end

