/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPRecord, CKDPDateStatistics;

@interface CKDPRecordSaveResponse : PBCodable <NSCopying> {

	NSString* _etag;
	CKDPRecord* _serverFields;
	CKDPDateStatistics* _timeStatistics;

}

@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                  //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeStatistics; 
@property (nonatomic,retain) CKDPDateStatistics * timeStatistics;              //@synthesize timeStatistics=_timeStatistics - In the implementation block
@property (nonatomic,readonly) BOOL hasServerFields; 
@property (nonatomic,retain) CKDPRecord * serverFields;                        //@synthesize serverFields=_serverFields - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTimeStatistics:(CKDPDateStatistics *)arg1 ;
-(unsigned long long)hash;
-(CKDPDateStatistics *)timeStatistics;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimeStatistics;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setServerFields:(CKDPRecord *)arg1 ;
-(BOOL)hasServerFields;
-(CKDPRecord *)serverFields;
@end

