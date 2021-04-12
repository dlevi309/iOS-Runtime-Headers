/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HMDCameraNetworkConfig : HMFObject <NSCopying> {

	SCD_Union_HM22 _ipv4SockAddress;
	SCD_Union_HM22 _ipv6SockAddress;
	BOOL _ipv6;
	NSString* _ipAddress;
	NSNumber* _rtpPort;

}

@property (nonatomic,retain) NSString * ipAddress;              //@synthesize ipAddress=_ipAddress - In the implementation block
@property (assign,nonatomic) BOOL ipv6;                         //@synthesize ipv6=_ipv6 - In the implementation block
@property (nonatomic,retain) NSNumber * rtpPort;                //@synthesize rtpPort=_rtpPort - In the implementation block
+(id)localIPAddress;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIpv6:(BOOL)arg1 ;
-(BOOL)ipv6;
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(NSNumber *)rtpPort;
-(id)initWithAddress:(id)arg1 ipv6:(BOOL)arg2 rtpPort:(id)arg3 ;
-(void)setRtpPort:(NSNumber *)arg1 ;
@end

