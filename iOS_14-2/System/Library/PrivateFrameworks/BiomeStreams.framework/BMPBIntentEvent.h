/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface BMPBIntentEvent : PBCodable <NSCopying> {

	double _absoluteTimestamp;
	NSString* _bundleID;
	NSString* _intentClass;
	int _intentHandlingStatus;
	int _intentType;
	NSString* _intentVerb;
	NSData* _interaction;
	NSString* _sourceId;
	SCD_Struct_BM4 _has;

}

@property (assign,nonatomic) BOOL hasAbsoluteTimestamp; 
@property (assign,nonatomic) double absoluteTimestamp;                  //@synthesize absoluteTimestamp=_absoluteTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceId; 
@property (nonatomic,retain) NSString * sourceId;                       //@synthesize sourceId=_sourceId - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentClass; 
@property (nonatomic,retain) NSString * intentClass;                    //@synthesize intentClass=_intentClass - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentVerb; 
@property (nonatomic,retain) NSString * intentVerb;                     //@synthesize intentVerb=_intentVerb - In the implementation block
@property (assign,nonatomic) BOOL hasIntentType; 
@property (assign,nonatomic) int intentType;                            //@synthesize intentType=_intentType - In the implementation block
@property (assign,nonatomic) BOOL hasIntentHandlingStatus; 
@property (assign,nonatomic) int intentHandlingStatus;                  //@synthesize intentHandlingStatus=_intentHandlingStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasInteraction; 
@property (nonatomic,retain) NSData * interaction;                      //@synthesize interaction=_interaction - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)sourceId;
-(BOOL)hasBundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setHasIntentType:(BOOL)arg1 ;
-(BOOL)hasIntentType;
-(id)intentTypeAsString:(int)arg1 ;
-(int)StringAsIntentType:(id)arg1 ;
-(void)setIntentType:(int)arg1 ;
-(void)setIntentHandlingStatus:(int)arg1 ;
-(NSString *)intentVerb;
-(void)setIntentVerb:(NSString *)arg1 ;
-(void)setIntentClass:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(double)absoluteTimestamp;
-(NSData *)interaction;
-(NSString *)intentClass;
-(int)intentHandlingStatus;
-(int)intentType;
-(BOOL)hasSourceId;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAbsoluteTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInteraction:(NSData *)arg1 ;
-(void)setSourceId:(NSString *)arg1 ;
-(void)setHasAbsoluteTimestamp:(BOOL)arg1 ;
-(BOOL)hasAbsoluteTimestamp;
-(BOOL)hasIntentClass;
-(BOOL)hasIntentVerb;
-(void)setHasIntentHandlingStatus:(BOOL)arg1 ;
-(BOOL)hasIntentHandlingStatus;
-(id)intentHandlingStatusAsString:(int)arg1 ;
-(int)StringAsIntentHandlingStatus:(id)arg1 ;
-(BOOL)hasInteraction;
@end

