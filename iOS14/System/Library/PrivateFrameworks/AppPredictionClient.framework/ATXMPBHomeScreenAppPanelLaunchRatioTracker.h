/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXMPBHomeScreenAppPanelLaunchRatioTracker : PBCodable <NSCopying> {

	int _location;
	int _ratioType;
	SCD_Struct_AT5 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                   //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasRatioType; 
@property (assign,nonatomic) int ratioType;                  //@synthesize ratioType=_ratioType - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasLocation:(BOOL)arg1 ;
-(int)location;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocation:(int)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)locationAsString:(int)arg1 ;
-(int)StringAsLocation:(id)arg1 ;
-(int)ratioType;
-(void)setRatioType:(int)arg1 ;
-(void)setHasRatioType:(BOOL)arg1 ;
-(BOOL)hasRatioType;
-(id)ratioTypeAsString:(int)arg1 ;
-(int)StringAsRatioType:(id)arg1 ;
@end

