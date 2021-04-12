/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber;

@interface HMDNaturalLightingActiveTransitionContext : HMFObject <NSCopying> {

	NSDate* _startDate;
	unsigned long long _millisecondsElapsedSinceStartDate;
	NSNumber* _transitionChecksum;

}

@property (copy,readonly) NSDate * startDate;                                           //@synthesize startDate=_startDate - In the implementation block
@property (readonly) unsigned long long millisecondsElapsedSinceStartDate;              //@synthesize millisecondsElapsedSinceStartDate=_millisecondsElapsedSinceStartDate - In the implementation block
@property (copy,readonly) NSNumber * transitionChecksum;                                //@synthesize transitionChecksum=_transitionChecksum - In the implementation block
-(NSDate *)startDate;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)millisecondsElapsedSinceStartDate;
-(NSNumber *)transitionChecksum;
-(id)initWithStartDate:(id)arg1 millisecondsElapsedSinceStartDate:(unsigned long long)arg2 transitionChecksum:(id)arg3 ;
@end

