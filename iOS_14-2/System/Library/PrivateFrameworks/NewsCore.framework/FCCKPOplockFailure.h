/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setRecordForOplockFailure:(FCCKPRecord *)arg1 ;
-(BOOL)hasRecordForOplockFailure;
-(FCCKPRecord *)recordForOplockFailure;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

