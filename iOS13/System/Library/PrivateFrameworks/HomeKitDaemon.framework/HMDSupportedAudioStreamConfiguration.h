/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDictionary;

@interface HMDSupportedAudioStreamConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSNumber* _supportsComfortNoise;
	NSDictionary* _codecConfigurations;

}

@property (nonatomic,copy,readonly) NSNumber * supportsComfortNoise;                 //@synthesize supportsComfortNoise=_supportsComfortNoise - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * codecConfigurations;              //@synthesize codecConfigurations=_codecConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSDictionary *)codecConfigurations;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSNumber *)supportsComfortNoise;
-(id)initWithComfortNoise:(id)arg1 CodecConfigurations:(id)arg2 ;
@end

