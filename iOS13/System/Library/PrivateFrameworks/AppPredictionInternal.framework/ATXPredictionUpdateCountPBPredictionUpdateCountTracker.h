/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXPredictionUpdateCountPBPredictionUpdateCountTracker : PBCodable <NSCopying> {

	NSString* _abGroup;
	int _clientType;
	int _triggerType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTriggerType; 
@property (assign,nonatomic) int triggerType;                  //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL hasClientType; 
@property (assign,nonatomic) int clientType;                   //@synthesize clientType=_clientType - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;               //@synthesize abGroup=_abGroup - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)clientType;
-(void)setClientType:(int)arg1 ;
-(int)triggerType;
-(void)setTriggerType:(int)arg1 ;
-(NSString *)abGroup;
-(BOOL)hasAbGroup;
-(void)setAbGroup:(NSString *)arg1 ;
-(void)setHasTriggerType:(BOOL)arg1 ;
-(BOOL)hasTriggerType;
-(id)triggerTypeAsString:(int)arg1 ;
-(int)StringAsTriggerType:(id)arg1 ;
-(void)setHasClientType:(BOOL)arg1 ;
-(BOOL)hasClientType;
-(id)clientTypeAsString:(int)arg1 ;
-(int)StringAsClientType:(id)arg1 ;
@end

