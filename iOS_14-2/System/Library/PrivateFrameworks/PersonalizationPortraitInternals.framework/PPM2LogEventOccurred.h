/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPM2LogEventOccurred : PBCodable <NSCopying> {

	int _event;
	SCD_Struct_PP1 _has;

}

@property (assign,nonatomic) BOOL hasEvent; 
@property (assign,nonatomic) int event;                  //@synthesize event=_event - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasEvent;
-(id)eventAsString:(int)arg1 ;
-(int)StringAsEvent:(id)arg1 ;
-(void)setHasEvent:(BOOL)arg1 ;
-(int)event;
-(void)setEvent:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

