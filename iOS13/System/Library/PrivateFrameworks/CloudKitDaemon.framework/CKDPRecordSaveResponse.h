/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(BOOL)hasTimeStatistics;
-(CKDPDateStatistics *)timeStatistics;
-(void)setTimeStatistics:(CKDPDateStatistics *)arg1 ;
-(void)setServerFields:(CKDPRecord *)arg1 ;
-(BOOL)hasServerFields;
-(CKDPRecord *)serverFields;
@end

