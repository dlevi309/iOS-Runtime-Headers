/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDSelectedRTPParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)maxMTU;
-(NSNumber *)payloadType;
-(id)tlvData;
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

