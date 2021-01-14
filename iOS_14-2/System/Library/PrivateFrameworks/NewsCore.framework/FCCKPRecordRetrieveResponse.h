/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRecord;

@interface FCCKPRecordRetrieveResponse : PBCodable <NSCopying> {

	FCCKPRecord* _record;
	BOOL _clientVersionETagMatch;
	SCD_Struct_FC4 _has;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) FCCKPRecord * record;                        //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) BOOL hasClientVersionETagMatch; 
@property (assign,nonatomic) BOOL clientVersionETagMatch;                 //@synthesize clientVersionETagMatch=_clientVersionETagMatch - In the implementation block
-(FCCKPRecord *)record;
-(id)dictionaryRepresentation;
-(BOOL)clientVersionETagMatch;
-(void)setRecord:(FCCKPRecord *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setClientVersionETagMatch:(BOOL)arg1 ;
-(void)setHasClientVersionETagMatch:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasRecord;
-(BOOL)hasClientVersionETagMatch;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

