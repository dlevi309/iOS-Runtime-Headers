/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HMDEndPointAddress : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

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
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSString *)ipAddress;
-(NSNumber *)audioRTPPort;
-(BOOL)_parseFromTLVData;
-(BOOL)isIPv6Address;
-(NSNumber *)videoRTPPort;
-(id)initWithIPAddress:(id)arg1 isIPv6Address:(BOOL)arg2 videoRTPPort:(id)arg3 audioRTPPort:(id)arg4 ;
-(BOOL)compatibleWithRemoteEndPoint:(id)arg1 ;
@end

