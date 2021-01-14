/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSArray* _h264Profiles;
	NSArray* _levels;
	NSArray* _packetizationModes;

}

@property (nonatomic,copy,readonly) NSArray * h264Profiles;                    //@synthesize h264Profiles=_h264Profiles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * levels;                          //@synthesize levels=_levels - In the implementation block
@property (nonatomic,copy,readonly) NSArray * packetizationModes;              //@synthesize packetizationModes=_packetizationModes - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)levels;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(NSArray *)h264Profiles;
-(NSArray *)packetizationModes;
-(id)initWithProfiles:(id)arg1 levels:(id)arg2 packetizationModes:(id)arg3 ;
@end

