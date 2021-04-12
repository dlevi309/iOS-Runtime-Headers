/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HMDEndPointAddress : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	BOOL _isIPv6Address;
	NSString* _ipAddress;
	NSNumber* _videoRTPPort;
	NSNumber* _audioRTPPort;

}

@property (nonatomic,copy,readonly) NSString * ipAddress;                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) BOOL isIPv6Address;                        //@synthesize isIPv6Address=_isIPv6Address - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * videoRTPPort;              //@synthesize videoRTPPort=_videoRTPPort - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioRTPPort;              //@synthesize audioRTPPort=_audioRTPPort - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSString *)ipAddress;
-(NSNumber *)audioRTPPort;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(BOOL)isIPv6Address;
-(NSNumber *)videoRTPPort;
-(id)initWithIPAddress:(id)arg1 isIPv6Address:(BOOL)arg2 videoRTPPort:(id)arg3 audioRTPPort:(id)arg4 ;
-(BOOL)compatibleWithRemoteEndPoint:(id)arg1 ;
@end

