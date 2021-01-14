/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDSelectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _payloadType;
	NSNumber* _synchronizationSource;
	NSNumber* _maximumBitrate;
	NSNumber* _minimumBitrate;
	NSNumber* _rtcpInterval;
	NSNumber* _maxMTU;
	NSNumber* _comfortNoisePayloadType;

}

@property (nonatomic,copy,readonly) NSNumber * payloadType;                          //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,retain) NSNumber * synchronizationSource;                       //@synthesize synchronizationSource=_synchronizationSource - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * maximumBitrate;                       //@synthesize maximumBitrate=_maximumBitrate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * minimumBitrate;                       //@synthesize minimumBitrate=_minimumBitrate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rtcpInterval;                         //@synthesize rtcpInterval=_rtcpInterval - In the implementation block
@property (nonatomic,copy) NSNumber * maxMTU;                                        //@synthesize maxMTU=_maxMTU - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * comfortNoisePayloadType;              //@synthesize comfortNoisePayloadType=_comfortNoisePayloadType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)maxMTU;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)payloadType;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(NSNumber *)synchronizationSource;
-(NSNumber *)minimumBitrate;
-(NSNumber *)rtcpInterval;
-(NSNumber *)comfortNoisePayloadType;
-(NSNumber *)maximumBitrate;
-(id)initWithPayloadType:(id)arg1 maximumBitrate:(id)arg2 minimumBitrate:(id)arg3 rtcpInterval:(id)arg4 maxMTU:(id)arg5 comfortNoisePayloadType:(id)arg6 ;
-(void)setSynchronizationSource:(NSNumber *)arg1 ;
-(void)setMaxMTU:(NSNumber *)arg1 ;
@end

