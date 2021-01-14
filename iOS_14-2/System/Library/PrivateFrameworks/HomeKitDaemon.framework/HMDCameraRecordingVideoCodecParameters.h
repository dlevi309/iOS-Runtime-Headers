/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSNumber;

@interface HMDCameraRecordingVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSArray* _profiles;
	NSArray* _levels;
	NSNumber* _bitRate;
	NSNumber* _iFrameInterval;

}

@property (nonatomic,copy,readonly) NSArray * profiles;                     //@synthesize profiles=_profiles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * levels;                       //@synthesize levels=_levels - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bitRate;                     //@synthesize bitRate=_bitRate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * iFrameInterval;              //@synthesize iFrameInterval=_iFrameInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)profiles;
-(NSArray *)levels;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)bitRate;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(NSNumber *)iFrameInterval;
-(id)initWithProfiles:(id)arg1 levels:(id)arg2 bitRate:(id)arg3 iFrameInterval:(id)arg4 ;
@end

