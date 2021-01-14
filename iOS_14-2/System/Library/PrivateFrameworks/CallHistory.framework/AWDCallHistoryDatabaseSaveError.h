/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCallHistoryDatabaseSaveError : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _domain;
	unsigned _error;
	NSString* _table;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) unsigned domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasTable; 
@property (nonatomic,retain) NSString * table;                          //@synthesize table=_table - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)table;
-(unsigned long long)timestamp;
-(BOOL)hasTable;
-(void)setHasError:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(unsigned)arg1 ;
-(void)setError:(unsigned)arg1 ;
-(void)setTable:(NSString *)arg1 ;
-(unsigned)domain;
-(unsigned)error;
-(id)description;
-(BOOL)hasDomain;
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

