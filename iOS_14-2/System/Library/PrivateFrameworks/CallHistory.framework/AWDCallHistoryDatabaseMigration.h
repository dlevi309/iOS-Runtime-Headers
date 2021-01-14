/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistoryDatabaseMigration : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _domain;
	unsigned _error;
	unsigned _newSchema;
	unsigned _oldSchema;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOldSchema; 
@property (assign,nonatomic) unsigned oldSchema;                        //@synthesize oldSchema=_oldSchema - In the implementation block
@property (assign,nonatomic) BOOL hasNewSchema; 
@property (assign,nonatomic) unsigned newSchema;                        //@synthesize newSchema=_newSchema - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) unsigned domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setHasError:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(unsigned)arg1 ;
-(void)setError:(unsigned)arg1 ;
-(unsigned)domain;
-(unsigned)error;
-(unsigned)oldSchema;
-(unsigned)newSchema;
-(id)description;
-(BOOL)hasDomain;
-(void)setOldSchema:(unsigned)arg1 ;
-(void)setNewSchema:(unsigned)arg1 ;
-(void)setHasOldSchema:(BOOL)arg1 ;
-(BOOL)hasOldSchema;
-(void)setHasNewSchema:(BOOL)arg1 ;
-(BOOL)hasNewSchema;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(void)setHasDomain:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

