/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDIngestionRequestFailure : PBCodable <NSCopying> {

	unsigned long long _count;
	NSString* _host;
	int _interactionType;
	int _resourceType;
	unsigned _statusCode;
	SCD_Struct_HD6 _has;

}

@property (nonatomic,readonly) BOOL hasHost; 
@property (nonatomic,retain) NSString * host;                       //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) BOOL hasResourceType; 
@property (assign,nonatomic) int resourceType;                      //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) BOOL hasInteractionType; 
@property (assign,nonatomic) int interactionType;                   //@synthesize interactionType=_interactionType - In the implementation block
@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) unsigned statusCode;                   //@synthesize statusCode=_statusCode - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(NSString *)host;
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned)statusCode;
-(id)dictionaryRepresentation;
-(void)setHost:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)interactionType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setInteractionType:(int)arg1 ;
-(BOOL)hasHost;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(int)resourceType;
-(void)setResourceType:(int)arg1 ;
-(void)setHasResourceType:(BOOL)arg1 ;
-(BOOL)hasResourceType;
-(id)resourceTypeAsString:(int)arg1 ;
-(int)StringAsResourceType:(id)arg1 ;
-(void)setStatusCode:(unsigned)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(void)setHasInteractionType:(BOOL)arg1 ;
-(BOOL)hasInteractionType;
-(id)interactionTypeAsString:(int)arg1 ;
-(int)StringAsInteractionType:(id)arg1 ;
@end

