/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCCKPRecordType *)type;
-(void)setType:(FCCKPRecordType *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)fields;
-(NSString *)etag;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(void)setRecordIdentifier:(FCCKPRecordIdentifier *)arg1 ;
-(BOOL)hasType;
-(BOOL)hasRecordIdentifier;
-(FCCKPRecordIdentifier *)recordIdentifier;
-(NSString *)modifiedByDevice;
-(void)setModifiedByDevice:(NSString *)arg1 ;
-(NSMutableArray *)conflictLoserEtags;
-(void)setConflictLoserEtags:(NSMutableArray *)arg1 ;
-(void)setFields:(NSMutableArray *)arg1 ;
-(void)addFields:(id)arg1 ;
-(unsigned long long)fieldsCount;
-(void)clearFields;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTimeStatistics;
-(FCCKPDateStatistics *)timeStatistics;
-(void)setCreatedBy:(FCCKPIdentifier *)arg1 ;
-(void)setTimeStatistics:(FCCKPDateStatistics *)arg1 ;
-(void)setModifiedBy:(FCCKPIdentifier *)arg1 ;
-(void)addConflictLoserEtags:(id)arg1 ;
-(unsigned long long)conflictLoserEtagsCount;
-(void)clearConflictLoserEtags;
-(id)conflictLoserEtagsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCreatedBy;
-(BOOL)hasModifiedBy;
-(BOOL)hasModifiedByDevice;
-(FCCKPIdentifier *)createdBy;
-(FCCKPIdentifier *)modifiedBy;
@end

