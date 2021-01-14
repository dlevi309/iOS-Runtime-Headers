/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HMDCameraNetworkConfig : HMFObject <NSCopying> {

	SCD_Union_HM24 _ipv4SockAddress;
	SCD_Union_HM24 _ipv6SockAddress;
	BOOL _ipv6;
	NSString* _ipAddress;
	NSNumber* _rtpPort;

}

@property (nonatomic,retain) NSString * ipAddress;              //@synthesize ipAddress=_ipAddress - In the implementation block
@property (assign,nonatomic) BOOL ipv6;                         //@synthesize ipv6=_ipv6 - In the implementation block
@property (nonatomic,retain) NSNumber * rtpPort;                //@synthesize rtpPort=_rtpPort - In the implementation block
+(id)localIPAddress;
-(BOOL)ipv6;
-(id)init;
-(id)description;
-(NSNumber *)rtpPort;
-(void)setIpAddress:(NSString *)arg1 ;
-(NSString *)ipAddress;
-(void)setIpv6:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAddress:(id)arg1 ipv6:(BOOL)arg2 rtpPort:(id)arg3 ;
-(void)setRtpPort:(NSNumber *)arg1 ;
@end

