/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2ContactRejected : PBCodable <NSCopying> {

	int _app;
	int _extracted;
	unsigned _extractionModelVersion;
	NSString* _key;
	int _type;
	int _uiType;
	BOOL _selfId;
	SCD_Struct_SG6 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasApp; 
@property (assign,nonatomic) int app;                                      //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) BOOL hasExtracted; 
@property (assign,nonatomic) int extracted;                                //@synthesize extracted=_extracted - In the implementation block
@property (assign,nonatomic) BOOL hasSelfId; 
@property (assign,nonatomic) BOOL selfId;                                  //@synthesize selfId=_selfId - In the implementation block
@property (assign,nonatomic) BOOL hasExtractionModelVersion; 
@property (assign,nonatomic) unsigned extractionModelVersion;              //@synthesize extractionModelVersion=_extractionModelVersion - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasUiType; 
@property (assign,nonatomic) int uiType;                                   //@synthesize uiType=_uiType - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(id)appAsString:(int)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasApp;
-(int)uiType;
-(BOOL)selfId;
-(void)setHasApp:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setExtracted:(int)arg1 ;
-(void)setHasExtracted:(BOOL)arg1 ;
-(BOOL)hasExtracted;
-(id)extractedAsString:(int)arg1 ;
-(int)StringAsExtracted:(id)arg1 ;
-(void)setExtractionModelVersion:(unsigned)arg1 ;
-(void)setHasExtractionModelVersion:(BOOL)arg1 ;
-(BOOL)hasExtractionModelVersion;
-(void)setSelfId:(BOOL)arg1 ;
-(void)setHasSelfId:(BOOL)arg1 ;
-(void)setUiType:(int)arg1 ;
-(void)setHasUiType:(BOOL)arg1 ;
-(id)uiTypeAsString:(int)arg1 ;
-(int)StringAsUiType:(id)arg1 ;
-(unsigned)extractionModelVersion;
-(int)StringAsApp:(id)arg1 ;
-(void)setApp:(int)arg1 ;
-(id)description;
-(NSString *)key;
-(int)type;
-(unsigned long long)hash;
-(int)app;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)extracted;
-(BOOL)hasSelfId;
-(BOOL)hasUiType;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

