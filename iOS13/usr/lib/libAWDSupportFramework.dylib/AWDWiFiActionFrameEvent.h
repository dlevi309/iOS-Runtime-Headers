/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWiFiActionFrameEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _actionCode;
	unsigned _btmAbridged;
	unsigned _btmBssTerminationIncluded;
	unsigned _btmDisassociationImminent;
	unsigned _btmDisassociationTimeout;
	unsigned _btmEssTerminationIncluded;
	unsigned _btmHasPreferredCandidateList;
	unsigned _btmTerminationDuration;
	unsigned _btmValidityInterval;
	unsigned _categoryCode;
	unsigned _dialogToken;
	unsigned _environmentType;
	unsigned _frameType;
	NSData* _oui;
	unsigned _status;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                                       //@synthesize oui=_oui - In the implementation block
@property (assign,nonatomic) BOOL hasEnvironmentType; 
@property (assign,nonatomic) unsigned environmentType;                           //@synthesize environmentType=_environmentType - In the implementation block
@property (assign,nonatomic) BOOL hasCategoryCode; 
@property (assign,nonatomic) unsigned categoryCode;                              //@synthesize categoryCode=_categoryCode - In the implementation block
@property (assign,nonatomic) BOOL hasActionCode; 
@property (assign,nonatomic) unsigned actionCode;                                //@synthesize actionCode=_actionCode - In the implementation block
@property (assign,nonatomic) BOOL hasDialogToken; 
@property (assign,nonatomic) unsigned dialogToken;                               //@synthesize dialogToken=_dialogToken - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasFrameType; 
@property (assign,nonatomic) unsigned frameType;                                 //@synthesize frameType=_frameType - In the implementation block
@property (assign,nonatomic) BOOL hasBtmDisassociationTimeout; 
@property (assign,nonatomic) unsigned btmDisassociationTimeout;                  //@synthesize btmDisassociationTimeout=_btmDisassociationTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasBtmValidityInterval; 
@property (assign,nonatomic) unsigned btmValidityInterval;                       //@synthesize btmValidityInterval=_btmValidityInterval - In the implementation block
@property (assign,nonatomic) BOOL hasBtmTerminationDuration; 
@property (assign,nonatomic) unsigned btmTerminationDuration;                    //@synthesize btmTerminationDuration=_btmTerminationDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBtmHasPreferredCandidateList; 
@property (assign,nonatomic) unsigned btmHasPreferredCandidateList;              //@synthesize btmHasPreferredCandidateList=_btmHasPreferredCandidateList - In the implementation block
@property (assign,nonatomic) BOOL hasBtmAbridged; 
@property (assign,nonatomic) unsigned btmAbridged;                               //@synthesize btmAbridged=_btmAbridged - In the implementation block
@property (assign,nonatomic) BOOL hasBtmDisassociationImminent; 
@property (assign,nonatomic) unsigned btmDisassociationImminent;                 //@synthesize btmDisassociationImminent=_btmDisassociationImminent - In the implementation block
@property (assign,nonatomic) BOOL hasBtmBssTerminationIncluded; 
@property (assign,nonatomic) unsigned btmBssTerminationIncluded;                 //@synthesize btmBssTerminationIncluded=_btmBssTerminationIncluded - In the implementation block
@property (assign,nonatomic) BOOL hasBtmEssTerminationIncluded; 
@property (assign,nonatomic) unsigned btmEssTerminationIncluded;                 //@synthesize btmEssTerminationIncluded=_btmEssTerminationIncluded - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)status;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setEnvironmentType:(unsigned)arg1 ;
-(unsigned)environmentType;
-(unsigned)categoryCode;
-(void)setCategoryCode:(unsigned)arg1 ;
-(void)setFrameType:(unsigned)arg1 ;
-(unsigned)frameType;
-(void)setOui:(NSData *)arg1 ;
-(BOOL)hasOui;
-(void)setHasEnvironmentType:(BOOL)arg1 ;
-(BOOL)hasEnvironmentType;
-(void)setHasCategoryCode:(BOOL)arg1 ;
-(BOOL)hasCategoryCode;
-(void)setActionCode:(unsigned)arg1 ;
-(void)setHasActionCode:(BOOL)arg1 ;
-(BOOL)hasActionCode;
-(void)setDialogToken:(unsigned)arg1 ;
-(void)setHasDialogToken:(BOOL)arg1 ;
-(BOOL)hasDialogToken;
-(void)setHasFrameType:(BOOL)arg1 ;
-(BOOL)hasFrameType;
-(void)setBtmDisassociationTimeout:(unsigned)arg1 ;
-(void)setHasBtmDisassociationTimeout:(BOOL)arg1 ;
-(BOOL)hasBtmDisassociationTimeout;
-(void)setBtmValidityInterval:(unsigned)arg1 ;
-(void)setHasBtmValidityInterval:(BOOL)arg1 ;
-(BOOL)hasBtmValidityInterval;
-(void)setBtmTerminationDuration:(unsigned)arg1 ;
-(void)setHasBtmTerminationDuration:(BOOL)arg1 ;
-(BOOL)hasBtmTerminationDuration;
-(void)setBtmHasPreferredCandidateList:(unsigned)arg1 ;
-(void)setHasBtmHasPreferredCandidateList:(BOOL)arg1 ;
-(BOOL)hasBtmHasPreferredCandidateList;
-(void)setBtmAbridged:(unsigned)arg1 ;
-(void)setHasBtmAbridged:(BOOL)arg1 ;
-(BOOL)hasBtmAbridged;
-(void)setBtmDisassociationImminent:(unsigned)arg1 ;
-(void)setHasBtmDisassociationImminent:(BOOL)arg1 ;
-(BOOL)hasBtmDisassociationImminent;
-(void)setBtmBssTerminationIncluded:(unsigned)arg1 ;
-(void)setHasBtmBssTerminationIncluded:(BOOL)arg1 ;
-(BOOL)hasBtmBssTerminationIncluded;
-(void)setBtmEssTerminationIncluded:(unsigned)arg1 ;
-(void)setHasBtmEssTerminationIncluded:(BOOL)arg1 ;
-(BOOL)hasBtmEssTerminationIncluded;
-(NSData *)oui;
-(unsigned)actionCode;
-(unsigned)dialogToken;
-(unsigned)btmDisassociationTimeout;
-(unsigned)btmValidityInterval;
-(unsigned)btmTerminationDuration;
-(unsigned)btmHasPreferredCandidateList;
-(unsigned)btmAbridged;
-(unsigned)btmDisassociationImminent;
-(unsigned)btmBssTerminationIncluded;
-(unsigned)btmEssTerminationIncluded;
@end

