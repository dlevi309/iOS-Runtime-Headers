/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isValid:(id)arg1 ;
+(Class)endStateErrorReasonType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)displayType;
-(void)setDisplayType:(int)arg1 ;
-(int)previousState;
-(int)endState;
-(void)setEndState:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasEndState:(BOOL)arg1 ;
-(BOOL)hasEndState;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(void)addEndStateErrorReason:(id)arg1 ;
-(unsigned long long)endStateErrorReasonsCount;
-(void)clearEndStateErrorReasons;
-(id)endStateErrorReasonAtIndex:(unsigned long long)arg1 ;
-(unsigned)durationMs;
-(void)setDurationMs:(unsigned)arg1 ;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(BOOL)hasDurationMs;
-(NSMutableArray *)endStateErrorReasons;
-(void)setEndStateErrorReasons:(NSMutableArray *)arg1 ;
-(void)setPreviousState:(int)arg1 ;
-(void)setHasPreviousState:(BOOL)arg1 ;
-(BOOL)hasPreviousState;
-(id)previousStateAsString:(int)arg1 ;
-(int)StringAsPreviousState:(id)arg1 ;
-(void)setHasDisplayType:(BOOL)arg1 ;
-(BOOL)hasDisplayType;
-(id)displayTypeAsString:(int)arg1 ;
-(int)StringAsDisplayType:(id)arg1 ;
@end

