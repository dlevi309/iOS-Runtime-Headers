/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDSymptomsDiagnosticIncidentReport : PBCodable <NSCopying> {

	SCD_Struct_AW3* _timestampsIncidentEvents;
	unsigned long long _duration;
	unsigned long long _timestamp;
	unsigned long long _version;
	int _dampeningType;
	NSString* _detectedName;
	NSString* _domain;
	NSString* _effectiveName;
	NSString* _groupIdentifier;
	int _handledResult;
	NSString* _identifier;
	NSMutableArray* _incidentEvents;
	NSMutableArray* _relatedNames;
	NSString* _subtype;
	NSString* _subtypeContext;
	NSString* _type;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasHandledResult; 
@property (assign,nonatomic) int handledResult;                                               //@synthesize handledResult=_handledResult - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                                               //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtype; 
@property (nonatomic,retain) NSString * subtype;                                              //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtypeContext; 
@property (nonatomic,retain) NSString * subtypeContext;                                       //@synthesize subtypeContext=_subtypeContext - In the implementation block
@property (nonatomic,readonly) BOOL hasDetectedName; 
@property (nonatomic,retain) NSString * detectedName;                                         //@synthesize detectedName=_detectedName - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveName; 
@property (nonatomic,retain) NSString * effectiveName;                                        //@synthesize effectiveName=_effectiveName - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedNames;                                   //@synthesize relatedNames=_relatedNames - In the implementation block
@property (nonatomic,readonly) unsigned long long timestampsIncidentEventsCount; 
@property (nonatomic,readonly) unsigned long long* timestampsIncidentEvents; 
@property (nonatomic,retain) NSMutableArray * incidentEvents;                                 //@synthesize incidentEvents=_incidentEvents - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupIdentifier; 
@property (nonatomic,retain) NSString * groupIdentifier;                                      //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned long long version;                                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasDampeningType; 
@property (assign,nonatomic) int dampeningType;                                               //@synthesize dampeningType=_dampeningType - In the implementation block
+(Class)relatedNamesType;
+(Class)incidentEventsType;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)subtype;
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(NSString *)groupIdentifier;
-(BOOL)hasIdentifier;
-(unsigned long long)timestamp;
-(BOOL)hasType;
-(id)relatedNamesAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)domain;
-(NSMutableArray *)relatedNames;
-(id)description;
-(BOOL)hasDomain;
-(void)addRelatedNames:(id)arg1 ;
-(void)clearRelatedNames;
-(BOOL)hasSubtype;
-(NSString *)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setRelatedNames:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubtypeContext:(NSString *)arg1 ;
-(NSString *)subtypeContext;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)hasGroupIdentifier;
-(void)copyTo:(id)arg1 ;
-(void)setSubtype:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)relatedNamesCount;
-(unsigned long long)duration;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setDetectedName:(NSString *)arg1 ;
-(void)setEffectiveName:(NSString *)arg1 ;
-(BOOL)hasDetectedName;
-(BOOL)hasEffectiveName;
-(NSString *)detectedName;
-(NSString *)effectiveName;
-(void)addIncidentEvents:(id)arg1 ;
-(unsigned long long)timestampsIncidentEventsCount;
-(void)clearTimestampsIncidentEvents;
-(unsigned long long)timestampsIncidentEventsAtIndex:(unsigned long long)arg1 ;
-(void)addTimestampsIncidentEvents:(unsigned long long)arg1 ;
-(unsigned long long)incidentEventsCount;
-(void)clearIncidentEvents;
-(id)incidentEventsAtIndex:(unsigned long long)arg1 ;
-(int)handledResult;
-(void)setHandledResult:(int)arg1 ;
-(void)setHasHandledResult:(BOOL)arg1 ;
-(BOOL)hasHandledResult;
-(id)handledResultAsString:(int)arg1 ;
-(int)StringAsHandledResult:(id)arg1 ;
-(BOOL)hasSubtypeContext;
-(unsigned long long*)timestampsIncidentEvents;
-(void)setTimestampsIncidentEvents:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(int)dampeningType;
-(void)setDampeningType:(int)arg1 ;
-(void)setHasDampeningType:(BOOL)arg1 ;
-(BOOL)hasDampeningType;
-(id)dampeningTypeAsString:(int)arg1 ;
-(int)StringAsDampeningType:(id)arg1 ;
-(NSMutableArray *)incidentEvents;
-(void)setIncidentEvents:(NSMutableArray *)arg1 ;
@end

