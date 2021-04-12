/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDProactiveAppPredictionActionTimeEstimate : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _actions;
	SCD_Struct_AT4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;                  //@synthesize actions=_actions - In the implementation block
+(Class)actionType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(NSMutableArray *)actions;
-(void)setActions:(NSMutableArray *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)actionsCount;
-(void)clearActions;
-(id)actionAtIndex:(unsigned long long)arg1 ;
@end

