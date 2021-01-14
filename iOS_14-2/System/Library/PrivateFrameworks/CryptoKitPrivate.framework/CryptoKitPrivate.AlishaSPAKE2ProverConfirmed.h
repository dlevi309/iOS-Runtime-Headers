/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CryptoKitPrivate.framework/CryptoKitPrivate
*/


@class NSData;

@interface CryptoKitPrivate.AlishaSPAKE2ProverConfirmed : NSObject {

	 alishaKey;
	 KEnc;
	 KMac;
	 KRMac;
	 SymmetricLTS;
	 Kble_intro;
	 Kble_oob_master;
	 M2;

}

@property (readonly,nonatomic) NSData * alishaKey; 
@property (readonly,nonatomic) NSData * KEnc; 
@property (readonly,nonatomic) NSData * KMac; 
@property (readonly,nonatomic) NSData * KRMac; 
@property (readonly,nonatomic) NSData * SymmetricLTS; 
@property (readonly,nonatomic) NSData * Kble_intro; 
@property (readonly,nonatomic) NSData * Kble_oob_master; 
@property (readonly,nonatomic) NSData * M2; 
-(NSData *)M2;
-(id)init;
-(NSData *)KEnc;
-(NSData *)KMac;
-(NSData *)KRMac;
-(NSData *)alishaKey;
-(NSData *)SymmetricLTS;
-(NSData *)Kble_intro;
-(NSData *)Kble_oob_master;
@end

