/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDSupportedRTPConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSArray* _srtpCryptoSuites;

}

@property (nonatomic,copy,readonly) NSArray * srtpCryptoSuites;              //@synthesize srtpCryptoSuites=_srtpCryptoSuites - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSArray *)srtpCryptoSuites;
-(id)initWithCryptoSuites:(id)arg1 ;
@end

