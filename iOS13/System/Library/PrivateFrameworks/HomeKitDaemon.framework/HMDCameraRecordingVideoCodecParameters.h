/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSNumber;

@interface HMDCameraRecordingVideoCodecParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)levels;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSArray *)profiles;
-(NSNumber *)bitRate;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSNumber *)iFrameInterval;
-(id)initWithProfiles:(id)arg1 levels:(id)arg2 bitRate:(id)arg3 iFrameInterval:(id)arg4 ;
@end

