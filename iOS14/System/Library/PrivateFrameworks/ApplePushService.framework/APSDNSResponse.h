/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface APSDNSResponse : NSObject <NSSecureCoding> {

	NSString* _hostname;
	NSArray* _ipv4Address;
	NSArray* _ipv6Address;

}

@property (nonatomic,readonly) NSString * hostname;                //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) NSArray * ipv4Address;              //@synthesize ipv4Address=_ipv4Address - In the implementation block
@property (nonatomic,readonly) NSArray * ipv6Address;              //@synthesize ipv6Address=_ipv6Address - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initResponseForHostname:(id)arg1 ipv4Address:(id)arg2 ipv6Address:(id)arg3 ;
-(NSArray *)ipv4Address;
-(NSArray *)ipv6Address;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)hostname;
-(id)initWithCoder:(id)arg1 ;
@end

