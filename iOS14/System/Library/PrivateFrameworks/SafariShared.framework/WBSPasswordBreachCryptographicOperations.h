/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class WBSPasswordBreachConfiguration;

@interface WBSPasswordBreachCryptographicOperations : NSObject {

	WBSPasswordBreachConfiguration* _configuration;
	cc_blinding_keys_ctx* _blindingKeys;

}
+(BOOL)isValidScryptHashWorkFactor:(unsigned long long)arg1 blockSizeR:(unsigned long long)arg2 parallelismFactorP:(unsigned long long)arg3 ;
-(id)unblindHash:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)_blindPasswordHash:(id)arg1 ;
-(id)_bucketIdentifierWithBitCount:(unsigned long long)arg1 ofData:(id)arg2 ;
-(id)_encodePasswordForLowFrequencyBucket:(id)arg1 withHashSmoothingBits:(unsigned char)arg2 ;
-(CCECCryptorRef)_hashToCurve:(id)arg1 ;
-(id)_exportKeyFromCryptor:(CCECCryptorRef)arg1 ;
-(id)_exportHashToCurve:(id)arg1 ;
-(id)generateFakeEncodedPasswordForLowFrequencyBucket;
-(id)generateFakeEncodedPasswordForHighFrequencyBucket;
-(id)encodePasswordForLowFrequencyBucket:(id)arg1 ;
-(id)encodePasswordForHighFrequencyBucket:(id)arg1 ;
-(void)dealloc;
@end

