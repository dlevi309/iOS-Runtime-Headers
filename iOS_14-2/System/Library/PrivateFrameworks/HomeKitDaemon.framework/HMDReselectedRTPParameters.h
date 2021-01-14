/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDReselectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _maximumBitrate;
	NSNumber* _minimumBitrate;
	NSNumber* _rtcpInterval;

}

@property (nonatomic,copy,readonly) NSNumber * maximumBitrate;              //@synthesize maximumBitrate=_maximumBitrate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * minimumBitrate;              //@synthesize minimumBitrate=_minimumBitrate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rtcpInterval;                //@synthesize rtcpInterval=_rtcpInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(NSNumber *)minimumBitrate;
-(NSNumber *)rtcpInterval;
-(NSNumber *)maximumBitrate;
-(id)initWithMaximumBitrate:(id)arg1 minimumBitrate:(id)arg2 rtcpInterval:(id)arg3 ;
@end

