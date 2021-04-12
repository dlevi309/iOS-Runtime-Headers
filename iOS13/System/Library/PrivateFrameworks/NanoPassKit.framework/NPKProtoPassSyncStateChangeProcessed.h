/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoPassSyncStateChangeProcessed : PBCodable <NSCopying> {

	NSData* _acceptedChangeUUID;
	BOOL _changeAccepted;
	BOOL _fullPassRequired;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,retain) NSData * acceptedChangeUUID;              //@synthesize acceptedChangeUUID=_acceptedChangeUUID - In the implementation block
@property (assign,nonatomic) BOOL hasChangeAccepted; 
@property (assign,nonatomic) BOOL changeAccepted;                      //@synthesize changeAccepted=_changeAccepted - In the implementation block
@property (assign,nonatomic) BOOL hasFullPassRequired; 
@property (assign,nonatomic) BOOL fullPassRequired;                    //@synthesize fullPassRequired=_fullPassRequired - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)acceptedChangeUUID;
-(BOOL)hasChangeAccepted;
-(BOOL)changeAccepted;
-(BOOL)fullPassRequired;
-(void)setAcceptedChangeUUID:(NSData *)arg1 ;
-(void)setChangeAccepted:(BOOL)arg1 ;
-(void)setFullPassRequired:(BOOL)arg1 ;
-(void)setHasChangeAccepted:(BOOL)arg1 ;
-(void)setHasFullPassRequired:(BOOL)arg1 ;
-(BOOL)hasFullPassRequired;
@end

