/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FCCKPRecordIdentifier, FCCKPRecord;

@interface FCCKPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {

	NSString* _etag;
	FCCKPRecordIdentifier* _identifier;
	FCCKPRecord* _record;
	int _type;
	SCD_Struct_FC4 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) FCCKPRecordIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                 //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) FCCKPRecord * record;                            //@synthesize record=_record - In the implementation block
-(FCCKPRecord *)record;
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(NSString *)etag;
-(BOOL)hasIdentifier;
-(void)setRecord:(FCCKPRecord *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(BOOL)hasRecord;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(FCCKPRecordIdentifier *)arg1 ;
-(FCCKPRecordIdentifier *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

