/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSServerStorageStateMachineCompleted : PBCodable <NSCopying> {

	unsigned long long _linkType;
	unsigned long long _timeTaken;
	unsigned long long _timestamp;
	unsigned long long _totalMessages;
	NSString* _serviceIdentifier;
	BOOL _wasPrimary;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWasPrimary; 
@property (assign,nonatomic) BOOL wasPrimary;                               //@synthesize wasPrimary=_wasPrimary - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIdentifier; 
@property (nonatomic,retain) NSString * serviceIdentifier;                  //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasTimeTaken; 
@property (assign,nonatomic) unsigned long long timeTaken;                  //@synthesize timeTaken=_timeTaken - In the implementation block
@property (assign,nonatomic) BOOL hasTotalMessages; 
@property (assign,nonatomic) unsigned long long totalMessages;              //@synthesize totalMessages=_totalMessages - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned long long linkType;                   //@synthesize linkType=_linkType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)linkType;
-(void)setLinkType:(unsigned long long)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(BOOL)hasServiceIdentifier;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(void)setTimeTaken:(unsigned long long)arg1 ;
-(unsigned long long)timeTaken;
-(void)setWasPrimary:(BOOL)arg1 ;
-(void)setHasWasPrimary:(BOOL)arg1 ;
-(BOOL)hasWasPrimary;
-(void)setHasTimeTaken:(BOOL)arg1 ;
-(BOOL)hasTimeTaken;
-(void)setTotalMessages:(unsigned long long)arg1 ;
-(void)setHasTotalMessages:(BOOL)arg1 ;
-(BOOL)hasTotalMessages;
-(BOOL)wasPrimary;
-(unsigned long long)totalMessages;
@end

