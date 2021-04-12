/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(int)protocolVersion;
-(void)setProtocolVersion:(int)arg1 ;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
-(BOOL)hasSessionIdentifier;
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

