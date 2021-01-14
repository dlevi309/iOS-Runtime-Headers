/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistorySync : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _downloadRecordCount;
	unsigned _uploadRecordCount;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasUploadRecordCount; 
@property (assign,nonatomic) unsigned uploadRecordCount;                //@synthesize uploadRecordCount=_uploadRecordCount - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadRecordCount; 
@property (assign,nonatomic) unsigned downloadRecordCount;              //@synthesize downloadRecordCount=_downloadRecordCount - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setUploadRecordCount:(unsigned)arg1 ;
-(void)setDownloadRecordCount:(unsigned)arg1 ;
-(void)setHasUploadRecordCount:(BOOL)arg1 ;
-(BOOL)hasUploadRecordCount;
-(void)setHasDownloadRecordCount:(BOOL)arg1 ;
-(BOOL)hasDownloadRecordCount;
-(unsigned)uploadRecordCount;
-(unsigned)downloadRecordCount;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

