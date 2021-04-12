/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDResidentReachabilityContext : HMFObject <NSSecureCoding> {

	NSNumber* _mostRecentReachability;

}

@property (copy,readonly) NSNumber * mostRecentReachability;              //@synthesize mostRecentReachability=_mostRecentReachability - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMostRecentReachability:(id)arg1 ;
-(NSNumber *)mostRecentReachability;
@end

