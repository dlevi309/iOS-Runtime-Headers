/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
*/

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OTCDPRecoveryInformation : PBCodable <NSCopying> {

	NSString* _recoveryKey;
	NSString* _recoverySecret;
	BOOL _containsIcdpData;
	BOOL _silentRecoveryAttempt;
	BOOL _useCachedSecret;
	BOOL _usePreviouslyCachedRecoveryKey;
	BOOL _usesMultipleIcsc;
	SCD_Struct_OT2 _has;

}

@property (nonatomic,readonly) BOOL hasRecoverySecret; 
@property (nonatomic,retain) NSString * recoverySecret;                           //@synthesize recoverySecret=_recoverySecret - In the implementation block
@property (assign,nonatomic) BOOL hasUseCachedSecret; 
@property (assign,nonatomic) BOOL useCachedSecret;                                //@synthesize useCachedSecret=_useCachedSecret - In the implementation block
@property (nonatomic,readonly) BOOL hasRecoveryKey; 
@property (nonatomic,retain) NSString * recoveryKey;                              //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (assign,nonatomic) BOOL hasUsePreviouslyCachedRecoveryKey; 
@property (assign,nonatomic) BOOL usePreviouslyCachedRecoveryKey;                 //@synthesize usePreviouslyCachedRecoveryKey=_usePreviouslyCachedRecoveryKey - In the implementation block
@property (assign,nonatomic) BOOL hasSilentRecoveryAttempt; 
@property (assign,nonatomic) BOOL silentRecoveryAttempt;                          //@synthesize silentRecoveryAttempt=_silentRecoveryAttempt - In the implementation block
@property (assign,nonatomic) BOOL hasContainsIcdpData; 
@property (assign,nonatomic) BOOL containsIcdpData;                               //@synthesize containsIcdpData=_containsIcdpData - In the implementation block
@property (assign,nonatomic) BOOL hasUsesMultipleIcsc; 
@property (assign,nonatomic) BOOL usesMultipleIcsc;                               //@synthesize usesMultipleIcsc=_usesMultipleIcsc - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasRecoverySecret;
-(void)setUseCachedSecret:(BOOL)arg1 ;
-(void)setHasUseCachedSecret:(BOOL)arg1 ;
-(BOOL)hasUseCachedSecret;
-(BOOL)hasRecoveryKey;
-(void)setUsePreviouslyCachedRecoveryKey:(BOOL)arg1 ;
-(void)setHasUsePreviouslyCachedRecoveryKey:(BOOL)arg1 ;
-(BOOL)hasUsePreviouslyCachedRecoveryKey;
-(void)setSilentRecoveryAttempt:(BOOL)arg1 ;
-(void)setHasSilentRecoveryAttempt:(BOOL)arg1 ;
-(BOOL)hasSilentRecoveryAttempt;
-(void)setContainsIcdpData:(BOOL)arg1 ;
-(void)setHasContainsIcdpData:(BOOL)arg1 ;
-(BOOL)hasContainsIcdpData;
-(void)setUsesMultipleIcsc:(BOOL)arg1 ;
-(void)setHasUsesMultipleIcsc:(BOOL)arg1 ;
-(BOOL)hasUsesMultipleIcsc;
-(NSString *)recoverySecret;
-(void)setRecoverySecret:(NSString *)arg1 ;
-(BOOL)useCachedSecret;
-(NSString *)recoveryKey;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(BOOL)usePreviouslyCachedRecoveryKey;
-(BOOL)silentRecoveryAttempt;
-(BOOL)containsIcdpData;
-(BOOL)usesMultipleIcsc;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

