/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDAudioSampleRate : HMDNumberParser <NSSecureCoding> {

	unsigned long long _sampleRate;

}

@property (nonatomic,readonly) unsigned long long sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithRates:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)sampleRate;
-(id)initWithTLVData:(id)arg1 ;
-(id)initWithSampleRate:(unsigned long long)arg1 ;
@end

