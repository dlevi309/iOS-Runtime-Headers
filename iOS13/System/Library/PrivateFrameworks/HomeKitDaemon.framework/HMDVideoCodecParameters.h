/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDVideoCodecParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSArray* _h264Profiles;
	NSArray* _levels;
	NSArray* _packetizationModes;

}

@property (nonatomic,copy,readonly) NSArray * h264Profiles;                    //@synthesize h264Profiles=_h264Profiles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * levels;                          //@synthesize levels=_levels - In the implementation block
@property (nonatomic,copy,readonly) NSArray * packetizationModes;              //@synthesize packetizationModes=_packetizationModes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)levels;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSArray *)h264Profiles;
-(NSArray *)packetizationModes;
-(id)initWithProfiles:(id)arg1 levels:(id)arg2 packetizationModes:(id)arg3 ;
@end

