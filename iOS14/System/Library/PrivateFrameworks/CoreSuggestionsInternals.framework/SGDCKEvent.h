/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SGDCKInteractionInfo, NSMutableArray, NSData, SGDCKTimeRange;

@interface SGDCKEvent : PBCodable <NSCopying> {

	double _creationTimestamp;
	double _lastModifiedTimestamp;
	long long _parentEntityType;
	int _categoryType;
	NSString* _content;
	NSString* _domain;
	NSString* _extraKey;
	NSString* _groupId;
	SGDCKInteractionInfo* _interactionInfo;
	NSMutableArray* _locations;
	NSData* _metadata;
	NSData* _schemaOrg;
	NSString* _sourceKey;
	NSString* _templateName;
	NSString* _title;
	SGDCKTimeRange* _when;
	BOOL _allDay;
	BOOL _cancelled;
	SCD_Struct_SG6 _has;

}

@property (nonatomic,readonly) BOOL hasGroupId; 
@property (nonatomic,retain) NSString * groupId;                                  //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceKey; 
@property (nonatomic,retain) NSString * sourceKey;                                //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) NSString * content;                                  //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL hasCreationTimestamp; 
@property (assign,nonatomic) double creationTimestamp;                            //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLastModifiedTimestamp; 
@property (assign,nonatomic) double lastModifiedTimestamp;                        //@synthesize lastModifiedTimestamp=_lastModifiedTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasWhen; 
@property (nonatomic,retain) SGDCKTimeRange * when;                               //@synthesize when=_when - In the implementation block
@property (assign,nonatomic) BOOL hasAllDay; 
@property (assign,nonatomic) BOOL allDay;                                         //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;                          //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) BOOL hasExtraKey; 
@property (nonatomic,retain) NSString * extraKey;                                 //@synthesize extraKey=_extraKey - In the implementation block
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled;                                      //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) BOOL hasSchemaOrg; 
@property (nonatomic,retain) NSData * schemaOrg;                                  //@synthesize schemaOrg=_schemaOrg - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                                   //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasTemplateName; 
@property (nonatomic,retain) NSString * templateName;                             //@synthesize templateName=_templateName - In the implementation block
@property (assign,nonatomic) BOOL hasCategoryType; 
@property (assign,nonatomic) int categoryType;                                    //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,readonly) BOOL hasInteractionInfo; 
@property (nonatomic,retain) SGDCKInteractionInfo * interactionInfo;              //@synthesize interactionInfo=_interactionInfo - In the implementation block
@property (assign,nonatomic) BOOL hasParentEntityType; 
@property (assign,nonatomic) long long parentEntityType;                          //@synthesize parentEntityType=_parentEntityType - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSData * metadata;                                   //@synthesize metadata=_metadata - In the implementation block
+(Class)locationsType;
-(NSMutableArray *)locations;
-(id)dictionaryRepresentation;
-(void)clearLocations;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(int)categoryType;
-(BOOL)hasContent;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(void)setSourceKey:(NSString *)arg1 ;
-(NSString *)groupId;
-(void)addLocations:(id)arg1 ;
-(void)setCreationTimestamp:(double)arg1 ;
-(BOOL)hasAllDay;
-(void)setHasAllDay:(BOOL)arg1 ;
-(unsigned long long)locationsCount;
-(BOOL)allDay;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)hasMetadata;
-(void)setCategoryType:(int)arg1 ;
-(double)creationTimestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setMetadata:(NSData *)arg1 ;
-(BOOL)hasCancelled;
-(void)setHasCancelled:(BOOL)arg1 ;
-(void)setLastModifiedTimestamp:(double)arg1 ;
-(id)description;
-(BOOL)hasDomain;
-(void)setGroupId:(NSString *)arg1 ;
-(double)lastModifiedTimestamp;
-(BOOL)hasWhen;
-(unsigned long long)hash;
-(NSString *)templateName;
-(SGDCKTimeRange *)when;
-(void)setTemplateName:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)sourceKey;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)schemaOrg;
-(NSData *)metadata;
-(void)setWhen:(SGDCKTimeRange *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasGroupId;
-(BOOL)hasSourceKey;
-(void)setHasCreationTimestamp:(BOOL)arg1 ;
-(BOOL)hasCreationTimestamp;
-(void)setHasLastModifiedTimestamp:(BOOL)arg1 ;
-(BOOL)hasLastModifiedTimestamp;
-(id)locationsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasExtraKey;
-(BOOL)hasSchemaOrg;
-(BOOL)hasTemplateName;
-(void)setHasCategoryType:(BOOL)arg1 ;
-(BOOL)hasCategoryType;
-(id)categoryTypeAsString:(int)arg1 ;
-(int)StringAsCategoryType:(id)arg1 ;
-(BOOL)hasInteractionInfo;
-(void)setParentEntityType:(long long)arg1 ;
-(void)setHasParentEntityType:(BOOL)arg1 ;
-(BOOL)hasParentEntityType;
-(NSString *)extraKey;
-(void)setExtraKey:(NSString *)arg1 ;
-(void)setSchemaOrg:(NSData *)arg1 ;
-(SGDCKInteractionInfo *)interactionInfo;
-(void)setInteractionInfo:(SGDCKInteractionInfo *)arg1 ;
-(long long)parentEntityType;
@end

