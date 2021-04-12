/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineHintSourceUsageInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	int _hintSource;
	int _isLOI;
	int _isVisit;
	SCD_Struct_AW4 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasHintSource; 
@property (assign,nonatomic) int hintSource;                        //@synthesize hintSource=_hintSource - In the implementation block
@property (assign,nonatomic) BOOL hasIsLOI; 
@property (assign,nonatomic) int isLOI;                             //@synthesize isLOI=_isLOI - In the implementation block
@property (assign,nonatomic) BOOL hasIsVisit; 
@property (assign,nonatomic) int isVisit;                           //@synthesize isVisit=_isVisit - In the implementation block
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsVisit:(int)arg1 ;
-(void)setIsLOI:(int)arg1 ;
-(void)setHintSource:(int)arg1 ;
-(void)setHasHintSource:(BOOL)arg1 ;
-(BOOL)hasHintSource;
-(int)hintSource;
-(void)setHasIsLOI:(BOOL)arg1 ;
-(BOOL)hasIsLOI;
-(void)setHasIsVisit:(BOOL)arg1 ;
-(BOOL)hasIsVisit;
-(int)isLOI;
-(int)isVisit;
@end
