/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOSpokenGuidanceFeedback : PBCodable <NSCopying> {

	int _spokenGuidanceIndex;
	BOOL _shortPrompt;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasSpokenGuidanceIndex; 
@property (assign,nonatomic) int spokenGuidanceIndex; 
@property (assign,nonatomic) BOOL hasShortPrompt; 
@property (assign,nonatomic) BOOL shortPrompt; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)spokenGuidanceIndex;
-(void)setSpokenGuidanceIndex:(int)arg1 ;
-(void)setHasSpokenGuidanceIndex:(BOOL)arg1 ;
-(BOOL)hasSpokenGuidanceIndex;
-(BOOL)shortPrompt;
-(void)setShortPrompt:(BOOL)arg1 ;
-(void)setHasShortPrompt:(BOOL)arg1 ;
-(BOOL)hasShortPrompt;
@end

