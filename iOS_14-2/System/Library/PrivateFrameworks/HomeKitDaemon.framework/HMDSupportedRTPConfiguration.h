/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDSupportedRTPConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSArray* _srtpCryptoSuites;

}

@property (nonatomic,copy,readonly) NSArray * srtpCryptoSuites;              //@synthesize srtpCryptoSuites=_srtpCryptoSuites - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(NSArray *)srtpCryptoSuites;
-(id)initWithCryptoSuites:(id)arg1 ;
@end

