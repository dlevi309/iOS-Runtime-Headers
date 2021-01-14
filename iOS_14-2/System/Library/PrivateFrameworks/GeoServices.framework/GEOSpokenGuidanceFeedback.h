/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTrafficCameraInformation;

@interface GEOSpokenGuidanceFeedback : PBCodable <NSCopying> {

	GEOTrafficCameraInformation* _trafficCameraGuidanceFeedback;
	int _spokenGuidanceIndex;
	BOOL _shortPrompt;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasSpokenGuidanceIndex; 
@property (assign,nonatomic) int spokenGuidanceIndex; 
@property (assign,nonatomic) BOOL hasShortPrompt; 
@property (assign,nonatomic) BOOL shortPrompt; 
@property (nonatomic,readonly) BOOL hasTrafficCameraGuidanceFeedback; 
@property (nonatomic,retain) GEOTrafficCameraInformation * trafficCameraGuidanceFeedback; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOTrafficCameraInformation *)trafficCameraGuidanceFeedback;
-(void)setTrafficCameraGuidanceFeedback:(GEOTrafficCameraInformation *)arg1 ;
-(BOOL)hasTrafficCameraGuidanceFeedback;
-(BOOL)shortPrompt;
-(void)setShortPrompt:(BOOL)arg1 ;
-(void)setSpokenGuidanceIndex:(int)arg1 ;
-(int)spokenGuidanceIndex;
-(void)setHasSpokenGuidanceIndex:(BOOL)arg1 ;
-(void)setHasShortPrompt:(BOOL)arg1 ;
-(BOOL)hasSpokenGuidanceIndex;
-(BOOL)hasShortPrompt;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

