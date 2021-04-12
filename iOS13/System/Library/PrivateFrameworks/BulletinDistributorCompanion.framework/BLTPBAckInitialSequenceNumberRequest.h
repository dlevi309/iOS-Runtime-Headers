/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BLTPBAckInitialSequenceNumberRequest : PBRequest <NSCopying> {

	NSData* _sessionIdentifier;
	unsigned _sessionState;
	BOOL _assert;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasAssert; 
@property (assign,nonatomic) BOOL assert;                              //@synthesize assert=_assert - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSData * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSessionState; 
@property (assign,nonatomic) unsigned sessionState;                    //@synthesize sessionState=_sessionState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)sessionState;
-(void)setSessionState:(unsigned)arg1 ;
-(NSData *)sessionIdentifier;
-(void)setSessionIdentifier:(NSData *)arg1 ;
-(BOOL)hasSessionState;
-(BOOL)hasSessionIdentifier;
-(void)setHasSessionState:(BOOL)arg1 ;
-(void)setAssert:(BOOL)arg1 ;
-(void)setHasAssert:(BOOL)arg1 ;
-(BOOL)hasAssert;
-(BOOL)assert;
@end

