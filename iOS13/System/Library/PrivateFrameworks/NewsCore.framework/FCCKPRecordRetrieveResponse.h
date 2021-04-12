/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRecord;

@interface FCCKPRecordRetrieveResponse : PBCodable <NSCopying> {

	FCCKPRecord* _record;
	BOOL _clientVersionETagMatch;
	SCD_Struct_FC1 _has;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) FCCKPRecord * record;                        //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) BOOL hasClientVersionETagMatch; 
@property (assign,nonatomic) BOOL clientVersionETagMatch;                 //@synthesize clientVersionETagMatch=_clientVersionETagMatch - In the implementation block
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
-(FCCKPRecord *)record;
-(void)setRecord:(FCCKPRecord *)arg1 ;
-(BOOL)hasRecord;
-(void)setClientVersionETagMatch:(BOOL)arg1 ;
-(void)setHasClientVersionETagMatch:(BOOL)arg1 ;
-(BOOL)hasClientVersionETagMatch;
-(BOOL)clientVersionETagMatch;
@end

