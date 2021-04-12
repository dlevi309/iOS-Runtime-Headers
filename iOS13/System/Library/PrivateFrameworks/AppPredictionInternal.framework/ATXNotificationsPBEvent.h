/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXNotificationsPBEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _event;
	int _pos;
	BOOL _isOffscreen;
	BOOL _topOfPile;
	SCD_Struct_AT6 _has;

}

@property (assign,nonatomic) BOOL hasEvent; 
@property (assign,nonatomic) int event;                                 //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsOffscreen; 
@property (assign,nonatomic) BOOL isOffscreen;                          //@synthesize isOffscreen=_isOffscreen - In the implementation block
@property (assign,nonatomic) BOOL hasPos; 
@property (assign,nonatomic) int pos;                                   //@synthesize pos=_pos - In the implementation block
@property (assign,nonatomic) BOOL hasTopOfPile; 
@property (assign,nonatomic) BOOL topOfPile;                            //@synthesize topOfPile=_topOfPile - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)event;
-(void)setEvent:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)eventAsString:(int)arg1 ;
-(int)StringAsEvent:(id)arg1 ;
-(BOOL)hasEvent;
-(void)setHasEvent:(BOOL)arg1 ;
-(int)pos;
-(void)setPos:(int)arg1 ;
-(BOOL)isOffscreen;
-(void)setIsOffscreen:(BOOL)arg1 ;
-(void)setHasIsOffscreen:(BOOL)arg1 ;
-(BOOL)hasIsOffscreen;
-(void)setHasPos:(BOOL)arg1 ;
-(BOOL)hasPos;
-(void)setTopOfPile:(BOOL)arg1 ;
-(void)setHasTopOfPile:(BOOL)arg1 ;
-(BOOL)hasTopOfPile;
-(BOOL)topOfPile;
@end

