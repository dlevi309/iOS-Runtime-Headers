/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitProcessMemoryPressureEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _dataSyncState;
	NSString* _processMemoryState;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasProcessMemoryState; 
@property (nonatomic,retain) NSString * processMemoryState;              //@synthesize processMemoryState=_processMemoryState - In the implementation block
@property (nonatomic,readonly) BOOL hasDataSyncState; 
@property (nonatomic,retain) NSString * dataSyncState;                   //@synthesize dataSyncState=_dataSyncState - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)dataSyncState;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDataSyncState:(NSString *)arg1 ;
-(BOOL)hasDataSyncState;
-(NSString *)processMemoryState;
-(void)setProcessMemoryState:(NSString *)arg1 ;
-(BOOL)hasProcessMemoryState;
@end

