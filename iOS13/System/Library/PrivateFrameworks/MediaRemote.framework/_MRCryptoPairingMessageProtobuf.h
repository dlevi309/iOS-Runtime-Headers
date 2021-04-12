/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying> {

	NSData* _pairingData;
	int _state;
	int _status;
	BOOL _isRetrying;
	BOOL _isUsingSystemPairing;
	SCD_Struct_MR15 _has;

}

@property (nonatomic,readonly) BOOL hasPairingData; 
@property (nonatomic,retain) NSData * pairingData;                      //@synthesize pairingData=_pairingData - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasIsRetrying; 
@property (assign,nonatomic) BOOL isRetrying;                           //@synthesize isRetrying=_isRetrying - In the implementation block
@property (assign,nonatomic) BOOL hasIsUsingSystemPairing; 
@property (assign,nonatomic) BOOL isUsingSystemPairing;                 //@synthesize isUsingSystemPairing=_isUsingSystemPairing - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                 //@synthesize state=_state - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)state;
-(int)status;
-(void)setState:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasState;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)isUsingSystemPairing;
-(void)setPairingData:(NSData *)arg1 ;
-(BOOL)hasPairingData;
-(void)setIsRetrying:(BOOL)arg1 ;
-(void)setHasIsRetrying:(BOOL)arg1 ;
-(BOOL)hasIsRetrying;
-(void)setIsUsingSystemPairing:(BOOL)arg1 ;
-(void)setHasIsUsingSystemPairing:(BOOL)arg1 ;
-(BOOL)hasIsUsingSystemPairing;
-(NSData *)pairingData;
-(BOOL)isRetrying;
@end

