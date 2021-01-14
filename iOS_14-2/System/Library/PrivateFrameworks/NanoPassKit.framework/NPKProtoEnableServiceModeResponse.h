/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoEnableServiceModeResponse : PBCodable <NSCopying> {

	BOOL _pending;
	BOOL _unlockRequired;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                        //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) BOOL hasUnlockRequired; 
@property (assign,nonatomic) BOOL unlockRequired;                 //@synthesize unlockRequired=_unlockRequired - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)pending;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setUnlockRequired:(BOOL)arg1 ;
-(void)setHasUnlockRequired:(BOOL)arg1 ;
-(BOOL)hasUnlockRequired;
-(BOOL)unlockRequired;
@end

