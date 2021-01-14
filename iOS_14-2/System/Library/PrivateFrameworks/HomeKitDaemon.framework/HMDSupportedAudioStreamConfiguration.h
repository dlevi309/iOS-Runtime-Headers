/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDictionary;

@interface HMDSupportedAudioStreamConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _supportsComfortNoise;
	NSDictionary* _codecConfigurations;

}

@property (nonatomic,copy,readonly) NSNumber * supportsComfortNoise;                 //@synthesize supportsComfortNoise=_supportsComfortNoise - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * codecConfigurations;              //@synthesize codecConfigurations=_codecConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSDictionary *)codecConfigurations;
-(BOOL)_parseFromTLVData;
-(NSNumber *)supportsComfortNoise;
-(id)initWithComfortNoise:(id)arg1 CodecConfigurations:(id)arg2 ;
@end

