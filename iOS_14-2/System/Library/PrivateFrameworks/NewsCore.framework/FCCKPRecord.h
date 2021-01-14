/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, FCCKPIdentifier, NSString, FCCKPRecordIdentifier, FCCKPDateStatistics, FCCKPRecordType;

@interface FCCKPRecord : PBCodable <NSCopying> {

	NSMutableArray* _conflictLoserEtags;
	FCCKPIdentifier* _createdBy;
	NSString* _etag;
	NSMutableArray* _fields;
	FCCKPIdentifier* _modifiedBy;
	NSString* _modifiedByDevice;
	FCCKPRecordIdentifier* _recordIdentifier;
	FCCKPDateStatistics* _timeStatistics;
	FCCKPRecordType* _type;

}

@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                       //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) FCCKPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) FCCKPRecordType * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedBy; 
@property (nonatomic,retain) FCCKPIdentifier * createdBy;                           //@synthesize createdBy=_createdBy - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeStatistics; 
@property (nonatomic,retain) FCCKPDateStatistics * timeStatistics;                  //@synthesize timeStatistics=_timeStatistics - In the implementation block
@property (nonatomic,retain) NSMutableArray * fields;                               //@synthesize fields=_fields - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedBy; 
@property (nonatomic,retain) FCCKPIdentifier * modifiedBy;                          //@synthesize modifiedBy=_modifiedBy - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictLoserEtags;                   //@synthesize conflictLoserEtags=_conflictLoserEtags - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedByDevice; 
@property (nonatomic,retain) NSString * modifiedByDevice;                           //@synthesize modifiedByDevice=_modifiedByDevice - In the implementation block
-(id)dictionaryRepresentation;
-(void)setModifiedBy:(FCCKPIdentifier *)arg1 ;
-(void)setFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fields;
-(FCCKPRecordIdentifier *)recordIdentifier;
-(void)addFields:(id)arg1 ;
-(NSString *)etag;
-(BOOL)hasModifiedBy;
-(void)clearConflictLoserEtags;
-(void)addConflictLoserEtags:(id)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasModifiedByDevice;
-(void)setType:(FCCKPRecordType *)arg1 ;
-(BOOL)hasRecordIdentifier;
-(NSMutableArray *)conflictLoserEtags;
-(void)setConflictLoserEtags:(NSMutableArray *)arg1 ;
-(unsigned long long)conflictLoserEtagsCount;
-(id)description;
-(unsigned long long)fieldsCount;
-(void)setTimeStatistics:(FCCKPDateStatistics *)arg1 ;
-(void)clearFields;
-(FCCKPRecordType *)type;
-(id)conflictLoserEtagsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(FCCKPDateStatistics *)timeStatistics;
-(BOOL)hasCreatedBy;
-(NSString *)modifiedByDevice;
-(BOOL)readFrom:(id)arg1 ;
-(FCCKPIdentifier *)createdBy;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimeStatistics;
-(FCCKPIdentifier *)modifiedBy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCreatedBy:(FCCKPIdentifier *)arg1 ;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setRecordIdentifier:(FCCKPRecordIdentifier *)arg1 ;
-(void)setModifiedByDevice:(NSString *)arg1 ;
@end

