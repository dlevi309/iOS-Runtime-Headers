/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCallHistoryEntitlementRejection : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _pid;
	NSString* _procname;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) unsigned pid;                              //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) BOOL hasProcname; 
@property (nonatomic,retain) NSString * procname;                       //@synthesize procname=_procname - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasPid;
-(unsigned)pid;
-(unsigned long long)timestamp;
-(NSString *)procname;
-(void)setHasPid:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasProcname;
-(void)setProcname:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPid:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

