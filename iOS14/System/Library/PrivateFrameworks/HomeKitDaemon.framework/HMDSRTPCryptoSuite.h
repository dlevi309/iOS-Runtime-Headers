/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDSRTPCryptoSuite : HAPNumberParser <NSSecureCoding> {

	unsigned long long _srtpCryptoSuite;

}

@property (nonatomic,readonly) unsigned long long srtpCryptoSuite;              //@synthesize srtpCryptoSuite=_srtpCryptoSuite - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithSuites:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTLVData:(id)arg1 ;
-(unsigned long long)srtpCryptoSuite;
-(id)initWithCryptoSuite:(unsigned long long)arg1 ;
@end

