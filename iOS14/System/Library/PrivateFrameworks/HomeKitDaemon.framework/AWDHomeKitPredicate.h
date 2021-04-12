/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitPredicate : PBCodable <NSCopying> {

	NSMutableArray* _presenceEvents;
	BOOL _containsCalendarTime;
	BOOL _containsCharacteristicValue;
	BOOL _containsSignificantTime;
	BOOL _containsSignificantTimeOffset;
	SCD_Struct_AW8 _has;

}

@property (nonatomic,retain) NSMutableArray * presenceEvents;                    //@synthesize presenceEvents=_presenceEvents - In the implementation block
@property (assign,nonatomic) BOOL hasContainsCharacteristicValue; 
@property (assign,nonatomic) BOOL containsCharacteristicValue;                   //@synthesize containsCharacteristicValue=_containsCharacteristicValue - In the implementation block
@property (assign,nonatomic) BOOL hasContainsSignificantTime; 
@property (assign,nonatomic) BOOL containsSignificantTime;                       //@synthesize containsSignificantTime=_containsSignificantTime - In the implementation block
@property (assign,nonatomic) BOOL hasContainsSignificantTimeOffset; 
@property (assign,nonatomic) BOOL containsSignificantTimeOffset;                 //@synthesize containsSignificantTimeOffset=_containsSignificantTimeOffset - In the implementation block
@property (assign,nonatomic) BOOL hasContainsCalendarTime; 
@property (assign,nonatomic) BOOL containsCalendarTime;                          //@synthesize containsCalendarTime=_containsCalendarTime - In the implementation block
+(Class)presenceEventsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)presenceEvents;
-(void)setPresenceEvents:(NSMutableArray *)arg1 ;
-(void)setContainsCalendarTime:(BOOL)arg1 ;
-(void)setContainsCharacteristicValue:(BOOL)arg1 ;
-(void)setContainsSignificantTime:(BOOL)arg1 ;
-(void)setContainsSignificantTimeOffset:(BOOL)arg1 ;
-(void)addPresenceEvents:(id)arg1 ;
-(unsigned long long)presenceEventsCount;
-(void)clearPresenceEvents;
-(id)presenceEventsAtIndex:(unsigned long long)arg1 ;
-(void)setHasContainsCharacteristicValue:(BOOL)arg1 ;
-(BOOL)hasContainsCharacteristicValue;
-(void)setHasContainsSignificantTime:(BOOL)arg1 ;
-(BOOL)hasContainsSignificantTime;
-(void)setHasContainsSignificantTimeOffset:(BOOL)arg1 ;
-(BOOL)hasContainsSignificantTimeOffset;
-(void)setHasContainsCalendarTime:(BOOL)arg1 ;
-(BOOL)hasContainsCalendarTime;
-(BOOL)containsCharacteristicValue;
-(BOOL)containsSignificantTime;
-(BOOL)containsSignificantTimeOffset;
-(BOOL)containsCalendarTime;
@end

