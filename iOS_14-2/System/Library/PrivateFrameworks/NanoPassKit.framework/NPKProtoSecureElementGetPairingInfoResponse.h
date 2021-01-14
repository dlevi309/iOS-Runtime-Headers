/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoSecureElementGetPairingInfoResponse : PBCodable <NSCopying> {

	NSData* _challengeResponse;
	NSData* _cryptogram;
	BOOL _authRandomSet;
	BOOL _pending;
	BOOL _success;
	SCD_Struct_NP3 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                             //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                             //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasCryptogram; 
@property (nonatomic,retain) NSData * cryptogram;                      //@synthesize cryptogram=_cryptogram - In the implementation block
@property (nonatomic,readonly) BOOL hasChallengeResponse; 
@property (nonatomic,retain) NSData * challengeResponse;               //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (assign,nonatomic) BOOL hasAuthRandomSet; 
@property (assign,nonatomic) BOOL authRandomSet;                       //@synthesize authRandomSet=_authRandomSet - In the implementation block
-(BOOL)success;
-(id)dictionaryRepresentation;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(id)description;
-(BOOL)pending;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)challengeResponse;
-(void)setChallengeResponse:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)cryptogram;
-(void)setCryptogram:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(BOOL)hasCryptogram;
-(BOOL)hasChallengeResponse;
-(void)setAuthRandomSet:(BOOL)arg1 ;
-(void)setHasAuthRandomSet:(BOOL)arg1 ;
-(BOOL)hasAuthRandomSet;
-(BOOL)authRandomSet;
@end

