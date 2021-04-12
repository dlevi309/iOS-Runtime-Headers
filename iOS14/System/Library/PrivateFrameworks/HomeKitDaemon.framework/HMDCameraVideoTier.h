/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoResolution, NSNumber;

@interface HMDCameraVideoTier : HMFObject <NSSecureCoding> {

	HMDVideoResolution* _videoResolution;
	NSNumber* _maxBitRate;
	NSNumber* _minBitRate;
	NSNumber* _rtcpInterval;
	NSNumber* _framerate;

}

@property (nonatomic,readonly) HMDVideoResolution * videoResolution;              //@synthesize videoResolution=_videoResolution - In the implementation block
@property (nonatomic,readonly) NSNumber * maxBitRate;                             //@synthesize maxBitRate=_maxBitRate - In the implementation block
@property (nonatomic,readonly) NSNumber * minBitRate;                             //@synthesize minBitRate=_minBitRate - In the implementation block
@property (nonatomic,readonly) NSNumber * rtcpInterval;                           //@synthesize rtcpInterval=_rtcpInterval - In the implementation block
@property (nonatomic,retain) NSNumber * framerate;                                //@synthesize framerate=_framerate - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDVideoResolution *)videoResolution;
-(void)setFramerate:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)framerate;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)rtcpInterval;
-(id)initWithVideoResolution:(id)arg1 framerate:(id)arg2 minBitRate:(id)arg3 maxBitRate:(id)arg4 rtcpInterval:(id)arg5 ;
-(NSNumber *)maxBitRate;
-(NSNumber *)minBitRate;
@end

