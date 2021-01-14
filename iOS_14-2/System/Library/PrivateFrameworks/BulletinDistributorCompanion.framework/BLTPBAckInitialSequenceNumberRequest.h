/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(unsigned)sessionState;
-(void)setSessionState:(unsigned)arg1 ;
-(BOOL)hasSessionState;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionIdentifier:(NSData *)arg1 ;
-(NSData *)sessionIdentifier;
-(id)description;
-(BOOL)assert;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSessionState:(BOOL)arg1 ;
-(void)setAssert:(BOOL)arg1 ;
-(void)setHasAssert:(BOOL)arg1 ;
-(BOOL)hasAssert;
@end

