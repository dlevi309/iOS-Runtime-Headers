/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventGridDuration : PBCodable <NSCopying> {

	NSMutableArray* _endStateErrorReasons;
	int _displayType;
	unsigned _durationMs;
	int _endState;
	int _previousState;
	struct {
		unsigned has_displayType : 1;
		unsigned has_durationMs : 1;
		unsigned has_endState : 1;
		unsigned has_previousState : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDurationMs; 
@property (assign,nonatomic) unsigned durationMs; 
@property (assign,nonatomic) BOOL hasEndState; 
@property (assign,nonatomic) int endState; 
@property (nonatomic,retain) NSMutableArray * endStateErrorReasons; 
@property (assign,nonatomic) BOOL hasPreviousState; 
@property (assign,nonatomic) int previousState; 
@property (assign,nonatomic) BOOL hasDisplayType; 
@property (assign,nonatomic) int displayType; 
+(Class)endStateErrorReasonType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)previousState;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)durationMs;
-(void)addEndStateErrorReason:(id)arg1 ;
-(unsigned long long)endStateErrorReasonsCount;
-(void)clearEndStateErrorReasons;
-(id)endStateErrorReasonAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDurationMs;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(void)setHasPreviousState:(BOOL)arg1 ;
-(BOOL)hasPreviousState;
-(id)previousStateAsString:(int)arg1 ;
-(BOOL)hasDisplayType;
-(int)StringAsPreviousState:(id)arg1 ;
-(void)setHasDisplayType:(BOOL)arg1 ;
-(id)displayTypeAsString:(int)arg1 ;
-(int)StringAsDisplayType:(id)arg1 ;
-(id)jsonRepresentation;
-(int)displayType;
-(int)endState;
-(void)setDisplayType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPreviousState:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setDurationMs:(unsigned)arg1 ;
-(NSMutableArray *)endStateErrorReasons;
-(void)setEndStateErrorReasons:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasEndState;
-(void)setHasEndState:(BOOL)arg1 ;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEndState:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

