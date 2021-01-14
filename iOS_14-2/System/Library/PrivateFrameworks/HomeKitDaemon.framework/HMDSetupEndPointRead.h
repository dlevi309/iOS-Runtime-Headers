/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDSetupEndPointWrite.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDSetupEndPointRead : HMDSetupEndPointWrite <NSSecureCoding> {

	unsigned long long _responseStatus;
	NSNumber* _videoSSRC;
	NSNumber* _audioSSRC;

}

@property (nonatomic,readonly) unsigned long long responseStatus;              //@synthesize responseStatus=_responseStatus - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * videoSSRC;                      //@synthesize videoSSRC=_videoSSRC - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioSSRC;                      //@synthesize audioSSRC=_audioSSRC - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)responseStatus;
-(NSNumber *)videoSSRC;
-(BOOL)_parseFromTLVData;
-(BOOL)_parseFromTLVDataOnSuccess;
-(BOOL)_parseFromTLVDataOnFailure;
-(NSNumber *)audioSSRC;
-(id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 responseStatus:(unsigned long long)arg5 videoSSRC:(id)arg6 audioSSRC:(id)arg7 ;
@end

