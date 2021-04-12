/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NPKProtoStandaloneRequestHeader : PBCodable <NSCopying> {

	NSMutableArray* _cachedHeroImages;
	int _protocolVersion;
	NSString* _sessionIdentifier;
	NSString* _stepIdentifier;

}

@property (assign,nonatomic) int protocolVersion;                            //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSString * sessionIdentifier;                   //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasStepIdentifier; 
@property (nonatomic,retain) NSString * stepIdentifier;                      //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedHeroImages;              //@synthesize cachedHeroImages=_cachedHeroImages - In the implementation block
+(Class)cachedHeroImagesType;
-(id)dictionaryRepresentation;
-(void)setProtocolVersion:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)protocolVersion;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)protocolVersionAsString:(int)arg1 ;
-(int)StringAsProtocolVersion:(id)arg1 ;
-(void)addCachedHeroImages:(id)arg1 ;
-(unsigned long long)cachedHeroImagesCount;
-(void)clearCachedHeroImages;
-(id)cachedHeroImagesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStepIdentifier;
-(NSMutableArray *)cachedHeroImages;
-(void)setCachedHeroImages:(NSMutableArray *)arg1 ;
@end

