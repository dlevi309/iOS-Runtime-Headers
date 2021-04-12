/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRecord;

@interface FCCKPOplockFailure : PBCodable <NSCopying> {

	FCCKPRecord* _recordForOplockFailure;

}

@property (nonatomic,readonly) BOOL hasRecordForOplockFailure; 
@property (nonatomic,retain) FCCKPRecord * recordForOplockFailure;              //@synthesize recordForOplockFailure=_recordForOplockFailure - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRecordForOplockFailure:(FCCKPRecord *)arg1 ;
-(BOOL)hasRecordForOplockFailure;
-(FCCKPRecord *)recordForOplockFailure;
@end

